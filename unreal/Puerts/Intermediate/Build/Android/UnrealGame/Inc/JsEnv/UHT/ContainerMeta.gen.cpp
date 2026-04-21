// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Private/ContainerMeta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainerMeta() {}

// Begin Cross Module References
JSENV_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyMetaRoot();
UPackage* Z_Construct_UPackage__Script_JsEnv();
// End Cross Module References

// Begin ScriptStruct FPropertyMetaRoot
struct Z_Construct_UScriptStruct_FPropertyMetaRoot_Statics
{
	struct FPropertyMetaRoot
	{
	};

	static_assert(sizeof(FPropertyMetaRoot) < MAX_uint16);
	static_assert(alignof(FPropertyMetaRoot) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ContainerMeta.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyMetaRoot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
	nullptr,
	nullptr,
	"PropertyMetaRoot",
	nullptr,
	0,
	sizeof(FPropertyMetaRoot),
	alignof(FPropertyMetaRoot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyMetaRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyMetaRoot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyMetaRoot()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyMetaRoot_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FPropertyMetaRoot
PRAGMA_ENABLE_DEPRECATION_WARNINGS
