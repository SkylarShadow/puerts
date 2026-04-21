// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Private/JSWidgetGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSWidgetGeneratedClass() {}

// Begin Cross Module References
JSENV_API UClass* Z_Construct_UClass_UJSWidgetGeneratedClass();
JSENV_API UClass* Z_Construct_UClass_UJSWidgetGeneratedClass_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin Class UJSWidgetGeneratedClass
void UJSWidgetGeneratedClass::StaticRegisterNativesUJSWidgetGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJSWidgetGeneratedClass);
UClass* Z_Construct_UClass_UJSWidgetGeneratedClass_NoRegister()
{
	return UJSWidgetGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UJSWidgetGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "JSWidgetGeneratedClass.h" },
		{ "ModuleRelativePath", "Private/JSWidgetGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSWidgetGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJSWidgetGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSWidgetGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJSWidgetGeneratedClass_Statics::ClassParams = {
	&UJSWidgetGeneratedClass::StaticClass,
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
	0x008200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJSWidgetGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UJSWidgetGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJSWidgetGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UJSWidgetGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJSWidgetGeneratedClass.OuterSingleton, Z_Construct_UClass_UJSWidgetGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJSWidgetGeneratedClass.OuterSingleton;
}
template<> JSENV_API UClass* StaticClass<UJSWidgetGeneratedClass>()
{
	return UJSWidgetGeneratedClass::StaticClass();
}
UJSWidgetGeneratedClass::UJSWidgetGeneratedClass() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJSWidgetGeneratedClass);
UJSWidgetGeneratedClass::~UJSWidgetGeneratedClass() {}
// End Class UJSWidgetGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSWidgetGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJSWidgetGeneratedClass, UJSWidgetGeneratedClass::StaticClass, TEXT("UJSWidgetGeneratedClass"), &Z_Registration_Info_UClass_UJSWidgetGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJSWidgetGeneratedClass), 2979289802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSWidgetGeneratedClass_h_847078139(TEXT("/Script/JsEnv"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSWidgetGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSWidgetGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
