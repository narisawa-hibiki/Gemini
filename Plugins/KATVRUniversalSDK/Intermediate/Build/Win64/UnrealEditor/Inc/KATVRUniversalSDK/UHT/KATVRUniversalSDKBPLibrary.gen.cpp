// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KATVRUniversalSDK/Public/KATVRUniversalSDKBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKATVRUniversalSDKBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
KATVRUNIVERSALSDK_API UClass* Z_Construct_UClass_UKATVRUniversalSDKBPLibrary();
KATVRUNIVERSALSDK_API UClass* Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_NoRegister();
KATVRUNIVERSALSDK_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceData();
KATVRUNIVERSALSDK_API UScriptStruct* Z_Construct_UScriptStruct_FInstallPaths();
KATVRUNIVERSALSDK_API UScriptStruct* Z_Construct_UScriptStruct_FKATDeviceDesc();
KATVRUNIVERSALSDK_API UScriptStruct* Z_Construct_UScriptStruct_FKATTreadMillMemoryData();
KATVRUNIVERSALSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTreadMillData();
UPackage* Z_Construct_UPackage__Script_KATVRUniversalSDK();
// End Cross Module References

// Begin ScriptStruct FKATDeviceDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KATDeviceDesc;
class UScriptStruct* FKATDeviceDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KATDeviceDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KATDeviceDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKATDeviceDesc, (UObject*)Z_Construct_UPackage__Script_KATVRUniversalSDK(), TEXT("KATDeviceDesc"));
	}
	return Z_Registration_Info_UScriptStruct_KATDeviceDesc.OuterSingleton;
}
template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<FKATDeviceDesc>()
{
	return FKATDeviceDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKATDeviceDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_serialNumber_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceType_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_device;
	static const UECodeGen_Private::FStrPropertyParams NewProp_serialNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKATDeviceDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKATDeviceDesc, device), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_device_MetaData), NewProp_device_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::NewProp_serialNumber = { "serialNumber", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKATDeviceDesc, serialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_serialNumber_MetaData), NewProp_serialNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::NewProp_deviceType = { "deviceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKATDeviceDesc, deviceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceType_MetaData), NewProp_deviceType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::NewProp_device,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::NewProp_serialNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::NewProp_deviceType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KATVRUniversalSDK,
	nullptr,
	&NewStructOps,
	"KATDeviceDesc",
	Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::PropPointers),
	sizeof(FKATDeviceDesc),
	alignof(FKATDeviceDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKATDeviceDesc()
{
	if (!Z_Registration_Info_UScriptStruct_KATDeviceDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KATDeviceDesc.InnerSingleton, Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KATDeviceDesc.InnerSingleton;
}
// End ScriptStruct FKATDeviceDesc

// Begin ScriptStruct FDeviceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceData;
class UScriptStruct* FDeviceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceData, (UObject*)Z_Construct_UPackage__Script_KATVRUniversalSDK(), TEXT("DeviceData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceData.OuterSingleton;
}
template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<FDeviceData>()
{
	return FDeviceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btnPressed_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isBatteryCharging_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_batteryLevel_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_firmwareVersion_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_btnPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_btnPressed;
	static void NewProp_isBatteryCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isBatteryCharging;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_batteryLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_firmwareVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_btnPressed_SetBit(void* Obj)
{
	((FDeviceData*)Obj)->btnPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_btnPressed = { "btnPressed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceData), &Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_btnPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btnPressed_MetaData), NewProp_btnPressed_MetaData) };
void Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_isBatteryCharging_SetBit(void* Obj)
{
	((FDeviceData*)Obj)->isBatteryCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_isBatteryCharging = { "isBatteryCharging", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceData), &Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_isBatteryCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isBatteryCharging_MetaData), NewProp_isBatteryCharging_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_batteryLevel = { "batteryLevel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceData, batteryLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_batteryLevel_MetaData), NewProp_batteryLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_firmwareVersion = { "firmwareVersion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceData, firmwareVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_firmwareVersion_MetaData), NewProp_firmwareVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_btnPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_isBatteryCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_batteryLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceData_Statics::NewProp_firmwareVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KATVRUniversalSDK,
	nullptr,
	&NewStructOps,
	"DeviceData",
	Z_Construct_UScriptStruct_FDeviceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceData_Statics::PropPointers),
	sizeof(FDeviceData),
	alignof(FDeviceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceData()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceData.InnerSingleton;
}
// End ScriptStruct FDeviceData

// Begin ScriptStruct FTreadMillData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TreadMillData;
class UScriptStruct* FTreadMillData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TreadMillData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TreadMillData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTreadMillData, (UObject*)Z_Construct_UPackage__Script_KATVRUniversalSDK(), TEXT("TreadMillData"));
	}
	return Z_Registration_Info_UScriptStruct_TreadMillData.OuterSingleton;
}
template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<FTreadMillData>()
{
	return FTreadMillData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTreadMillData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceName_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_connected_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bodyRotationRaw_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
	static void NewProp_connected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_connected;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bodyRotationRaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTreadMillData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreadMillData, deviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceName_MetaData), NewProp_deviceName_MetaData) };
void Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_connected_SetBit(void* Obj)
{
	((FTreadMillData*)Obj)->connected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_connected = { "connected", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTreadMillData), &Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_connected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_connected_MetaData), NewProp_connected_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_bodyRotationRaw = { "bodyRotationRaw", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreadMillData, bodyRotationRaw), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bodyRotationRaw_MetaData), NewProp_bodyRotationRaw_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTreadMillData, moveSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveSpeed_MetaData), NewProp_moveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTreadMillData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_deviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_connected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_bodyRotationRaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreadMillData_Statics::NewProp_moveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreadMillData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTreadMillData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KATVRUniversalSDK,
	nullptr,
	&NewStructOps,
	"TreadMillData",
	Z_Construct_UScriptStruct_FTreadMillData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreadMillData_Statics::PropPointers),
	sizeof(FTreadMillData),
	alignof(FTreadMillData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreadMillData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTreadMillData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTreadMillData()
{
	if (!Z_Registration_Info_UScriptStruct_TreadMillData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TreadMillData.InnerSingleton, Z_Construct_UScriptStruct_FTreadMillData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TreadMillData.InnerSingleton;
}
// End ScriptStruct FTreadMillData

// Begin ScriptStruct FKATTreadMillMemoryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData;
class UScriptStruct* FKATTreadMillMemoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKATTreadMillMemoryData, (UObject*)Z_Construct_UPackage__Script_KATVRUniversalSDK(), TEXT("KATTreadMillMemoryData"));
	}
	return Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData.OuterSingleton;
}
template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<FKATTreadMillMemoryData>()
{
	return FKATTreadMillMemoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_treadMillData_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceDatas0_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceDatas1_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceDatas2_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_treadMillData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_deviceDatas0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_deviceDatas1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_deviceDatas2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKATTreadMillMemoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_treadMillData = { "treadMillData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKATTreadMillMemoryData, treadMillData), Z_Construct_UScriptStruct_FTreadMillData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_treadMillData_MetaData), NewProp_treadMillData_MetaData) }; // 4102415849
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_deviceDatas0 = { "deviceDatas0", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKATTreadMillMemoryData, deviceDatas0), Z_Construct_UScriptStruct_FDeviceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceDatas0_MetaData), NewProp_deviceDatas0_MetaData) }; // 1911312713
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_deviceDatas1 = { "deviceDatas1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKATTreadMillMemoryData, deviceDatas1), Z_Construct_UScriptStruct_FDeviceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceDatas1_MetaData), NewProp_deviceDatas1_MetaData) }; // 1911312713
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_deviceDatas2 = { "deviceDatas2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKATTreadMillMemoryData, deviceDatas2), Z_Construct_UScriptStruct_FDeviceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceDatas2_MetaData), NewProp_deviceDatas2_MetaData) }; // 1911312713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_treadMillData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_deviceDatas0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_deviceDatas1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewProp_deviceDatas2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KATVRUniversalSDK,
	nullptr,
	&NewStructOps,
	"KATTreadMillMemoryData",
	Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::PropPointers),
	sizeof(FKATTreadMillMemoryData),
	alignof(FKATTreadMillMemoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKATTreadMillMemoryData()
{
	if (!Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData.InnerSingleton, Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData.InnerSingleton;
}
// End ScriptStruct FKATTreadMillMemoryData

// Begin ScriptStruct FInstallPaths
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstallPaths;
class UScriptStruct* FInstallPaths::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstallPaths.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstallPaths.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstallPaths, (UObject*)Z_Construct_UPackage__Script_KATVRUniversalSDK(), TEXT("InstallPaths"));
	}
	return Z_Registration_Info_UScriptStruct_InstallPaths.OuterSingleton;
}
template<> KATVRUNIVERSALSDK_API UScriptStruct* StaticStruct<FInstallPaths>()
{
	return FInstallPaths::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstallPaths_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enviorment Install Path\n" },
#endif
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enviorment Install Path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_steamInstallPath_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oculusInstallPath_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KATLibraryPath_MetaData[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_steamInstallPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_oculusInstallPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KATLibraryPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstallPaths>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInstallPaths_Statics::NewProp_steamInstallPath = { "steamInstallPath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstallPaths, steamInstallPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_steamInstallPath_MetaData), NewProp_steamInstallPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInstallPaths_Statics::NewProp_oculusInstallPath = { "oculusInstallPath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstallPaths, oculusInstallPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oculusInstallPath_MetaData), NewProp_oculusInstallPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInstallPaths_Statics::NewProp_KATLibraryPath = { "KATLibraryPath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstallPaths, KATLibraryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KATLibraryPath_MetaData), NewProp_KATLibraryPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstallPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstallPaths_Statics::NewProp_steamInstallPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstallPaths_Statics::NewProp_oculusInstallPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstallPaths_Statics::NewProp_KATLibraryPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstallPaths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstallPaths_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KATVRUniversalSDK,
	nullptr,
	&NewStructOps,
	"InstallPaths",
	Z_Construct_UScriptStruct_FInstallPaths_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstallPaths_Statics::PropPointers),
	sizeof(FInstallPaths),
	alignof(FInstallPaths),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstallPaths_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstallPaths_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstallPaths()
{
	if (!Z_Registration_Info_UScriptStruct_InstallPaths.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstallPaths.InnerSingleton, Z_Construct_UScriptStruct_FInstallPaths_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstallPaths.InnerSingleton;
}
// End ScriptStruct FInstallPaths

// Begin Class UKATVRUniversalSDKBPLibrary Function DeviceCount
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventDeviceCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "DisplayName", "Get Connected KAT Treadmill Count" },
		{ "Keywords", "treadmill KAT" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventDeviceCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "DeviceCount", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::KATVRUniversalSDKBPLibrary_eventDeviceCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::KATVRUniversalSDKBPLibrary_eventDeviceCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execDeviceCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKATVRUniversalSDKBPLibrary::DeviceCount();
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function DeviceCount

// Begin Class UKATVRUniversalSDKBPLibrary Function GetDevicesDesc
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventGetDevicesDesc_Parms
	{
		int32 index;
		FKATDeviceDesc ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "DisplayName", "Get KAT Treadmill Device Description" },
		{ "Keywords", "treadmill KAT" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventGetDevicesDesc_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventGetDevicesDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FKATDeviceDesc, METADATA_PARAMS(0, nullptr) }; // 1720321210
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "GetDevicesDesc", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::KATVRUniversalSDKBPLibrary_eventGetDevicesDesc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::KATVRUniversalSDKBPLibrary_eventGetDevicesDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execGetDevicesDesc)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKATDeviceDesc*)Z_Param__Result=UKATVRUniversalSDKBPLibrary::GetDevicesDesc(Z_Param_index);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function GetDevicesDesc

// Begin Class UKATVRUniversalSDKBPLibrary Function GetLastCalibratedTimeEscaped
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventGetLastCalibratedTimeEscaped_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "Get Last Calibrated Time Escaped" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventGetLastCalibratedTimeEscaped_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "GetLastCalibratedTimeEscaped", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::KATVRUniversalSDKBPLibrary_eventGetLastCalibratedTimeEscaped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::KATVRUniversalSDKBPLibrary_eventGetLastCalibratedTimeEscaped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execGetLastCalibratedTimeEscaped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKATVRUniversalSDKBPLibrary::GetLastCalibratedTimeEscaped();
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function GetLastCalibratedTimeEscaped

// Begin Class UKATVRUniversalSDKBPLibrary Function GetVRPath
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventGetVRPath_Parms
	{
		FInstallPaths ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "DisplayName", "Get VR Framework Path" },
		{ "Keywords", "treadmill KAT" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventGetVRPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstallPaths, METADATA_PARAMS(0, nullptr) }; // 2110170629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "GetVRPath", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::KATVRUniversalSDKBPLibrary_eventGetVRPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::KATVRUniversalSDKBPLibrary_eventGetVRPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execGetVRPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInstallPaths*)Z_Param__Result=UKATVRUniversalSDKBPLibrary::GetVRPath();
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function GetVRPath

// Begin Class UKATVRUniversalSDKBPLibrary Function GetWalkStatus
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventGetWalkStatus_Parms
	{
		FString sn;
		FKATTreadMillMemoryData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "CPP_Default_sn", "" },
		{ "DisplayName", "Get KAT Treadmill Walk Status" },
		{ "Keywords", "treadmill KAT" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_sn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::NewProp_sn = { "sn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventGetWalkStatus_Parms, sn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sn_MetaData), NewProp_sn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventGetWalkStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FKATTreadMillMemoryData, METADATA_PARAMS(0, nullptr) }; // 459614896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::NewProp_sn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "GetWalkStatus", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::KATVRUniversalSDKBPLibrary_eventGetWalkStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::KATVRUniversalSDKBPLibrary_eventGetWalkStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execGetWalkStatus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_sn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKATTreadMillMemoryData*)Z_Param__Result=UKATVRUniversalSDKBPLibrary::GetWalkStatus(Z_Param_sn);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function GetWalkStatus

// Begin Class UKATVRUniversalSDKBPLibrary Function LED
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventLED_Parms
	{
		FString sn;
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "DisplayName", "Raw LED Interface" },
		{ "Keywords", "treadmill KAT" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_sn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::NewProp_sn = { "sn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLED_Parms, sn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sn_MetaData), NewProp_sn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLED_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::NewProp_sn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "LED", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::KATVRUniversalSDKBPLibrary_eventLED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::KATVRUniversalSDKBPLibrary_eventLED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execLED)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_sn);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::LED(Z_Param_sn,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function LED

// Begin Class UKATVRUniversalSDKBPLibrary Function LEDConst
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventLEDConst_Parms
	{
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "LED With Const Amplitude" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLEDConst_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "LEDConst", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::KATVRUniversalSDKBPLibrary_eventLEDConst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::KATVRUniversalSDKBPLibrary_eventLEDConst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execLEDConst)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::LEDConst(Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function LEDConst

// Begin Class UKATVRUniversalSDKBPLibrary Function LEDFor
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventLEDFor_Parms
	{
		float duration;
		float frequency;
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "LED For" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLEDFor_Parms, duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLEDFor_Parms, frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLEDFor_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::NewProp_duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::NewProp_frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "LEDFor", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::KATVRUniversalSDKBPLibrary_eventLEDFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::KATVRUniversalSDKBPLibrary_eventLEDFor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execLEDFor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::LEDFor(Z_Param_duration,Z_Param_frequency,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function LEDFor

// Begin Class UKATVRUniversalSDKBPLibrary Function LEDInSeconds
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventLEDInSeconds_Parms
	{
		float amplitude;
		float duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "LED In Seconds" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLEDInSeconds_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLEDInSeconds_Parms, duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::NewProp_duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "LEDInSeconds", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::KATVRUniversalSDKBPLibrary_eventLEDInSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::KATVRUniversalSDKBPLibrary_eventLEDInSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execLEDInSeconds)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::LEDInSeconds(Z_Param_amplitude,Z_Param_duration);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function LEDInSeconds

// Begin Class UKATVRUniversalSDKBPLibrary Function LEDOnce
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventLEDOnce_Parms
	{
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "LED Once" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventLEDOnce_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "LEDOnce", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::KATVRUniversalSDKBPLibrary_eventLEDOnce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::KATVRUniversalSDKBPLibrary_eventLEDOnce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execLEDOnce)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::LEDOnce(Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function LEDOnce

// Begin Class UKATVRUniversalSDKBPLibrary Function QuaterMul
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventQuaterMul_Parms
	{
		FQuat q;
		FVector v;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "DisplayName", "Quaternion Mul Vector" },
		{ "Keywords", "treadmill KAT" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_q_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_v_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_q;
	static const UECodeGen_Private::FStructPropertyParams NewProp_v;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::NewProp_q = { "q", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventQuaterMul_Parms, q), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_q_MetaData), NewProp_q_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventQuaterMul_Parms, v), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_v_MetaData), NewProp_v_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventQuaterMul_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::NewProp_q,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::NewProp_v,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "QuaterMul", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::KATVRUniversalSDKBPLibrary_eventQuaterMul_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::KATVRUniversalSDKBPLibrary_eventQuaterMul_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execQuaterMul)
{
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_q);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_v);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UKATVRUniversalSDKBPLibrary::QuaterMul(Z_Param_Out_q,Z_Param_Out_v);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function QuaterMul

// Begin Class UKATVRUniversalSDKBPLibrary Function Vibrate
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventVibrate_Parms
	{
		FString sn;
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRUniversalSDK" },
		{ "DisplayName", "Raw Vibrate Interface" },
		{ "Keywords", "treadmill KAT" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_sn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::NewProp_sn = { "sn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrate_Parms, sn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sn_MetaData), NewProp_sn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrate_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::NewProp_sn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "Vibrate", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::KATVRUniversalSDKBPLibrary_eventVibrate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::KATVRUniversalSDKBPLibrary_eventVibrate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execVibrate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_sn);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::Vibrate(Z_Param_sn,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function Vibrate

// Begin Class UKATVRUniversalSDKBPLibrary Function VibrateConst
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventVibrateConst_Parms
	{
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "Vibrate With Const Amplitude" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrateConst_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "VibrateConst", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::KATVRUniversalSDKBPLibrary_eventVibrateConst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::KATVRUniversalSDKBPLibrary_eventVibrateConst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execVibrateConst)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::VibrateConst(Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function VibrateConst

// Begin Class UKATVRUniversalSDKBPLibrary Function VibrateFor
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventVibrateFor_Parms
	{
		float duration;
		float frequency;
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "Vibrate For" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrateFor_Parms, duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrateFor_Parms, frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrateFor_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::NewProp_duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::NewProp_frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "VibrateFor", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::KATVRUniversalSDKBPLibrary_eventVibrateFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::KATVRUniversalSDKBPLibrary_eventVibrateFor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execVibrateFor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::VibrateFor(Z_Param_duration,Z_Param_frequency,Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function VibrateFor

// Begin Class UKATVRUniversalSDKBPLibrary Function VibrateInSeconds
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventVibrateInSeconds_Parms
	{
		float amplitude;
		float duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "Vibrate In Seconds" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrateInSeconds_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrateInSeconds_Parms, duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::NewProp_amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::NewProp_duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "VibrateInSeconds", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::KATVRUniversalSDKBPLibrary_eventVibrateInSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::KATVRUniversalSDKBPLibrary_eventVibrateInSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execVibrateInSeconds)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::VibrateInSeconds(Z_Param_amplitude,Z_Param_duration);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function VibrateInSeconds

// Begin Class UKATVRUniversalSDKBPLibrary Function VibrateOnce
struct Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics
{
	struct KATVRUniversalSDKBPLibrary_eventVibrateOnce_Parms
	{
		float amplitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KATVRExtensionSDK" },
		{ "DisplayName", "Vibrate Once" },
		{ "Keywords", "treadmill KAT Extension" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KATVRUniversalSDKBPLibrary_eventVibrateOnce_Parms, amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::NewProp_amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, nullptr, "VibrateOnce", nullptr, nullptr, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::KATVRUniversalSDKBPLibrary_eventVibrateOnce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::KATVRUniversalSDKBPLibrary_eventVibrateOnce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKATVRUniversalSDKBPLibrary::execVibrateOnce)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKATVRUniversalSDKBPLibrary::VibrateOnce(Z_Param_amplitude);
	P_NATIVE_END;
}
// End Class UKATVRUniversalSDKBPLibrary Function VibrateOnce

// Begin Class UKATVRUniversalSDKBPLibrary
void UKATVRUniversalSDKBPLibrary::StaticRegisterNativesUKATVRUniversalSDKBPLibrary()
{
	UClass* Class = UKATVRUniversalSDKBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeviceCount", &UKATVRUniversalSDKBPLibrary::execDeviceCount },
		{ "GetDevicesDesc", &UKATVRUniversalSDKBPLibrary::execGetDevicesDesc },
		{ "GetLastCalibratedTimeEscaped", &UKATVRUniversalSDKBPLibrary::execGetLastCalibratedTimeEscaped },
		{ "GetVRPath", &UKATVRUniversalSDKBPLibrary::execGetVRPath },
		{ "GetWalkStatus", &UKATVRUniversalSDKBPLibrary::execGetWalkStatus },
		{ "LED", &UKATVRUniversalSDKBPLibrary::execLED },
		{ "LEDConst", &UKATVRUniversalSDKBPLibrary::execLEDConst },
		{ "LEDFor", &UKATVRUniversalSDKBPLibrary::execLEDFor },
		{ "LEDInSeconds", &UKATVRUniversalSDKBPLibrary::execLEDInSeconds },
		{ "LEDOnce", &UKATVRUniversalSDKBPLibrary::execLEDOnce },
		{ "QuaterMul", &UKATVRUniversalSDKBPLibrary::execQuaterMul },
		{ "Vibrate", &UKATVRUniversalSDKBPLibrary::execVibrate },
		{ "VibrateConst", &UKATVRUniversalSDKBPLibrary::execVibrateConst },
		{ "VibrateFor", &UKATVRUniversalSDKBPLibrary::execVibrateFor },
		{ "VibrateInSeconds", &UKATVRUniversalSDKBPLibrary::execVibrateInSeconds },
		{ "VibrateOnce", &UKATVRUniversalSDKBPLibrary::execVibrateOnce },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKATVRUniversalSDKBPLibrary);
UClass* Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_NoRegister()
{
	return UKATVRUniversalSDKBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KATVRUniversalSDKBPLibrary.h" },
		{ "ModuleRelativePath", "Public/KATVRUniversalSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_DeviceCount, "DeviceCount" }, // 1154803372
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetDevicesDesc, "GetDevicesDesc" }, // 2090622081
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetLastCalibratedTimeEscaped, "GetLastCalibratedTimeEscaped" }, // 1514656049
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetVRPath, "GetVRPath" }, // 2691026116
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_GetWalkStatus, "GetWalkStatus" }, // 1002930883
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LED, "LED" }, // 376214186
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDConst, "LEDConst" }, // 4210384759
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDFor, "LEDFor" }, // 895260919
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDInSeconds, "LEDInSeconds" }, // 3130722122
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_LEDOnce, "LEDOnce" }, // 3830277818
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_QuaterMul, "QuaterMul" }, // 1488277454
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_Vibrate, "Vibrate" }, // 1337618422
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateConst, "VibrateConst" }, // 4036560592
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateFor, "VibrateFor" }, // 2670126832
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateInSeconds, "VibrateInSeconds" }, // 2316902650
		{ &Z_Construct_UFunction_UKATVRUniversalSDKBPLibrary_VibrateOnce, "VibrateOnce" }, // 1405399287
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKATVRUniversalSDKBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_KATVRUniversalSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics::ClassParams = {
	&UKATVRUniversalSDKBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKATVRUniversalSDKBPLibrary()
{
	if (!Z_Registration_Info_UClass_UKATVRUniversalSDKBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKATVRUniversalSDKBPLibrary.OuterSingleton, Z_Construct_UClass_UKATVRUniversalSDKBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKATVRUniversalSDKBPLibrary.OuterSingleton;
}
template<> KATVRUNIVERSALSDK_API UClass* StaticClass<UKATVRUniversalSDKBPLibrary>()
{
	return UKATVRUniversalSDKBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKATVRUniversalSDKBPLibrary);
UKATVRUniversalSDKBPLibrary::~UKATVRUniversalSDKBPLibrary() {}
// End Class UKATVRUniversalSDKBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKATDeviceDesc::StaticStruct, Z_Construct_UScriptStruct_FKATDeviceDesc_Statics::NewStructOps, TEXT("KATDeviceDesc"), &Z_Registration_Info_UScriptStruct_KATDeviceDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKATDeviceDesc), 1720321210U) },
		{ FDeviceData::StaticStruct, Z_Construct_UScriptStruct_FDeviceData_Statics::NewStructOps, TEXT("DeviceData"), &Z_Registration_Info_UScriptStruct_DeviceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceData), 1911312713U) },
		{ FTreadMillData::StaticStruct, Z_Construct_UScriptStruct_FTreadMillData_Statics::NewStructOps, TEXT("TreadMillData"), &Z_Registration_Info_UScriptStruct_TreadMillData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTreadMillData), 4102415849U) },
		{ FKATTreadMillMemoryData::StaticStruct, Z_Construct_UScriptStruct_FKATTreadMillMemoryData_Statics::NewStructOps, TEXT("KATTreadMillMemoryData"), &Z_Registration_Info_UScriptStruct_KATTreadMillMemoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKATTreadMillMemoryData), 459614896U) },
		{ FInstallPaths::StaticStruct, Z_Construct_UScriptStruct_FInstallPaths_Statics::NewStructOps, TEXT("InstallPaths"), &Z_Registration_Info_UScriptStruct_InstallPaths, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstallPaths), 2110170629U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKATVRUniversalSDKBPLibrary, UKATVRUniversalSDKBPLibrary::StaticClass, TEXT("UKATVRUniversalSDKBPLibrary"), &Z_Registration_Info_UClass_UKATVRUniversalSDKBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKATVRUniversalSDKBPLibrary), 4107235310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_1208292118(TEXT("/Script/KATVRUniversalSDK"),
	Z_CompiledInDeferFile_FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SweetProject_Plugins_KATVRUniversalSDK_Source_KATVRUniversalSDK_Public_KATVRUniversalSDKBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
