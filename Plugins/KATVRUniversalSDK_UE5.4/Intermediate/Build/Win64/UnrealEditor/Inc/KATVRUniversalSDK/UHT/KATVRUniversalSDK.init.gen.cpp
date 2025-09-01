// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKATVRUniversalSDK_init() {}
	KATVRUNIVERSALSDK_API UFunction* Z_Construct_UDelegateFunction_KATVRUniversalSDK_BPPinDeviceLost__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KATVRUniversalSDK;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KATVRUniversalSDK()
	{
		if (!Z_Registration_Info_UPackage__Script_KATVRUniversalSDK.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KATVRUniversalSDK_BPPinDeviceLost__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/KATVRUniversalSDK",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5735CCA3,
				0xAACC661D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KATVRUniversalSDK.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KATVRUniversalSDK.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KATVRUniversalSDK(Z_Construct_UPackage__Script_KATVRUniversalSDK, TEXT("/Script/KATVRUniversalSDK"), Z_Registration_Info_UPackage__Script_KATVRUniversalSDK, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5735CCA3, 0xAACC661D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
