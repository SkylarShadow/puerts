// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Private/DynamicDelegateProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicDelegateProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
JSENV_API UClass* Z_Construct_UClass_UDynamicDelegateProxy();
JSENV_API UClass* Z_Construct_UClass_UDynamicDelegateProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin Class UDynamicDelegateProxy Function Fire
struct Z_Construct_UFunction_UDynamicDelegateProxy_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TGameJS" },
		{ "ModuleRelativePath", "Private/DynamicDelegateProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicDelegateProxy_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicDelegateProxy, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicDelegateProxy_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicDelegateProxy_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDynamicDelegateProxy_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicDelegateProxy_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicDelegateProxy::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class UDynamicDelegateProxy Function Fire

// Begin Class UDynamicDelegateProxy
void UDynamicDelegateProxy::StaticRegisterNativesUDynamicDelegateProxy()
{
	UClass* Class = UDynamicDelegateProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &UDynamicDelegateProxy::execFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicDelegateProxy);
UClass* Z_Construct_UClass_UDynamicDelegateProxy_NoRegister()
{
	return UDynamicDelegateProxy::StaticClass();
}
struct Z_Construct_UClass_UDynamicDelegateProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "DynamicDelegateProxy.h" },
		{ "ModuleRelativePath", "Private/DynamicDelegateProxy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicDelegateProxy_Fire, "Fire" }, // 657451347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicDelegateProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDynamicDelegateProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicDelegateProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicDelegateProxy_Statics::ClassParams = {
	&UDynamicDelegateProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicDelegateProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicDelegateProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicDelegateProxy()
{
	if (!Z_Registration_Info_UClass_UDynamicDelegateProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicDelegateProxy.OuterSingleton, Z_Construct_UClass_UDynamicDelegateProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicDelegateProxy.OuterSingleton;
}
template<> JSENV_API UClass* StaticClass<UDynamicDelegateProxy>()
{
	return UDynamicDelegateProxy::StaticClass();
}
UDynamicDelegateProxy::UDynamicDelegateProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicDelegateProxy);
UDynamicDelegateProxy::~UDynamicDelegateProxy() {}
// End Class UDynamicDelegateProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicDelegateProxy, UDynamicDelegateProxy::StaticClass, TEXT("UDynamicDelegateProxy"), &Z_Registration_Info_UClass_UDynamicDelegateProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicDelegateProxy), 2367658578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_1913010705(TEXT("/Script/JsEnv"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
