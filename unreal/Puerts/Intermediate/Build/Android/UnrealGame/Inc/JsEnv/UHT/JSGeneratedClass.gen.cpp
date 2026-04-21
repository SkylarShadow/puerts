// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Private/JSGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSGeneratedClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
JSENV_API UClass* Z_Construct_UClass_UJSGeneratedClass();
JSENV_API UClass* Z_Construct_UClass_UJSGeneratedClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin Class UJSGeneratedClass
void UJSGeneratedClass::StaticRegisterNativesUJSGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJSGeneratedClass);
UClass* Z_Construct_UClass_UJSGeneratedClass_NoRegister()
{
	return UJSGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UJSGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "JSGeneratedClass.h" },
		{ "ModuleRelativePath", "Private/JSGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJSGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJSGeneratedClass_Statics::ClassParams = {
	&UJSGeneratedClass::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJSGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UJSGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJSGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UJSGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJSGeneratedClass.OuterSingleton, Z_Construct_UClass_UJSGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJSGeneratedClass.OuterSingleton;
}
template<> JSENV_API UClass* StaticClass<UJSGeneratedClass>()
{
	return UJSGeneratedClass::StaticClass();
}
UJSGeneratedClass::UJSGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJSGeneratedClass);
UJSGeneratedClass::~UJSGeneratedClass() {}
// End Class UJSGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJSGeneratedClass, UJSGeneratedClass::StaticClass, TEXT("UJSGeneratedClass"), &Z_Registration_Info_UClass_UJSGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJSGeneratedClass), 7489309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_3950892106(TEXT("/Script/JsEnv"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
