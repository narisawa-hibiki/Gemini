// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ASerialComBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASERIALCOM_ASerialComBPLibrary_generated_h
#error "ASerialComBPLibrary.generated.h already included, missing '#pragma once' in ASerialComBPLibrary.h"
#endif
#define ASERIALCOM_ASerialComBPLibrary_generated_h

#define FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialComBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUASerialComBPLibrary(); \
	friend struct Z_Construct_UClass_UASerialComBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UASerialComBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ASerialCom"), NO_API) \
	DECLARE_SERIALIZER(UASerialComBPLibrary)


#define FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialComBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASerialComBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASerialComBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASerialComBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASerialComBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UASerialComBPLibrary(UASerialComBPLibrary&&); \
	UASerialComBPLibrary(const UASerialComBPLibrary&); \
public: \
	NO_API virtual ~UASerialComBPLibrary();


#define FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialComBPLibrary_h_26_PROLOG
#define FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialComBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialComBPLibrary_h_29_INCLASS \
	FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialComBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASERIALCOM_API UClass* StaticClass<class UASerialComBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialComBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
