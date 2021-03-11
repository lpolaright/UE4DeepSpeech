// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeepSpeech/Public/DeepSpeechComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeepSpeechComponent() {}
// Cross Module References
	DEEPSPEECH_API UFunction* Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeepSpeech();
	DEEPSPEECH_API UClass* Z_Construct_UClass_UDeepSpeechComponent_NoRegister();
	DEEPSPEECH_API UClass* Z_Construct_UClass_UDeepSpeechComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics
	{
		struct _Script_DeepSpeech_eventSpeechRecognizedSignature_Parms
		{
			FString RecognizedString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecognizedString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::NewProp_RecognizedString = { "RecognizedString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeepSpeech_eventSpeechRecognizedSignature_Parms, RecognizedString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::NewProp_RecognizedString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeepSpeech, nullptr, "SpeechRecognizedSignature__DelegateSignature", "DeepSpeechComponent", "OnSpeechRecognized", sizeof(_Script_DeepSpeech_eventSpeechRecognizedSignature_Parms), Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execSpawnSpeechWorker)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_voiceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnSpeechWorker(Z_Param_Out_voiceData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execAddHotWordsMap)
	{
		P_GET_TMAP_REF(FString,uint8,Z_Param_Out_hotwordsMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHotWordsMap(Z_Param_Out_hotwordsMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execAddHotWords)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_hotwords);
		P_GET_PROPERTY(FIntProperty,Z_Param_boostValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHotWords(Z_Param_Out_hotwords,Z_Param_boostValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execAddHotWord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hotword);
		P_GET_PROPERTY(FIntProperty,Z_Param_boostValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHotWord(Z_Param_hotword,Z_Param_boostValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execStopRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execStartRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execCreateVoiceCapture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceName);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVoiceCapture(Z_Param_deviceName,Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeepSpeechComponent::execCreateModel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_modelLocation);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateModel(Z_Param_modelLocation,Z_Param_Out_ReturnValue,Z_Param_Out_errorMessage);
		P_NATIVE_END;
	}
	void UDeepSpeechComponent::StaticRegisterNativesUDeepSpeechComponent()
	{
		UClass* Class = UDeepSpeechComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHotWord", &UDeepSpeechComponent::execAddHotWord },
			{ "AddHotWords", &UDeepSpeechComponent::execAddHotWords },
			{ "AddHotWordsMap", &UDeepSpeechComponent::execAddHotWordsMap },
			{ "CreateModel", &UDeepSpeechComponent::execCreateModel },
			{ "CreateVoiceCapture", &UDeepSpeechComponent::execCreateVoiceCapture },
			{ "SpawnSpeechWorker", &UDeepSpeechComponent::execSpawnSpeechWorker },
			{ "StartRecording", &UDeepSpeechComponent::execStartRecording },
			{ "StopRecording", &UDeepSpeechComponent::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics
	{
		struct DeepSpeechComponent_eventAddHotWord_Parms
		{
			FString hotword;
			int32 boostValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hotword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hotword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boostValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_boostValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_hotword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_hotword = { "hotword", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventAddHotWord_Parms, hotword), METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_hotword_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_hotword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_boostValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_boostValue = { "boostValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventAddHotWord_Parms, boostValue), METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_boostValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_boostValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_hotword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::NewProp_boostValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09""Adds a hotword, given a string and a boost value.\n\x09""Deboosting is also available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Adds a hotword, given a string and a boost value.\nDeboosting is also available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "AddHotWord", nullptr, nullptr, sizeof(DeepSpeechComponent_eventAddHotWord_Parms), Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics
	{
		struct DeepSpeechComponent_eventAddHotWords_Parms
		{
			TArray<FString> hotwords;
			int32 boostValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hotwords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hotwords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_hotwords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boostValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_boostValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_hotwords_Inner = { "hotwords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_hotwords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_hotwords = { "hotwords", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventAddHotWords_Parms, hotwords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_hotwords_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_hotwords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_boostValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_boostValue = { "boostValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventAddHotWords_Parms, boostValue), METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_boostValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_boostValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_hotwords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_hotwords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::NewProp_boostValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09""Adds hotwords, given a list of strings and one boost value for all of them.\n\x09""Deboosting is also available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Adds hotwords, given a list of strings and one boost value for all of them.\nDeboosting is also available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "AddHotWords", nullptr, nullptr, sizeof(DeepSpeechComponent_eventAddHotWords_Parms), Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics
	{
		struct DeepSpeechComponent_eventAddHotWordsMap_Parms
		{
			TMap<FString,uint8> hotwordsMap;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hotwordsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hotwordsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hotwordsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_hotwordsMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap_ValueProp = { "hotwordsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap_Key_KeyProp = { "hotwordsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap = { "hotwordsMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventAddHotWordsMap_Parms, hotwordsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::NewProp_hotwordsMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09""Adds hotwords, given a map of a string to a boost value.\n\x09""Deboosting is also available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Adds hotwords, given a map of a string to a boost value.\nDeboosting is also available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "AddHotWordsMap", nullptr, nullptr, sizeof(DeepSpeechComponent_eventAddHotWordsMap_Parms), Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics
	{
		struct DeepSpeechComponent_eventCreateModel_Parms
		{
			FString modelLocation;
			bool ReturnValue;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_modelLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_modelLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_modelLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_modelLocation = { "modelLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventCreateModel_Parms, modelLocation), METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_modelLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_modelLocation_MetaData)) };
	void Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeepSpeechComponent_eventCreateModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeepSpeechComponent_eventCreateModel_Parms), &Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventCreateModel_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_modelLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/* \n\x09Given a trained model location, relative to Content folder of your game.\n\x09Will attempt to generate a model context object, which is the bread and butter of DeepSpeech!\n\x09*/" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Given a trained model location, relative to Content folder of your game.\nWill attempt to generate a model context object, which is the bread and butter of DeepSpeech!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "CreateModel", nullptr, nullptr, sizeof(DeepSpeechComponent_eventCreateModel_Parms), Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_CreateModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_CreateModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics
	{
		struct DeepSpeechComponent_eventCreateVoiceCapture_Parms
		{
			FString deviceName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_deviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventCreateVoiceCapture_Parms, deviceName), METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_deviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_deviceName_MetaData)) };
	void Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeepSpeechComponent_eventCreateVoiceCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeepSpeechComponent_eventCreateVoiceCapture_Parms), &Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09""Create a voice capture device based on the device name\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Create a voice capture device based on the device name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "CreateVoiceCapture", nullptr, nullptr, sizeof(DeepSpeechComponent_eventCreateVoiceCapture_Parms), Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics
	{
		struct DeepSpeechComponent_eventSpawnSpeechWorker_Parms
		{
			TArray<uint8> voiceData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_voiceData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_voiceData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::NewProp_voiceData_Inner = { "voiceData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::NewProp_voiceData = { "voiceData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeepSpeechComponent_eventSpawnSpeechWorker_Parms, voiceData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::NewProp_voiceData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::NewProp_voiceData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09Spawns a speech worker, it will analyse the voice data on a different thread.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Spawns a speech worker, it will analyse the voice data on a different thread." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "SpawnSpeechWorker", nullptr, nullptr, sizeof(DeepSpeechComponent_eventSpawnSpeechWorker_Parms), Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_StartRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09Starts recording, and populates the buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Starts recording, and populates the buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "StartRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeepSpeechComponent_StopRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeepSpeechComponent_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09Stops recording, and cleans up the buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "Stops recording, and cleans up the buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeepSpeechComponent_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepSpeechComponent, nullptr, "StopRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeepSpeechComponent_StopRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeepSpeechComponent_StopRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeepSpeechComponent_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeepSpeechComponent_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeepSpeechComponent_NoRegister()
	{
		return UDeepSpeechComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDeepSpeechComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpeechRecognized_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpeechRecognized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minBufferSizeToProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minBufferSizeToProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voiceCaptureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_voiceCaptureSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeepSpeechComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeepSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeepSpeechComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeepSpeechComponent_AddHotWord, "AddHotWord" }, // 351247879
		{ &Z_Construct_UFunction_UDeepSpeechComponent_AddHotWords, "AddHotWords" }, // 1143259030
		{ &Z_Construct_UFunction_UDeepSpeechComponent_AddHotWordsMap, "AddHotWordsMap" }, // 3604596891
		{ &Z_Construct_UFunction_UDeepSpeechComponent_CreateModel, "CreateModel" }, // 3846267714
		{ &Z_Construct_UFunction_UDeepSpeechComponent_CreateVoiceCapture, "CreateVoiceCapture" }, // 3414896198
		{ &Z_Construct_UFunction_UDeepSpeechComponent_SpawnSpeechWorker, "SpawnSpeechWorker" }, // 2072186236
		{ &Z_Construct_UFunction_UDeepSpeechComponent_StartRecording, "StartRecording" }, // 1251473761
		{ &Z_Construct_UFunction_UDeepSpeechComponent_StopRecording, "StopRecording" }, // 4104371321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeepSpeechComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DeepSpeechComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_OnSpeechRecognized_MetaData[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09When a speech is recognised based on the voice data, a result will be broadcasted\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "When a speech is recognised based on the voice data, a result will be broadcasted" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_OnSpeechRecognized = { "OnSpeechRecognized", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeepSpeechComponent, OnSpeechRecognized), Z_Construct_USparseDelegateFunction_DeepSpeech_SpeechRecognizedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_OnSpeechRecognized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_OnSpeechRecognized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_minBufferSizeToProcess_MetaData[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09The minimal size of the buffer to process for deep speech.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "The minimal size of the buffer to process for deep speech." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_minBufferSizeToProcess = { "minBufferSizeToProcess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeepSpeechComponent, minBufferSizeToProcess), METADATA_PARAMS(Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_minBufferSizeToProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_minBufferSizeToProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_voiceCaptureSize_MetaData[] = {
		{ "Category", "DeepSpeech" },
		{ "Comment", "/*\n\x09The size of the voice capture buffer right now.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DeepSpeechComponent.h" },
		{ "ToolTip", "The size of the voice capture buffer right now." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_voiceCaptureSize = { "voiceCaptureSize", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeepSpeechComponent, voiceCaptureSize), METADATA_PARAMS(Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_voiceCaptureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_voiceCaptureSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeepSpeechComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_OnSpeechRecognized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_minBufferSizeToProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeepSpeechComponent_Statics::NewProp_voiceCaptureSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeepSpeechComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeepSpeechComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeepSpeechComponent_Statics::ClassParams = {
		&UDeepSpeechComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeepSpeechComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeepSpeechComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeepSpeechComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeepSpeechComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeepSpeechComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeepSpeechComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeepSpeechComponent, 2537276661);
	template<> DEEPSPEECH_API UClass* StaticClass<UDeepSpeechComponent>()
	{
		return UDeepSpeechComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeepSpeechComponent(Z_Construct_UClass_UDeepSpeechComponent, &UDeepSpeechComponent::StaticClass, TEXT("/Script/DeepSpeech"), TEXT("UDeepSpeechComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeepSpeechComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
