// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Public/TypeScriptGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypeScriptGeneratedClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
JSENV_API UClass* Z_Construct_UClass_UTypeScriptGeneratedClass();
JSENV_API UClass* Z_Construct_UClass_UTypeScriptGeneratedClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin Class UTypeScriptGeneratedClass
void UTypeScriptGeneratedClass::StaticRegisterNativesUTypeScriptGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypeScriptGeneratedClass);
UClass* Z_Construct_UClass_UTypeScriptGeneratedClass_NoRegister()
{
	return UTypeScriptGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UTypeScriptGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "TypeScriptGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/TypeScriptGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasConstructor_MetaData[] = {
		{ "ModuleRelativePath", "Public/TypeScriptGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static void NewProp_HasConstructor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasConstructor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypeScriptGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::NewProp_HasConstructor_SetBit(void* Obj)
{
	((UTypeScriptGeneratedClass*)Obj)->HasConstructor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::NewProp_HasConstructor = { "HasConstructor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTypeScriptGeneratedClass), &Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::NewProp_HasConstructor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasConstructor_MetaData), NewProp_HasConstructor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::NewProp_HasConstructor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::ClassParams = {
	&UTypeScriptGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::PropPointers),
	0,
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypeScriptGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UTypeScriptGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypeScriptGeneratedClass.OuterSingleton, Z_Construct_UClass_UTypeScriptGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypeScriptGeneratedClass.OuterSingleton;
}
template<> JSENV_API UClass* StaticClass<UTypeScriptGeneratedClass>()
{
	return UTypeScriptGeneratedClass::StaticClass();
}
UTypeScriptGeneratedClass::UTypeScriptGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypeScriptGeneratedClass);
UTypeScriptGeneratedClass::~UTypeScriptGeneratedClass() {}
// End Class UTypeScriptGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypeScriptGeneratedClass, UTypeScriptGeneratedClass::StaticClass, TEXT("UTypeScriptGeneratedClass"), &Z_Registration_Info_UClass_UTypeScriptGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypeScriptGeneratedClass), 1587415025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptGeneratedClass_h_1430675238(TEXT("/Script/JsEnv"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
