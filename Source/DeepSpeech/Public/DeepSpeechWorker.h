#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"

#include <deepspeechlibrary.h>

class DEEPSPEECH_API FDeepSpeechWorker : public FRunnable
{
public:
	FDeepSpeechWorker();
	FDeepSpeechWorker(ModelState* context, TArray<uint8>& buffer);

	virtual ~FDeepSpeechWorker() override;

	bool bRunningWorker;
	bool bFinishedWorker;
	/* worker result after running */
	FString result;

	bool Init() override;
	uint32 Run() override;
	void Stop() override;
private:
	ModelState* context;
	TArray<uint8> voiceBuffer;
	FRunnableThread* thread;
};