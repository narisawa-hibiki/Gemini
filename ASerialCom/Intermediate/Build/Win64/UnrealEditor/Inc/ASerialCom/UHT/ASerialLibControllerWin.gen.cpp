// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ASerialCom/Public/ASerialLibControllerWin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASerialLibControllerWin() {}

// Begin Cross Module References
ASERIALCOM_API UClass* Z_Construct_UClass_UASerialLibControllerWin();
ASERIALCOM_API UClass* Z_Construct_UClass_UASerialLibControllerWin_NoRegister();
ASERIALCOM_API UClass* Z_Construct_UClass_UASerialPacket();
UPackage* Z_Construct_UPackage__Script_ASerialCom();
// End Cross Module References

// Begin Class UASerialLibControllerWin
void UASerialLibControllerWin::StaticRegisterNativesUASerialLibControllerWin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UASerialLibControllerWin);
UClass* Z_Construct_UClass_UASerialLibControllerWin_NoRegister()
{
	return UASerialLibControllerWin::StaticClass();
}
struct Z_Construct_UClass_UASerialLibControllerWin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ASerialLibControllerWin.h" },
		{ "ModuleRelativePath", "Public/ASerialLibControllerWin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASerialLibControllerWin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UASerialLibControllerWin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UASerialPacket,
	(UObject* (*)())Z_Construct_UPackage__Script_ASerialCom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASerialLibControllerWin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UASerialLibControllerWin_Statics::ClassParams = {
	&UASerialLibControllerWin::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UASerialLibControllerWin_Statics::Class_MetaDataParams), Z_Construct_UClass_UASerialLibControllerWin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UASerialLibControllerWin()
{
	if (!Z_Registration_Info_UClass_UASerialLibControllerWin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UASerialLibControllerWin.OuterSingleton, Z_Construct_UClass_UASerialLibControllerWin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UASerialLibControllerWin.OuterSingleton;
}
template<> ASERIALCOM_API UClass* StaticClass<UASerialLibControllerWin>()
{
	return UASerialLibControllerWin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UASerialLibControllerWin);
UASerialLibControllerWin::~UASerialLibControllerWin() {}
// End Class UASerialLibControllerWin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialLibControllerWin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UASerialLibControllerWin, UASerialLibControllerWin::StaticClass, TEXT("UASerialLibControllerWin"), &Z_Registration_Info_UClass_UASerialLibControllerWin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UASerialLibControllerWin), 1420179631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialLibControllerWin_h_1274934084(TEXT("/Script/ASerialCom"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialLibControllerWin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SweetProject_Plugins_ASerialCom_Source_ASerialCom_Public_ASerialLibControllerWin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
