#include "DeepSpeechWorker.h"

FDeepSpeechWorker::FDeepSpeechWorker()
{
	this->bRunningWorker = false;
	this->bFinishedWorker = false;
}

FDeepSpeechWorker::FDeepSpeechWorker(ModelState* context, TArray<uint8>& buffer)
{
	this->context = context;
	this->voiceBuffer = MoveTemp(buffer);
	this->bRunningWorker = true;
	this->bFinishedWorker = false;
	thread = FRunnableThread::Create(this, TEXT("DeepSpeechWorkerThread"));
}

FDeepSpeechWorker::~FDeepSpeechWorker()
{
	if (thread)
	{
		thread->Kill();
		delete thread;
	}
}

bool FDeepSpeechWorker::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Custom thread is working"))
	result.Empty();
	return true;
}

uint32 FDeepSpeechWorker::Run()
{
	while (bRunningWorker) {
		char* tempResult = DS_SpeechToText(context, (const short*)voiceBuffer.GetData(), voiceBuffer.Num());
		result = FString(tempResult);
		voiceBuffer.Empty();
		UE_LOG(LogTemp, Warning, TEXT("Changing run thread to false, and result: %s"), result.GetCharArray().GetData());
		bRunningWorker = false;
		bFinishedWorker = true;
	}
	return 0;
}

void FDeepSpeechWorker::Stop()
{
	bFinishedWorker = false;
	bRunningWorker = false;
}