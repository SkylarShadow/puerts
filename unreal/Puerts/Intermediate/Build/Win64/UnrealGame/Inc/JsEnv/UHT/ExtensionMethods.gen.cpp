// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Public/ExtensionMethods.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtensionMethods() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
JSENV_API UClass* Z_Construct_UClass_UExtensionMethods();
JSENV_API UClass* Z_Construct_UClass_UExtensionMethods_NoRegister();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin Class UExtensionMethods
void UExtensionMethods::StaticRegisterNativesUExtensionMethods()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtensionMethods);
UClass* Z_Construct_UClass_UExtensionMethods_NoRegister()
{
	return UExtensionMethods::StaticClass();
}
struct Z_Construct_UClass_UExtensionMethods_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ExtensionMethods.h" },
		{ "ModuleRelativePath", "Public/ExtensionMethods.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtensionMethods>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExtensionMethods_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtensionMethods_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtensionMethods_Statics::ClassParams = {
	&UExtensionMethods::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtensionMethods_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtensionMethods_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExtensionMethods()
{
	if (!Z_Registration_Info_UClass_UExtensionMethods.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtensionMethods.OuterSingleton, Z_Construct_UClass_UExtensionMethods_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExtensionMethods.OuterSingleton;
}
template<> JSENV_API UClass* StaticClass<UExtensionMethods>()
{
	return UExtensionMethods::StaticClass();
}
UExtensionMethods::UExtensionMethods(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExtensionMethods);
UExtensionMethods::~UExtensionMethods() {}
// End Class UExtensionMethods

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExtensionMethods, UExtensionMethods::StaticClass, TEXT("UExtensionMethods"), &Z_Registration_Info_UClass_UExtensionMethods, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtensionMethods), 3547603768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_3081513423(TEXT("/Script/JsEnv"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
