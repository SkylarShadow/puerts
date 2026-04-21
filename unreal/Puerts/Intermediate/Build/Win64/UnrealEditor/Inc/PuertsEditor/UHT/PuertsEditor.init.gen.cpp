// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertsEditor_init() {}
	PUERTSEDITOR_API UFunction* Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PuertsEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PuertsEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_PuertsEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PuertsEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x5AC26D40,
				0x33671FFC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PuertsEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PuertsEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PuertsEditor(Z_Construct_UPackage__Script_PuertsEditor, TEXT("/Script/PuertsEditor"), Z_Registration_Info_UPackage__Script_PuertsEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5AC26D40, 0x33671FFC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
