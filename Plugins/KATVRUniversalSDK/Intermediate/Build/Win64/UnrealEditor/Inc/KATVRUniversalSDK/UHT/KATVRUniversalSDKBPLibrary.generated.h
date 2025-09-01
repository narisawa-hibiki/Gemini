// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KATVRUniversalSDKBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInstallPaths;
struct FKATDeviceDesc;
struct FKATTreadMillMemoryData;
#ifdef KATVRUNIVERSALSDK_KATVRUniversalSDKBPLibrary_generated_h
#error "KATVRUniversalSDKBPLibrary.generated.h already included, missing '#pragma once' in KATVRUniversalSDKBPLibrary.h"
#endif
#define KATVRUNIVERSALSDK_KATVRUniversalSDKBPLibrary_generated_h

#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKATDeviceDesc_Statics; \
	KATVRUNIVERSALSDK_API static class UScriptStruct* StaticStruct();


template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<struct FKATDeviceDesc>();

#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceData_Statics; \
	KATVRUNIVERSALSDK_API static class UScriptStruct* StaticStruct();


template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<struct FDeviceData>();

#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTreadMillData_Statics; \
	KATVRUNIVERSALSDK_API static class UScriptStruct* StaticStruct();


template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<struct FTreadMillData>();

#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics; \
	KATVRUNIVERSALSDK_API static class UScriptStruct* StaticStruct();


template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<struct FKATTreadMillMemoryData>();

#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstallPaths_Statics; \
	KATVRUNIVERSALSDK_API static class UScriptStruct* StaticStruct();


template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<struct FInstallPaths>();

#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_112_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLastCalibratedTimeEscaped); \
	DECLARE_FUNCTION(execLEDFor); \
	DECLARE_FUNCTION(execLEDOnce); \
	DECLARE_FUNCTION(execLEDInSeconds); \
	DECLARE_FUNCTION(execVibrateFor); \
	DECLARE_FUNCTION(execVibrateOnce); \
	DECLARE_FUNCTION(execVibrateInSeconds); \
	DECLARE_FUNCTION(execLEDConst); \
	DECLARE_FUNCTION(execVibrateConst); \
	DECLARE_FUNCTION(execLED); \
	DECLARE_FUNCTION(execVibrate); \
	DECLARE_FUNCTION(execGetVRPath); \
	DECLARE_FUNCTION(execGetWalkStatus); \
	DECLARE_FUNCTION(execGetDevicesDesc); \
	DECLARE_FUNCTION(execDeviceCount); \
	DECLARE_FUNCTION(execQuaterMul);


#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUKATVRUniversalSDKBPLibrary(); \
	friend struct Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UKATVRUniversalSDKBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KATVRUniversalSDK"), NO_API) \
	DECLARE_SERIALIZER(UKATVRUniversalSDKBPLibrary)


#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKATVRUniversalSDKBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKATVRUniversalSDKBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKATVRUniversalSDKBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKATVRUniversalSDKBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKATVRUniversalSDKBPLibrary(UKATVRUniversalSDKBPLibrary&&); \
	UKATVRUniversalSDKBPLibrary(const UKATVRUniversalSDKBPLibrary&); \
public: \
	NO_API virtual ~UKATVRUniversalSDKBPLibrary();


#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_109_PROLOG
#define FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_112_RPC_WRAPPERS \
	FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_112_INCLASS \
	FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KATVRUNIVERSALSDK_API UClass* StaticClass<class UKATVRUniversalSDKBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
