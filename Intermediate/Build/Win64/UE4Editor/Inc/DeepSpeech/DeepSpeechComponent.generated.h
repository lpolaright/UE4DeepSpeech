// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef DEEPSPEECH_DeepSpeechComponent_generated_h
#error "DeepSpeechComponent.generated.h already included, missing '#pragma once' in DeepSpeechComponent.h"
#endif
#define DEEPSPEECH_DeepSpeechComponent_generated_h

#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_18_DELEGATE \
struct _Script_DeepSpeech_eventSpeechRecognizedSignature_Parms \
{ \
	FString RecognizedString; \
}; \
static inline void FSpeechRecognizedSignature_DelegateWrapper(const FMulticastScriptDelegate& SpeechRecognizedSignature, const FString& RecognizedString) \
{ \
	_Script_DeepSpeech_eventSpeechRecognizedSignature_Parms Parms; \
	Parms.RecognizedString=RecognizedString; \
	SpeechRecognizedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_SPARSE_DATA
#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnSpeechWorker); \
	DECLARE_FUNCTION(execAddHotWordsMap); \
	DECLARE_FUNCTION(execAddHotWords); \
	DECLARE_FUNCTION(execAddHotWord); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execCreateVoiceCapture); \
	DECLARE_FUNCTION(execCreateModel);


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnSpeechWorker); \
	DECLARE_FUNCTION(execAddHotWordsMap); \
	DECLARE_FUNCTION(execAddHotWords); \
	DECLARE_FUNCTION(execAddHotWord); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execCreateVoiceCapture); \
	DECLARE_FUNCTION(execCreateModel);


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeepSpeechComponent(); \
	friend struct Z_Construct_UClass_UDeepSpeechComponent_Statics; \
public: \
	DECLARE_CLASS(UDeepSpeechComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeepSpeech"), NO_API) \
	DECLARE_SERIALIZER(UDeepSpeechComponent)


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDeepSpeechComponent(); \
	friend struct Z_Construct_UClass_UDeepSpeechComponent_Statics; \
public: \
	DECLARE_CLASS(UDeepSpeechComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeepSpeech"), NO_API) \
	DECLARE_SERIALIZER(UDeepSpeechComponent)


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeepSpeechComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeepSpeechComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeepSpeechComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeepSpeechComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeepSpeechComponent(UDeepSpeechComponent&&); \
	NO_API UDeepSpeechComponent(const UDeepSpeechComponent&); \
public:


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeepSpeechComponent(UDeepSpeechComponent&&); \
	NO_API UDeepSpeechComponent(const UDeepSpeechComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeepSpeechComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeepSpeechComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeepSpeechComponent)


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_20_PROLOG
#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_SPARSE_DATA \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_RPC_WRAPPERS \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_INCLASS \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_SPARSE_DATA \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEEPSPEECH_API UClass* StaticClass<class UDeepSpeechComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DeepSpeech_Source_DeepSpeech_Public_DeepSpeechComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
