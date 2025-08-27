// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ASerialCom/Public/ASerialCore/ASerialPacket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASerialPacket() {}

// Begin Cross Module References
ASERIALCOM_API UClass* Z_Construct_UClass_UASerialPacket();
ASERIALCOM_API UClass* Z_Construct_UClass_UASerialPacket_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ASerialCom();
// End Cross Module References

// Begin Class UASerialPacket
void UASerialPacket::StaticRegisterNativesUASerialPacket()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UASerialPacket);
UClass* Z_Construct_UClass_UASerialPacket_NoRegister()
{
	return UASerialPacket::StaticClass();
}
struct Z_Construct_UClass_UASerialPacket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ASerialCore/ASerialPacket.h" },
		{ "ModuleRelativePath", "Public/ASerialCore/ASerialPacket.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASerialPacket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UASerialPacket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ASerialCom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASerialPacket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UASerialPacket_Statics::ClassParams = {
	&UASerialPacket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UASerialPacket_Statics::Class_MetaDataParams), Z_Construct_UClass_UASerialPacket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UASerialPacket()
{
	if (!Z_Registration_Info_UClass_UASerialPacket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UASerialPacket.OuterSingleton, Z_Construct_UClass_UASerialPacket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UASerialPacket.OuterSingleton;
}
template<> ASERIALCOM_API UClass* StaticClass<UASerialPacket>()
{
	return UASerialPacket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UASerialPacket);
UASerialPacket::~UASerialPacket() {}
// End Class UASerialPacket

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UASerialPacket, UASerialPacket::StaticClass, TEXT("UASerialPacket"), &Z_Registration_Info_UClass_UASerialPacket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UASerialPacket), 2395979108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_388726073(TEXT("/Script/ASerialCom"),
	Z_CompiledInDeferFile_FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bicycle_Project_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialCore_ASerialPacket_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
