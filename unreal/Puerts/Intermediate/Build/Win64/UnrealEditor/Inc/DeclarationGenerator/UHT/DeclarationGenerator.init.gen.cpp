// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeclarationGenerator_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DeclarationGenerator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DeclarationGenerator()
	{
		if (!Z_Registration_Info_UPackage__Script_DeclarationGenerator.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DeclarationGenerator",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x70FC93AD,
				0x5D98838B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DeclarationGenerator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DeclarationGenerator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DeclarationGenerator(Z_Construct_UPackage__Script_DeclarationGenerator, TEXT("/Script/DeclarationGenerator"), Z_Registration_Info_UPackage__Script_DeclarationGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x70FC93AD, 0x5D98838B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
