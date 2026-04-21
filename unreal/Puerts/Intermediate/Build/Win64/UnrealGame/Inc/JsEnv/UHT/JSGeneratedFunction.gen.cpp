// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Private/JSGeneratedFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSGeneratedFunction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
JSENV_API UClass* Z_Construct_UClass_UJSGeneratedFunction();
JSENV_API UClass* Z_Construct_UClass_UJSGeneratedFunction_NoRegister();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin Class UJSGeneratedFunction
void UJSGeneratedFunction::StaticRegisterNativesUJSGeneratedFunction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJSGeneratedFunction);
UClass* Z_Construct_UClass_UJSGeneratedFunction_NoRegister()
{
	return UJSGeneratedFunction::StaticClass();
}
struct Z_Construct_UClass_UJSGeneratedFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "JSGeneratedFunction.h" },
		{ "ModuleRelativePath", "Private/JSGeneratedFunction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSGeneratedFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJSGeneratedFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFunction,
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSGeneratedFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJSGeneratedFunction_Statics::ClassParams = {
	&UJSGeneratedFunction::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJSGeneratedFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UJSGeneratedFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJSGeneratedFunction()
{
	if (!Z_Registration_Info_UClass_UJSGeneratedFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJSGeneratedFunction.OuterSingleton, Z_Construct_UClass_UJSGeneratedFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJSGeneratedFunction.OuterSingleton;
}
template<> JSENV_API UClass* StaticClass<UJSGeneratedFunction>()
{
	return UJSGeneratedFunction::StaticClass();
}
UJSGeneratedFunction::UJSGeneratedFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJSGeneratedFunction);
UJSGeneratedFunction::~UJSGeneratedFunction() {}
// End Class UJSGeneratedFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJSGeneratedFunction, UJSGeneratedFunction::StaticClass, TEXT("UJSGeneratedFunction"), &Z_Registration_Info_UClass_UJSGeneratedFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJSGeneratedFunction), 241667204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedFunction_h_2131553693(TEXT("/Script/JsEnv"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
