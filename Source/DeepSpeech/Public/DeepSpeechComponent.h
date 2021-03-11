// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <deepspeechlibrary.h>
#include "OnlineSubsystemUtils.h"

#include "VoiceModule.h"
#include "DeepSpeechWorker.h"

//#include "Voice.h"
//#include "Interfaces/VoiceCapture.h"
#include "DeepSpeechComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FSpeechRecognizedSignature, UDeepSpeechComponent, OnSpeechRecognized, FString, RecognizedString);

UCLASS( BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEEPSPEECH_API UDeepSpeechComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDeepSpeechComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech", ExpandBoolAsExecs = "ReturnValue"))
	/* 
	Given a trained model location, relative to Content folder of your game.
	Will attempt to generate a model context object, which is the bread and butter of DeepSpeech!
	*/
	void CreateModel(const FString& modelLocation, bool& ReturnValue, FString& errorMessage);

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech"))
	/*
	Create a voice capture device based on the device name
	*/
	void CreateVoiceCapture(const FString& deviceName, bool& ReturnValue);

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech"))
	/*
	Starts recording, and populates the buffer.
	*/
	void StartRecording();

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech"))
	/*
	Stops recording, and cleans up the buffer.
	*/
	void StopRecording();

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech"))
	/*
	Adds a hotword, given a string and a boost value.
	Deboosting is also available.
	*/
	void AddHotWord(const FString hotword, const int boostValue);

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech"))
	/*
	Adds hotwords, given a list of strings and one boost value for all of them.
	Deboosting is also available.
	*/
	void AddHotWords(const TArray<FString>& hotwords, const int boostValue);

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech"))
	/*
	Adds hotwords, given a map of a string to a boost value.
	Deboosting is also available.
	*/
	void AddHotWordsMap(const TMap<FString, uint8>& hotwordsMap);

	UFUNCTION(BlueprintCallable, meta = (Category = "DeepSpeech"))
	/*
	Spawns a speech worker, it will analyse the voice data on a different thread.
	*/
	void SpawnSpeechWorker(TArray<uint8>& voiceData);

	UPROPERTY(BlueprintAssignable, Category = "DeepSpeech")
	/*
	When a speech is recognised based on the voice data, a result will be broadcasted
	*/
	FSpeechRecognizedSignature OnSpeechRecognized;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeepSpeech")
	/*
	The minimal size of the buffer to process for deep speech.
	*/
	int32 minBufferSizeToProcess = 100000;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DeepSpeech")
	/*
	The size of the voice capture buffer right now.
	*/
	int32 voiceCaptureSize;
private:
	ModelState* ctx;
	TSharedPtr<IVoiceCapture> voiceCapture;
	FDeepSpeechWorker* worker;
	TArray<uint8> voiceCaptureBuffer;
	FString lastResultReported;
};