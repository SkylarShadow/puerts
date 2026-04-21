// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsEnv_init() {}
	JSENV_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyMetaRoot();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JsEnv;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JsEnv()
	{
		if (!Z_Registration_Info_UPackage__Script_JsEnv.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UScriptStruct_FPropertyMetaRoot,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JsEnv",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDDE92DC5,
				0x803CD376,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JsEnv.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JsEnv.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JsEnv(Z_Construct_UPackage__Script_JsEnv, TEXT("/Script/JsEnv"), Z_Registration_Info_UPackage__Script_JsEnv, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDDE92DC5, 0x803CD376));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
