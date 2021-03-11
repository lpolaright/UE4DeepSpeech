// Fill out your copyright notice in the Description page of Project Settings.


#include "DeepSpeechComponent.h"

// Sets default values for this component's properties
UDeepSpeechComponent::UDeepSpeechComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UDeepSpeechComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDeepSpeechComponent::BeginDestroy()
{
	Super::BeginDestroy();
	if (voiceCapture != nullptr) {
		voiceCapture->Shutdown();
	}
	voiceCaptureBuffer.Empty();
	voiceCaptureSize = 0;
}


// Called every frame
void UDeepSpeechComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	uint32 AvailableVoiceDataInBytes = 0;
	auto captureState = voiceCapture->GetCaptureState(AvailableVoiceDataInBytes);
	if (voiceCapture.IsValid() && captureState == EVoiceCaptureState::Type::Ok && AvailableVoiceDataInBytes > 0)
	{
		TArray<uint8> TempCaptureBuffer;
		TempCaptureBuffer.SetNumUninitialized(AvailableVoiceDataInBytes);

		uint32 ReadVoiceDataBytes = 0;
		voiceCapture->GetVoiceData(TempCaptureBuffer.GetData(), AvailableVoiceDataInBytes, ReadVoiceDataBytes);

		voiceCaptureBuffer.Append(TempCaptureBuffer.GetData(), ReadVoiceDataBytes);
		voiceCaptureSize += ReadVoiceDataBytes;
	}

	// If there is a worker
	// And it is not running anymore
	// And it finished
	if (worker != nullptr && !worker->bRunningWorker && worker->bFinishedWorker) {
		// Report and broadcast
		if (worker->result != lastResultReported) {
			OnSpeechRecognized.Broadcast(worker->result);
			lastResultReported = worker->result;
		}		
	}

	// If we captured enough audio
	// And no other worker is running
	if (((voiceCaptureBuffer.Num() > minBufferSizeToProcess)) &&
		(worker == nullptr || !worker->bRunningWorker))
	{
		// Start one with the details
		SpawnSpeechWorker(voiceCaptureBuffer);
	}

}

void UDeepSpeechComponent::CreateModel(const FString& modelLocation, bool& ReturnValue, FString& errorMessage)
{
	FString modelPath = FPaths::ProjectContentDir();
	const TCHAR* modelFilePath = *modelLocation;
	modelPath.PathAppend(modelFilePath, modelLocation.Len());
	int status = DS_CreateModel(TCHAR_TO_ANSI(*modelPath), &ctx);
	if (status != 0) {
		const char* error = DS_ErrorCodeToErrorMessage(status);
		UE_LOG(DeepSpeech, Error, TEXT("This is the error: %s"), error);
		errorMessage.Append(error);
		ReturnValue = false;
	}
	
	ReturnValue = true;
}

void UDeepSpeechComponent::CreateVoiceCapture(const FString& deviceName, bool& ReturnValue)
{
	FVoiceModule& vm = FModuleManager::LoadModuleChecked<FVoiceModule>("Voice");
	voiceCapture = vm.CreateVoiceCapture(deviceName, 16000, 1);
	voiceCaptureBuffer.SetNumUninitialized(10000);
	voiceCaptureSize = 0;
	ReturnValue = voiceCapture.IsValid();
}

void UDeepSpeechComponent::StartRecording()
{
	bool voiceCaptureStatus = voiceCapture->Start();
}

void UDeepSpeechComponent::StopRecording()
{
	voiceCapture->Stop();
	voiceCaptureBuffer.Empty();
	voiceCaptureSize = 0;
}

void UDeepSpeechComponent::SpawnSpeechWorker(TArray<uint8>& voiceData)
{
	worker = new FDeepSpeechWorker(ctx, voiceData);
}

void UDeepSpeechComponent::AddHotWord(const FString hotword, const int boostValue)
{
	if (ctx != nullptr) {
		DS_AddHotWord(ctx, TCHAR_TO_ANSI(hotword.GetCharArray().GetData()), boostValue);
	}
}

void UDeepSpeechComponent::AddHotWords(const TArray<FString>& hotwords, const int boostValue)
{
	if (ctx != nullptr) {
		for (size_t i = 0; i < hotwords.Num(); ++i)
		{
			AddHotWord(hotwords[i], boostValue);
		}
	}
}

void UDeepSpeechComponent::AddHotWordsMap(const TMap<FString, uint8>& hotwordsMap)
{
	if (ctx != nullptr) {
		TArray<FString> hotwords;
		hotwordsMap.GenerateKeyArray(hotwords);

		for (size_t i = 0; i < hotwords.Num(); ++i) {
			AddHotWord(hotwords[i], hotwordsMap[hotwords[i]]);
		}
	}
}