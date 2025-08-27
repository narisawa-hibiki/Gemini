// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASerialCom_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ASerialCom;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ASerialCom()
	{
		if (!Z_Registration_Info_UPackage__Script_ASerialCom.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ASerialCom",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x13A473E2,
				0xB46851E9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ASerialCom.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ASerialCom.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ASerialCom(Z_Construct_UPackage__Script_ASerialCom, TEXT("/Script/ASerialCom"), Z_Registration_Info_UPackage__Script_ASerialCom, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x13A473E2, 0xB46851E9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
