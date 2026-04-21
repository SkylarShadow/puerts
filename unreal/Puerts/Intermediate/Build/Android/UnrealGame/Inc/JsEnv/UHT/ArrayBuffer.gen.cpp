// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Public/ArrayBuffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayBuffer() {}

// Begin Cross Module References
JSENV_API UScriptStruct* Z_Construct_UScriptStruct_FArrayBuffer();
JSENV_API UScriptStruct* Z_Construct_UScriptStruct_FArrayBufferValue();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin ScriptStruct FArrayBuffer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayBuffer;
class UScriptStruct* FArrayBuffer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayBuffer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayBuffer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayBuffer, (UObject*)Z_Construct_UPackage__Script_JsEnv(), TEXT("ArrayBuffer"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayBuffer.OuterSingleton;
}
template<> JSENV_API UScriptStruct* StaticStruct<FArrayBuffer>()
{
	return FArrayBuffer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArrayBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayBuffer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayBuffer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayBuffer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
	nullptr,
	&NewStructOps,
	"ArrayBuffer",
	nullptr,
	0,
	sizeof(FArrayBuffer),
	alignof(FArrayBuffer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayBuffer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArrayBuffer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArrayBuffer()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayBuffer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayBuffer.InnerSingleton, Z_Construct_UScriptStruct_FArrayBuffer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArrayBuffer.InnerSingleton;
}
// End ScriptStruct FArrayBuffer

// Begin ScriptStruct FArrayBufferValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayBufferValue;
class UScriptStruct* FArrayBufferValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayBufferValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayBufferValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayBufferValue, (UObject*)Z_Construct_UPackage__Script_JsEnv(), TEXT("ArrayBufferValue"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayBufferValue.OuterSingleton;
}
template<> JSENV_API UScriptStruct* StaticStruct<FArrayBufferValue>()
{
	return FArrayBufferValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArrayBufferValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayBuffer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayBufferValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayBufferValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
	nullptr,
	&NewStructOps,
	"ArrayBufferValue",
	nullptr,
	0,
	sizeof(FArrayBufferValue),
	alignof(FArrayBufferValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayBufferValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArrayBufferValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArrayBufferValue()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayBufferValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayBufferValue.InnerSingleton, Z_Construct_UScriptStruct_FArrayBufferValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArrayBufferValue.InnerSingleton;
}
// End ScriptStruct FArrayBufferValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ArrayBuffer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArrayBuffer::StaticStruct, Z_Construct_UScriptStruct_FArrayBuffer_Statics::NewStructOps, TEXT("ArrayBuffer"), &Z_Registration_Info_UScriptStruct_ArrayBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayBuffer), 1311015561U) },
		{ FArrayBufferValue::StaticStruct, Z_Construct_UScriptStruct_FArrayBufferValue_Statics::NewStructOps, TEXT("ArrayBufferValue"), &Z_Registration_Info_UScriptStruct_ArrayBufferValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayBufferValue), 3253362403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ArrayBuffer_h_2972382477(TEXT("/Script/JsEnv"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ArrayBuffer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ArrayBuffer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
