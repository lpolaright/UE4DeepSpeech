// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "OnlineSubsystemUtils.h"


class FDeepSpeechModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

DECLARE_LOG_CATEGORY_EXTERN(DeepSpeech, Verbose, All);
DEFINE_LOG_CATEGORY(DeepSpeech);