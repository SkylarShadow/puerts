// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuertsEditor/Public/PEBlueprintMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePEBlueprintMetaData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEClassMetaData();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEClassMetaData_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEFunctionMetaData();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEFunctionMetaData_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEParamMetaData();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEParamMetaData_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEPropertyMetaData();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEPropertyMetaData_NoRegister();
UPackage* Z_Construct_UPackage__Script_PuertsEditor();
// End Cross Module References

// Begin Class UPEClassMetaData Function AddAutoCollapseCategory
struct Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics
{
	struct PEClassMetaData_eventAddAutoCollapseCategory_Parms
	{
		FString InCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a category to auto collapse in blueprint\n     * @param InCategory\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a category to auto collapse in blueprint\n@param InCategory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddAutoCollapseCategory_Parms, InCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCategory_MetaData), NewProp_InCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::NewProp_InCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddAutoCollapseCategory", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::PEClassMetaData_eventAddAutoCollapseCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::PEClassMetaData_eventAddAutoCollapseCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddAutoCollapseCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAutoCollapseCategory(Z_Param_InCategory);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddAutoCollapseCategory

// Begin Class UPEClassMetaData Function AddAutoExpandCategory
struct Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics
{
	struct PEClassMetaData_eventAddAutoExpandCategory_Parms
	{
		FString InCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a category to auto expand in blueprint\n     * @param InCategory\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a category to auto expand in blueprint\n@param InCategory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddAutoExpandCategory_Parms, InCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCategory_MetaData), NewProp_InCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::NewProp_InCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddAutoExpandCategory", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::PEClassMetaData_eventAddAutoExpandCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::PEClassMetaData_eventAddAutoExpandCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddAutoExpandCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAutoExpandCategory(Z_Param_InCategory);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddAutoExpandCategory

// Begin Class UPEClassMetaData Function AddClassGroup
struct Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics
{
	struct PEClassMetaData_eventAddClassGroup_Parms
	{
		FString InGroupName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a class group\n     * @param InGroupName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a class group\n@param InGroupName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGroupName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::NewProp_InGroupName = { "InGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddClassGroup_Parms, InGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGroupName_MetaData), NewProp_InGroupName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::NewProp_InGroupName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddClassGroup", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::PEClassMetaData_eventAddClassGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::PEClassMetaData_eventAddClassGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddClassGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddClassGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddClassGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InGroupName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddClassGroup(Z_Param_InGroupName);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddClassGroup

// Begin Class UPEClassMetaData Function AddDontAutoCollapseCategory
struct Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics
{
	struct PEClassMetaData_eventAddDontAutoCollapseCategory_Parms
	{
		FString InCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief forbid a category to auto collapse in blueprint\n     * @param InCategory\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief forbid a category to auto collapse in blueprint\n@param InCategory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddDontAutoCollapseCategory_Parms, InCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCategory_MetaData), NewProp_InCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::NewProp_InCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddDontAutoCollapseCategory", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::PEClassMetaData_eventAddDontAutoCollapseCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::PEClassMetaData_eventAddDontAutoCollapseCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddDontAutoCollapseCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDontAutoCollapseCategory(Z_Param_InCategory);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddDontAutoCollapseCategory

// Begin Class UPEClassMetaData Function AddHideCategory
struct Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics
{
	struct PEClassMetaData_eventAddHideCategory_Parms
	{
		FString InCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a category to hide in blueprint\n     * @param InCategory\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a category to hide in blueprint\n@param InCategory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddHideCategory_Parms, InCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCategory_MetaData), NewProp_InCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::NewProp_InCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddHideCategory", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::PEClassMetaData_eventAddHideCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::PEClassMetaData_eventAddHideCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddHideCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddHideCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddHideCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHideCategory(Z_Param_InCategory);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddHideCategory

// Begin Class UPEClassMetaData Function AddHideFunction
struct Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics
{
	struct PEClassMetaData_eventAddHideFunction_Parms
	{
		FString InFunctionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a function to hide in blueprint\n     * @param InFunctionName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a function to hide in blueprint\n@param InFunctionName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::NewProp_InFunctionName = { "InFunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddHideFunction_Parms, InFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFunctionName_MetaData), NewProp_InFunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::NewProp_InFunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddHideFunction", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::PEClassMetaData_eventAddHideFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::PEClassMetaData_eventAddHideFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddHideFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddHideFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddHideFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHideFunction(Z_Param_InFunctionName);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddHideFunction

// Begin Class UPEClassMetaData Function AddShowCategory
struct Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics
{
	struct PEClassMetaData_eventAddShowCategory_Parms
	{
		FString InCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a category to show in blueprint\n     * @param InCategory\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a category to show in blueprint\n@param InCategory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddShowCategory_Parms, InCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCategory_MetaData), NewProp_InCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::NewProp_InCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddShowCategory", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::PEClassMetaData_eventAddShowCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::PEClassMetaData_eventAddShowCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddShowCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddShowCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddShowCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddShowCategory(Z_Param_InCategory);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddShowCategory

// Begin Class UPEClassMetaData Function AddShowFunction
struct Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics
{
	struct PEClassMetaData_eventAddShowFunction_Parms
	{
		FString InFunctionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a function to show in blueprint\n     * @param InFunctionName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a function to show in blueprint\n@param InFunctionName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::NewProp_InFunctionName = { "InFunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddShowFunction_Parms, InFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFunctionName_MetaData), NewProp_InFunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::NewProp_InFunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddShowFunction", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::PEClassMetaData_eventAddShowFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::PEClassMetaData_eventAddShowFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddShowFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddShowFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddShowFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddShowFunction(Z_Param_InFunctionName);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddShowFunction

// Begin Class UPEClassMetaData Function AddShowSubCategory
struct Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics
{
	struct PEClassMetaData_eventAddShowSubCategory_Parms
	{
		FString InCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a sub category to show in blueprint\n     * @param InCategory\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a sub category to show in blueprint\n@param InCategory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddShowSubCategory_Parms, InCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCategory_MetaData), NewProp_InCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::NewProp_InCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddShowSubCategory", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::PEClassMetaData_eventAddShowSubCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::PEClassMetaData_eventAddShowSubCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddShowSubCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddShowSubCategory(Z_Param_InCategory);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddShowSubCategory

// Begin Class UPEClassMetaData Function AddSparseDataType
struct Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics
{
	struct PEClassMetaData_eventAddSparseDataType_Parms
	{
		FString InType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add a sparse data type\n     * @param InType\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add a sparse data type\n@param InType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventAddSparseDataType_Parms, InType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InType_MetaData), NewProp_InType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::NewProp_InType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "AddSparseDataType", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::PEClassMetaData_eventAddSparseDataType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::PEClassMetaData_eventAddSparseDataType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execAddSparseDataType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSparseDataType(Z_Param_InType);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function AddSparseDataType

// Begin Class UPEClassMetaData Function SetClassFlags
struct Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics
{
	struct PEClassMetaData_eventSetClassFlags_Parms
	{
		int32 InFlags;
		bool bInPlaceable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the class flags, ant notify if placeable specifier is set\n     * @param InFlags\n     * @param bInPlaceable\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the class flags, ant notify if placeable specifier is set\n@param InFlags\n@param bInPlaceable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFlags;
	static void NewProp_bInPlaceable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInPlaceable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::NewProp_InFlags = { "InFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventSetClassFlags_Parms, InFlags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::NewProp_bInPlaceable_SetBit(void* Obj)
{
	((PEClassMetaData_eventSetClassFlags_Parms*)Obj)->bInPlaceable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::NewProp_bInPlaceable = { "bInPlaceable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEClassMetaData_eventSetClassFlags_Parms), &Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::NewProp_bInPlaceable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::NewProp_InFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::NewProp_bInPlaceable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "SetClassFlags", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::PEClassMetaData_eventSetClassFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::PEClassMetaData_eventSetClassFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_SetClassFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_SetClassFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execSetClassFlags)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InFlags);
	P_GET_UBOOL(Z_Param_bInPlaceable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClassFlags(Z_Param_InFlags,Z_Param_bInPlaceable);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function SetClassFlags

// Begin Class UPEClassMetaData Function SetClassWithIn
struct Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics
{
	struct PEClassMetaData_eventSetClassWithIn_Parms
	{
		FString InClassName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the class should be with in\n     * @param InClassName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the class should be with in\n@param InClassName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::NewProp_InClassName = { "InClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventSetClassWithIn_Parms, InClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClassName_MetaData), NewProp_InClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::NewProp_InClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "SetClassWithIn", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::PEClassMetaData_eventSetClassWithIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::PEClassMetaData_eventSetClassWithIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execSetClassWithIn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClassWithIn(Z_Param_InClassName);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function SetClassWithIn

// Begin Class UPEClassMetaData Function SetConfig
struct Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics
{
	struct PEClassMetaData_eventSetConfig_Parms
	{
		FString InConfigName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the configuration name\n     * @param InConfigName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the configuration name\n@param InConfigName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConfigName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InConfigName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::NewProp_InConfigName = { "InConfigName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventSetConfig_Parms, InConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConfigName_MetaData), NewProp_InConfigName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::NewProp_InConfigName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "SetConfig", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::PEClassMetaData_eventSetConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::PEClassMetaData_eventSetConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_SetConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_SetConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execSetConfig)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InConfigName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConfig(Z_Param_InConfigName);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function SetConfig

// Begin Class UPEClassMetaData Function SetMetaData
struct Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics
{
	struct PEClassMetaData_eventSetMetaData_Parms
	{
		FString InName;
		FString InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the specific meta data\n     * @param InName\n     * @param InValue\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the specific meta data\n@param InName\n@param InValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventSetMetaData_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEClassMetaData_eventSetMetaData_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEClassMetaData, nullptr, "SetMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::PEClassMetaData_eventSetMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::PEClassMetaData_eventSetMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEClassMetaData_SetMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEClassMetaData_SetMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEClassMetaData::execSetMetaData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMetaData(Z_Param_InName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UPEClassMetaData Function SetMetaData

// Begin Class UPEClassMetaData
void UPEClassMetaData::StaticRegisterNativesUPEClassMetaData()
{
	UClass* Class = UPEClassMetaData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAutoCollapseCategory", &UPEClassMetaData::execAddAutoCollapseCategory },
		{ "AddAutoExpandCategory", &UPEClassMetaData::execAddAutoExpandCategory },
		{ "AddClassGroup", &UPEClassMetaData::execAddClassGroup },
		{ "AddDontAutoCollapseCategory", &UPEClassMetaData::execAddDontAutoCollapseCategory },
		{ "AddHideCategory", &UPEClassMetaData::execAddHideCategory },
		{ "AddHideFunction", &UPEClassMetaData::execAddHideFunction },
		{ "AddShowCategory", &UPEClassMetaData::execAddShowCategory },
		{ "AddShowFunction", &UPEClassMetaData::execAddShowFunction },
		{ "AddShowSubCategory", &UPEClassMetaData::execAddShowSubCategory },
		{ "AddSparseDataType", &UPEClassMetaData::execAddSparseDataType },
		{ "SetClassFlags", &UPEClassMetaData::execSetClassFlags },
		{ "SetClassWithIn", &UPEClassMetaData::execSetClassWithIn },
		{ "SetConfig", &UPEClassMetaData::execSetConfig },
		{ "SetMetaData", &UPEClassMetaData::execSetMetaData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEClassMetaData);
UClass* Z_Construct_UClass_UPEClassMetaData_NoRegister()
{
	return UPEClassMetaData::StaticClass();
}
struct Z_Construct_UClass_UPEClassMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief a helper structure used to store the meta data of a class, @see ClassDeclarationMetaData.h/cpp\n *\x09\x09""currently, we don't need remove methods, also the caller should ensure the internal data consistence\n *\x09\x09""e.g. the show category added should never be added in hide categories...\n */" },
#endif
		{ "IncludePath", "PEBlueprintMetaData.h" },
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief a helper structure used to store the meta data of a class, @see ClassDeclarationMetaData.h/cpp\n            currently, we don't need remove methods, also the caller should ensure the internal data consistence\n            e.g. the show category added should never be added in hide categories..." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEClassMetaData_AddAutoCollapseCategory, "AddAutoCollapseCategory" }, // 2297599289
		{ &Z_Construct_UFunction_UPEClassMetaData_AddAutoExpandCategory, "AddAutoExpandCategory" }, // 1913457667
		{ &Z_Construct_UFunction_UPEClassMetaData_AddClassGroup, "AddClassGroup" }, // 624475947
		{ &Z_Construct_UFunction_UPEClassMetaData_AddDontAutoCollapseCategory, "AddDontAutoCollapseCategory" }, // 1644859685
		{ &Z_Construct_UFunction_UPEClassMetaData_AddHideCategory, "AddHideCategory" }, // 2689387864
		{ &Z_Construct_UFunction_UPEClassMetaData_AddHideFunction, "AddHideFunction" }, // 2507361861
		{ &Z_Construct_UFunction_UPEClassMetaData_AddShowCategory, "AddShowCategory" }, // 2772652481
		{ &Z_Construct_UFunction_UPEClassMetaData_AddShowFunction, "AddShowFunction" }, // 3654134013
		{ &Z_Construct_UFunction_UPEClassMetaData_AddShowSubCategory, "AddShowSubCategory" }, // 1117624341
		{ &Z_Construct_UFunction_UPEClassMetaData_AddSparseDataType, "AddSparseDataType" }, // 3232015288
		{ &Z_Construct_UFunction_UPEClassMetaData_SetClassFlags, "SetClassFlags" }, // 910573929
		{ &Z_Construct_UFunction_UPEClassMetaData_SetClassWithIn, "SetClassWithIn" }, // 677805907
		{ &Z_Construct_UFunction_UPEClassMetaData_SetConfig, "SetConfig" }, // 1850834356
		{ &Z_Construct_UFunction_UPEClassMetaData_SetMetaData, "SetMetaData" }, // 3959667212
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEClassMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPEClassMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEClassMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEClassMetaData_Statics::ClassParams = {
	&UPEClassMetaData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEClassMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEClassMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEClassMetaData()
{
	if (!Z_Registration_Info_UClass_UPEClassMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEClassMetaData.OuterSingleton, Z_Construct_UClass_UPEClassMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEClassMetaData.OuterSingleton;
}
template<> PUERTSEDITOR_API UClass* StaticClass<UPEClassMetaData>()
{
	return UPEClassMetaData::StaticClass();
}
UPEClassMetaData::UPEClassMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEClassMetaData);
UPEClassMetaData::~UPEClassMetaData() {}
// End Class UPEClassMetaData

// Begin Class UPEFunctionMetaData Function SetCppImplName
struct Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics
{
	struct PEFunctionMetaData_eventSetCppImplName_Parms
	{
		FString InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the cpp implementation function, is this meaningful for blueprint function?\n     * @param InName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the cpp implementation function, is this meaningful for blueprint function?\n@param InName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetCppImplName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetCppImplName", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::PEFunctionMetaData_eventSetCppImplName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::PEFunctionMetaData_eventSetCppImplName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetCppImplName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCppImplName(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetCppImplName

// Begin Class UPEFunctionMetaData Function SetCppValidationImplName
struct Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics
{
	struct PEFunctionMetaData_eventSetCppValidationImplName_Parms
	{
		FString InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the cpp implementation validation function\n     * @param InName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the cpp implementation validation function\n@param InName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetCppValidationImplName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetCppValidationImplName", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::PEFunctionMetaData_eventSetCppValidationImplName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::PEFunctionMetaData_eventSetCppValidationImplName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetCppValidationImplName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCppValidationImplName(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetCppValidationImplName

// Begin Class UPEFunctionMetaData Function SetEndpointName
struct Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics
{
	struct PEFunctionMetaData_eventSetEndpointName_Parms
	{
		FString InEndpointName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the end point name,\n     * @param InEndpointName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the end point name,\n@param InEndpointName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEndpointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InEndpointName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::NewProp_InEndpointName = { "InEndpointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetEndpointName_Parms, InEndpointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndpointName_MetaData), NewProp_InEndpointName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::NewProp_InEndpointName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetEndpointName", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::PEFunctionMetaData_eventSetEndpointName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::PEFunctionMetaData_eventSetEndpointName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetEndpointName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InEndpointName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEndpointName(Z_Param_InEndpointName);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetEndpointName

// Begin Class UPEFunctionMetaData Function SetForceBlueprintImpure
struct Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics
{
	struct PEFunctionMetaData_eventSetForceBlueprintImpure_Parms
	{
		bool bInForceBlueprintImpure;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set if the function is force blueprint impure\n     * @param bInForceBlueprintImpure\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set if the function is force blueprint impure\n@param bInForceBlueprintImpure" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInForceBlueprintImpure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInForceBlueprintImpure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::NewProp_bInForceBlueprintImpure_SetBit(void* Obj)
{
	((PEFunctionMetaData_eventSetForceBlueprintImpure_Parms*)Obj)->bInForceBlueprintImpure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::NewProp_bInForceBlueprintImpure = { "bInForceBlueprintImpure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEFunctionMetaData_eventSetForceBlueprintImpure_Parms), &Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::NewProp_bInForceBlueprintImpure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::NewProp_bInForceBlueprintImpure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetForceBlueprintImpure", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::PEFunctionMetaData_eventSetForceBlueprintImpure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::PEFunctionMetaData_eventSetForceBlueprintImpure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetForceBlueprintImpure)
{
	P_GET_UBOOL(Z_Param_bInForceBlueprintImpure);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceBlueprintImpure(Z_Param_bInForceBlueprintImpure);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetForceBlueprintImpure

// Begin Class UPEFunctionMetaData Function SetFunctionExportFlags
struct Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics
{
	struct PEFunctionMetaData_eventSetFunctionExportFlags_Parms
	{
		int32 InFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the function export flags\n     * @param InFlags\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the function export flags\n@param InFlags" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::NewProp_InFlags = { "InFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetFunctionExportFlags_Parms, InFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::NewProp_InFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetFunctionExportFlags", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::PEFunctionMetaData_eventSetFunctionExportFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::PEFunctionMetaData_eventSetFunctionExportFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetFunctionExportFlags)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFunctionExportFlags(Z_Param_InFlags);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetFunctionExportFlags

// Begin Class UPEFunctionMetaData Function SetFunctionFlags
struct Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics
{
	struct PEFunctionMetaData_eventSetFunctionFlags_Parms
	{
		int32 InHighBits;
		int32 InLowBits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the function flags, since this will called from js, so divide into high and low parts\n     * @param InHighBits\n     * @param InLowBits\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the function flags, since this will called from js, so divide into high and low parts\n@param InHighBits\n@param InLowBits" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHighBits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLowBits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::NewProp_InHighBits = { "InHighBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetFunctionFlags_Parms, InHighBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::NewProp_InLowBits = { "InLowBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetFunctionFlags_Parms, InLowBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::NewProp_InHighBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::NewProp_InLowBits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetFunctionFlags", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::PEFunctionMetaData_eventSetFunctionFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::PEFunctionMetaData_eventSetFunctionFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetFunctionFlags)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InHighBits);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLowBits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFunctionFlags(Z_Param_InHighBits,Z_Param_InLowBits);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetFunctionFlags

// Begin Class UPEFunctionMetaData Function SetIsSealedEvent
struct Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics
{
	struct PEFunctionMetaData_eventSetIsSealedEvent_Parms
	{
		bool bInSealedEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set if the function is sealed event\n     * @param bInSealedEvent\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set if the function is sealed event\n@param bInSealedEvent" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInSealedEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSealedEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::NewProp_bInSealedEvent_SetBit(void* Obj)
{
	((PEFunctionMetaData_eventSetIsSealedEvent_Parms*)Obj)->bInSealedEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::NewProp_bInSealedEvent = { "bInSealedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEFunctionMetaData_eventSetIsSealedEvent_Parms), &Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::NewProp_bInSealedEvent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::NewProp_bInSealedEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetIsSealedEvent", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::PEFunctionMetaData_eventSetIsSealedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::PEFunctionMetaData_eventSetIsSealedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetIsSealedEvent)
{
	P_GET_UBOOL(Z_Param_bInSealedEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsSealedEvent(Z_Param_bInSealedEvent);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetIsSealedEvent

// Begin Class UPEFunctionMetaData Function SetMetaData
struct Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics
{
	struct PEFunctionMetaData_eventSetMetaData_Parms
	{
		FString InName;
		FString InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the specific meta data\n     * @param InName\n     * @param InValue\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the specific meta data\n@param InName\n@param InValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetMetaData_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetMetaData_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::PEFunctionMetaData_eventSetMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::PEFunctionMetaData_eventSetMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetMetaData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMetaData(Z_Param_InName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetMetaData

// Begin Class UPEFunctionMetaData Function SetRPCId
struct Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics
{
	struct PEFunctionMetaData_eventSetRPCId_Parms
	{
		int32 InRPCId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the rpc id\n     * @param InRPCId\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the rpc id\n@param InRPCId" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InRPCId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::NewProp_InRPCId = { "InRPCId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetRPCId_Parms, InRPCId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::NewProp_InRPCId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetRPCId", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::PEFunctionMetaData_eventSetRPCId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::PEFunctionMetaData_eventSetRPCId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetRPCId)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InRPCId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRPCId(Z_Param_InRPCId);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetRPCId

// Begin Class UPEFunctionMetaData Function SetRPCResponseId
struct Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics
{
	struct PEFunctionMetaData_eventSetRPCResponseId_Parms
	{
		int32 InRPCResponseId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the rpc response id\n     * @param InRPCResponseId\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the rpc response id\n@param InRPCResponseId" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InRPCResponseId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::NewProp_InRPCResponseId = { "InRPCResponseId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEFunctionMetaData_eventSetRPCResponseId_Parms, InRPCResponseId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::NewProp_InRPCResponseId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEFunctionMetaData, nullptr, "SetRPCResponseId", nullptr, nullptr, Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::PEFunctionMetaData_eventSetRPCResponseId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::PEFunctionMetaData_eventSetRPCResponseId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEFunctionMetaData::execSetRPCResponseId)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InRPCResponseId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRPCResponseId(Z_Param_InRPCResponseId);
	P_NATIVE_END;
}
// End Class UPEFunctionMetaData Function SetRPCResponseId

// Begin Class UPEFunctionMetaData
void UPEFunctionMetaData::StaticRegisterNativesUPEFunctionMetaData()
{
	UClass* Class = UPEFunctionMetaData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCppImplName", &UPEFunctionMetaData::execSetCppImplName },
		{ "SetCppValidationImplName", &UPEFunctionMetaData::execSetCppValidationImplName },
		{ "SetEndpointName", &UPEFunctionMetaData::execSetEndpointName },
		{ "SetForceBlueprintImpure", &UPEFunctionMetaData::execSetForceBlueprintImpure },
		{ "SetFunctionExportFlags", &UPEFunctionMetaData::execSetFunctionExportFlags },
		{ "SetFunctionFlags", &UPEFunctionMetaData::execSetFunctionFlags },
		{ "SetIsSealedEvent", &UPEFunctionMetaData::execSetIsSealedEvent },
		{ "SetMetaData", &UPEFunctionMetaData::execSetMetaData },
		{ "SetRPCId", &UPEFunctionMetaData::execSetRPCId },
		{ "SetRPCResponseId", &UPEFunctionMetaData::execSetRPCResponseId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEFunctionMetaData);
UClass* Z_Construct_UClass_UPEFunctionMetaData_NoRegister()
{
	return UPEFunctionMetaData::StaticClass();
}
struct Z_Construct_UClass_UPEFunctionMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief a helper structure used to store the meta data of a function, @see ParseHelper.h\n */" },
#endif
		{ "IncludePath", "PEBlueprintMetaData.h" },
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief a helper structure used to store the meta data of a function, @see ParseHelper.h" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetCppImplName, "SetCppImplName" }, // 1779578271
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetCppValidationImplName, "SetCppValidationImplName" }, // 1171445490
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetEndpointName, "SetEndpointName" }, // 3492148482
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetForceBlueprintImpure, "SetForceBlueprintImpure" }, // 1206496019
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionExportFlags, "SetFunctionExportFlags" }, // 2233441113
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetFunctionFlags, "SetFunctionFlags" }, // 2726218611
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetIsSealedEvent, "SetIsSealedEvent" }, // 2276023290
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetMetaData, "SetMetaData" }, // 3726632341
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetRPCId, "SetRPCId" }, // 4144607412
		{ &Z_Construct_UFunction_UPEFunctionMetaData_SetRPCResponseId, "SetRPCResponseId" }, // 1146494984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEFunctionMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPEFunctionMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEFunctionMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEFunctionMetaData_Statics::ClassParams = {
	&UPEFunctionMetaData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEFunctionMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEFunctionMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEFunctionMetaData()
{
	if (!Z_Registration_Info_UClass_UPEFunctionMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEFunctionMetaData.OuterSingleton, Z_Construct_UClass_UPEFunctionMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEFunctionMetaData.OuterSingleton;
}
template<> PUERTSEDITOR_API UClass* StaticClass<UPEFunctionMetaData>()
{
	return UPEFunctionMetaData::StaticClass();
}
UPEFunctionMetaData::UPEFunctionMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEFunctionMetaData);
UPEFunctionMetaData::~UPEFunctionMetaData() {}
// End Class UPEFunctionMetaData

// Begin Class UPEParamMetaData Function SetMetaData
struct Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics
{
	struct PEParamMetaData_eventSetMetaData_Parms
	{
		FString InName;
		FString InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set specific meta data\n     * @param InName\n     * @param InValue\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set specific meta data\n@param InName\n@param InValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEParamMetaData_eventSetMetaData_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEParamMetaData_eventSetMetaData_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEParamMetaData, nullptr, "SetMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::PEParamMetaData_eventSetMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::PEParamMetaData_eventSetMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEParamMetaData_SetMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEParamMetaData_SetMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEParamMetaData::execSetMetaData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMetaData(Z_Param_InName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UPEParamMetaData Function SetMetaData

// Begin Class UPEParamMetaData Function SetParamFlags
struct Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics
{
	struct PEParamMetaData_eventSetParamFlags_Parms
	{
		int32 InHighBits;
		int32 InLowBits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the parameter's property flags\n     * @param InHighBits\n     * @param InLowBits\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the parameter's property flags\n@param InHighBits\n@param InLowBits" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHighBits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLowBits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::NewProp_InHighBits = { "InHighBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEParamMetaData_eventSetParamFlags_Parms, InHighBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::NewProp_InLowBits = { "InLowBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEParamMetaData_eventSetParamFlags_Parms, InLowBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::NewProp_InHighBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::NewProp_InLowBits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEParamMetaData, nullptr, "SetParamFlags", nullptr, nullptr, Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::PEParamMetaData_eventSetParamFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::PEParamMetaData_eventSetParamFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEParamMetaData_SetParamFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEParamMetaData_SetParamFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEParamMetaData::execSetParamFlags)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InHighBits);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLowBits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParamFlags(Z_Param_InHighBits,Z_Param_InLowBits);
	P_NATIVE_END;
}
// End Class UPEParamMetaData Function SetParamFlags

// Begin Class UPEParamMetaData
void UPEParamMetaData::StaticRegisterNativesUPEParamMetaData()
{
	UClass* Class = UPEParamMetaData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMetaData", &UPEParamMetaData::execSetMetaData },
		{ "SetParamFlags", &UPEParamMetaData::execSetParamFlags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEParamMetaData);
UClass* Z_Construct_UClass_UPEParamMetaData_NoRegister()
{
	return UPEParamMetaData::StaticClass();
}
struct Z_Construct_UClass_UPEParamMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief a helper structure used to store the meta data of a function parameter\n */" },
#endif
		{ "IncludePath", "PEBlueprintMetaData.h" },
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief a helper structure used to store the meta data of a function parameter" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEParamMetaData_SetMetaData, "SetMetaData" }, // 1635965629
		{ &Z_Construct_UFunction_UPEParamMetaData_SetParamFlags, "SetParamFlags" }, // 725192479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEParamMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPEParamMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEParamMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEParamMetaData_Statics::ClassParams = {
	&UPEParamMetaData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEParamMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEParamMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEParamMetaData()
{
	if (!Z_Registration_Info_UClass_UPEParamMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEParamMetaData.OuterSingleton, Z_Construct_UClass_UPEParamMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEParamMetaData.OuterSingleton;
}
template<> PUERTSEDITOR_API UClass* StaticClass<UPEParamMetaData>()
{
	return UPEParamMetaData::StaticClass();
}
UPEParamMetaData::UPEParamMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEParamMetaData);
UPEParamMetaData::~UPEParamMetaData() {}
// End Class UPEParamMetaData

// Begin Class UPEPropertyMetaData Function SetMetaData
struct Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics
{
	struct PEPropertyMetaData_eventSetMetaData_Parms
	{
		FString InName;
		FString InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the meta data of the property\n     * @param InName\n     * @param InValue\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the meta data of the property\n@param InName\n@param InValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEPropertyMetaData_eventSetMetaData_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEPropertyMetaData_eventSetMetaData_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEPropertyMetaData, nullptr, "SetMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::PEPropertyMetaData_eventSetMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::PEPropertyMetaData_eventSetMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEPropertyMetaData::execSetMetaData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMetaData(Z_Param_InName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UPEPropertyMetaData Function SetMetaData

// Begin Class UPEPropertyMetaData Function SetPropertyFlags
struct Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics
{
	struct PEPropertyMetaData_eventSetPropertyFlags_Parms
	{
		int32 InHighBits;
		int32 InLowBits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the property flags\n     * @param InHighBits\n     * @param InLowBits\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the property flags\n@param InHighBits\n@param InLowBits" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHighBits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLowBits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::NewProp_InHighBits = { "InHighBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEPropertyMetaData_eventSetPropertyFlags_Parms, InHighBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::NewProp_InLowBits = { "InLowBits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEPropertyMetaData_eventSetPropertyFlags_Parms, InLowBits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::NewProp_InHighBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::NewProp_InLowBits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEPropertyMetaData, nullptr, "SetPropertyFlags", nullptr, nullptr, Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::PEPropertyMetaData_eventSetPropertyFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::PEPropertyMetaData_eventSetPropertyFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEPropertyMetaData::execSetPropertyFlags)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InHighBits);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLowBits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPropertyFlags(Z_Param_InHighBits,Z_Param_InLowBits);
	P_NATIVE_END;
}
// End Class UPEPropertyMetaData Function SetPropertyFlags

// Begin Class UPEPropertyMetaData Function SetRepCallbackName
struct Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics
{
	struct PEPropertyMetaData_eventSetRepCallbackName_Parms
	{
		FString InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief set the rep callback name\n     * @param InName\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief set the rep callback name\n@param InName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEPropertyMetaData_eventSetRepCallbackName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEPropertyMetaData, nullptr, "SetRepCallbackName", nullptr, nullptr, Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::PEPropertyMetaData_eventSetRepCallbackName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::PEPropertyMetaData_eventSetRepCallbackName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEPropertyMetaData::execSetRepCallbackName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRepCallbackName(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UPEPropertyMetaData Function SetRepCallbackName

// Begin Class UPEPropertyMetaData
void UPEPropertyMetaData::StaticRegisterNativesUPEPropertyMetaData()
{
	UClass* Class = UPEPropertyMetaData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMetaData", &UPEPropertyMetaData::execSetMetaData },
		{ "SetPropertyFlags", &UPEPropertyMetaData::execSetPropertyFlags },
		{ "SetRepCallbackName", &UPEPropertyMetaData::execSetRepCallbackName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEPropertyMetaData);
UClass* Z_Construct_UClass_UPEPropertyMetaData_NoRegister()
{
	return UPEPropertyMetaData::StaticClass();
}
struct Z_Construct_UClass_UPEPropertyMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief a helper function used to store the meta data of a class's member variable\n */" },
#endif
		{ "IncludePath", "PEBlueprintMetaData.h" },
		{ "ModuleRelativePath", "Public/PEBlueprintMetaData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief a helper function used to store the meta data of a class's member variable" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEPropertyMetaData_SetMetaData, "SetMetaData" }, // 3929977608
		{ &Z_Construct_UFunction_UPEPropertyMetaData_SetPropertyFlags, "SetPropertyFlags" }, // 745741646
		{ &Z_Construct_UFunction_UPEPropertyMetaData_SetRepCallbackName, "SetRepCallbackName" }, // 3408728399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEPropertyMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPEPropertyMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEPropertyMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEPropertyMetaData_Statics::ClassParams = {
	&UPEPropertyMetaData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEPropertyMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEPropertyMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEPropertyMetaData()
{
	if (!Z_Registration_Info_UClass_UPEPropertyMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEPropertyMetaData.OuterSingleton, Z_Construct_UClass_UPEPropertyMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEPropertyMetaData.OuterSingleton;
}
template<> PUERTSEDITOR_API UClass* StaticClass<UPEPropertyMetaData>()
{
	return UPEPropertyMetaData::StaticClass();
}
UPEPropertyMetaData::UPEPropertyMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEPropertyMetaData);
UPEPropertyMetaData::~UPEPropertyMetaData() {}
// End Class UPEPropertyMetaData

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintMetaData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPEClassMetaData, UPEClassMetaData::StaticClass, TEXT("UPEClassMetaData"), &Z_Registration_Info_UClass_UPEClassMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEClassMetaData), 2158693428U) },
		{ Z_Construct_UClass_UPEFunctionMetaData, UPEFunctionMetaData::StaticClass, TEXT("UPEFunctionMetaData"), &Z_Registration_Info_UClass_UPEFunctionMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEFunctionMetaData), 160738719U) },
		{ Z_Construct_UClass_UPEParamMetaData, UPEParamMetaData::StaticClass, TEXT("UPEParamMetaData"), &Z_Registration_Info_UClass_UPEParamMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEParamMetaData), 2131960997U) },
		{ Z_Construct_UClass_UPEPropertyMetaData, UPEPropertyMetaData::StaticClass, TEXT("UPEPropertyMetaData"), &Z_Registration_Info_UClass_UPEPropertyMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEPropertyMetaData), 2284173046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintMetaData_h_1110208145(TEXT("/Script/PuertsEditor"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintMetaData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
