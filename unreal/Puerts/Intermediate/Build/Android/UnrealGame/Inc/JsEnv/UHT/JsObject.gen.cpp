// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Public/JsObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsObject() {}

// Begin Cross Module References
JSENV_API UScriptStruct* Z_Construct_UScriptStruct_FJsObject();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin ScriptStruct FJsObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JsObject;
class UScriptStruct* FJsObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JsObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JsObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsObject, (UObject*)Z_Construct_UPackage__Script_JsEnv(), TEXT("JsObject"));
	}
	return Z_Registration_Info_UScriptStruct_JsObject.OuterSingleton;
}
template<> JSENV_API UScriptStruct* StaticStruct<FJsObject>()
{
	return FJsObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FJsObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JsObject.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
	nullptr,
	&NewStructOps,
	"JsObject",
	nullptr,
	0,
	sizeof(FJsObject),
	alignof(FJsObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJsObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJsObject()
{
	if (!Z_Registration_Info_UScriptStruct_JsObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JsObject.InnerSingleton, Z_Construct_UScriptStruct_FJsObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JsObject.InnerSingleton;
}
// End ScriptStruct FJsObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_JsObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJsObject::StaticStruct, Z_Construct_UScriptStruct_FJsObject_Statics::NewStructOps, TEXT("JsObject"), &Z_Registration_Info_UScriptStruct_JsObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJsObject), 1739671117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_JsObject_h_1696156684(TEXT("/Script/JsEnv"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_JsObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_JsObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
