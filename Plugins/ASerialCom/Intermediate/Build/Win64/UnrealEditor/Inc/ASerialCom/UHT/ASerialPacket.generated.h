// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ASerialCore/ASerialPacket.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASERIALCOM_ASerialPacket_generated_h
#error "ASerialPacket.generated.h already included, missing '#pragma once' in ASerialPacket.h"
#endif
#define ASERIALCOM_ASerialPacket_generated_h

#define FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASerialPacket(); \
	friend struct Z_Construct_UClass_UASerialPacket_Statics; \
public: \
	DECLARE_CLASS(UASerialPacket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ASerialCom"), NO_API) \
	DECLARE_SERIALIZER(UASerialPacket)


#define FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UASerialPacket(UASerialPacket&&); \
	UASerialPacket(const UASerialPacket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASerialPacket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASerialPacket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UASerialPacket) \
	NO_API virtual ~UASerialPacket();


#define FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_43_PROLOG
#define FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_46_INCLASS_NO_PURE_DECLS \
	FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASERIALCOM_API UClass* StaticClass<class UASerialPacket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
