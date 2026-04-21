// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuertsEditor/Public/PEBlueprintAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePEBlueprintAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEBlueprintAsset();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEBlueprintAsset_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEClassMetaData_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEFunctionMetaData_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEParamMetaData_NoRegister();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEPropertyMetaData_NoRegister();
PUERTSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPEGraphPinType();
PUERTSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPEGraphTerminalType();
UPackage* Z_Construct_UPackage__Script_PuertsEditor();
// End Cross Module References

// Begin ScriptStruct FPEGraphTerminalType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PEGraphTerminalType;
class UScriptStruct* FPEGraphTerminalType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PEGraphTerminalType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PEGraphTerminalType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPEGraphTerminalType, (UObject*)Z_Construct_UPackage__Script_PuertsEditor(), TEXT("PEGraphTerminalType"));
	}
	return Z_Registration_Info_UScriptStruct_PEGraphTerminalType.OuterSingleton;
}
template<> PUERTSEDITOR_API UScriptStruct* StaticStruct<FPEGraphTerminalType>()
{
	return FPEGraphTerminalType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinSubCategoryObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPEGraphTerminalType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPEGraphTerminalType, PinCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinCategory_MetaData), NewProp_PinCategory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::NewProp_PinSubCategoryObject = { "PinSubCategoryObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPEGraphTerminalType, PinSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryObject_MetaData), NewProp_PinSubCategoryObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::NewProp_PinCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::NewProp_PinSubCategoryObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
	nullptr,
	&NewStructOps,
	"PEGraphTerminalType",
	Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::PropPointers),
	sizeof(FPEGraphTerminalType),
	alignof(FPEGraphTerminalType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPEGraphTerminalType()
{
	if (!Z_Registration_Info_UScriptStruct_PEGraphTerminalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PEGraphTerminalType.InnerSingleton, Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PEGraphTerminalType.InnerSingleton;
}
// End ScriptStruct FPEGraphTerminalType

// Begin ScriptStruct FPEGraphPinType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PEGraphPinType;
class UScriptStruct* FPEGraphPinType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PEGraphPinType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PEGraphPinType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPEGraphPinType, (UObject*)Z_Construct_UPackage__Script_PuertsEditor(), TEXT("PEGraphPinType"));
	}
	return Z_Registration_Info_UScriptStruct_PEGraphPinType.OuterSingleton;
}
template<> PUERTSEDITOR_API UScriptStruct* StaticStruct<FPEGraphPinType>()
{
	return FPEGraphPinType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPEGraphPinType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinContainerType_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReference_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIn_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinSubCategoryObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PinContainerType;
	static void NewProp_bIsReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReference;
	static void NewProp_bIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPEGraphPinType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPEGraphPinType, PinCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinCategory_MetaData), NewProp_PinCategory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_PinSubCategoryObject = { "PinSubCategoryObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPEGraphPinType, PinSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryObject_MetaData), NewProp_PinSubCategoryObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_PinContainerType = { "PinContainerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPEGraphPinType, PinContainerType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinContainerType_MetaData), NewProp_PinContainerType_MetaData) };
void Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIsReference_SetBit(void* Obj)
{
	((FPEGraphPinType*)Obj)->bIsReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIsReference = { "bIsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPEGraphPinType), &Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReference_MetaData), NewProp_bIsReference_MetaData) };
void Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIn_SetBit(void* Obj)
{
	((FPEGraphPinType*)Obj)->bIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIn = { "bIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPEGraphPinType), &Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIn_MetaData), NewProp_bIn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPEGraphPinType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_PinCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_PinSubCategoryObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_PinContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewProp_bIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPEGraphPinType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPEGraphPinType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
	nullptr,
	&NewStructOps,
	"PEGraphPinType",
	Z_Construct_UScriptStruct_FPEGraphPinType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPEGraphPinType_Statics::PropPointers),
	sizeof(FPEGraphPinType),
	alignof(FPEGraphPinType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPEGraphPinType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPEGraphPinType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPEGraphPinType()
{
	if (!Z_Registration_Info_UScriptStruct_PEGraphPinType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PEGraphPinType.InnerSingleton, Z_Construct_UScriptStruct_FPEGraphPinType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PEGraphPinType.InnerSingleton;
}
// End ScriptStruct FPEGraphPinType

// Begin Class UPEBlueprintAsset Function AddFunction
struct Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics
{
	struct PEBlueprintAsset_eventAddFunction_Parms
	{
		FName InName;
		bool IsVoid;
		FPEGraphPinType InGraphPinType;
		FPEGraphTerminalType InPinValueType;
		int32 InSetFlags;
		int32 InClearFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static void NewProp_IsVoid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVoid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGraphPinType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPinValueType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSetFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InClearFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunction_Parms, InName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_IsVoid_SetBit(void* Obj)
{
	((PEBlueprintAsset_eventAddFunction_Parms*)Obj)->IsVoid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_IsVoid = { "IsVoid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEBlueprintAsset_eventAddFunction_Parms), &Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_IsVoid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InGraphPinType = { "InGraphPinType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunction_Parms, InGraphPinType), Z_Construct_UScriptStruct_FPEGraphPinType, METADATA_PARAMS(0, nullptr) }; // 1877023195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InPinValueType = { "InPinValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunction_Parms, InPinValueType), Z_Construct_UScriptStruct_FPEGraphTerminalType, METADATA_PARAMS(0, nullptr) }; // 3058452062
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InSetFlags = { "InSetFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunction_Parms, InSetFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InClearFlags = { "InClearFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunction_Parms, InClearFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_IsVoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InGraphPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InPinValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InSetFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::NewProp_InClearFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "AddFunction", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::PEBlueprintAsset_eventAddFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::PEBlueprintAsset_eventAddFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_AddFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_AddFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execAddFunction)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_UBOOL(Z_Param_IsVoid);
	P_GET_STRUCT(FPEGraphPinType,Z_Param_InGraphPinType);
	P_GET_STRUCT(FPEGraphTerminalType,Z_Param_InPinValueType);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSetFlags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InClearFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFunction(Z_Param_InName,Z_Param_IsVoid,Z_Param_InGraphPinType,Z_Param_InPinValueType,Z_Param_InSetFlags,Z_Param_InClearFlags);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function AddFunction

// Begin Class UPEBlueprintAsset Function AddFunctionWithMetaData
struct Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics
{
	struct PEBlueprintAsset_eventAddFunctionWithMetaData_Parms
	{
		FName InName;
		bool IsVoid;
		FPEGraphPinType InGraphPinType;
		FPEGraphTerminalType InPinValueType;
		int32 InSetFlags;
		int32 InClearFlags;
		UPEFunctionMetaData* InMetaData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief create the function with given meta data\n     * @param InName\n     * @param IsVoid\n     * @param InGraphPinType\n     * @param InPinValueType\n     * @param InSetFlags\n     * @param InClearFlags\n     * @param InMetaData\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief create the function with given meta data\n@param InName\n@param IsVoid\n@param InGraphPinType\n@param InPinValueType\n@param InSetFlags\n@param InClearFlags\n@param InMetaData" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static void NewProp_IsVoid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVoid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGraphPinType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPinValueType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSetFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InClearFlags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunctionWithMetaData_Parms, InName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_IsVoid_SetBit(void* Obj)
{
	((PEBlueprintAsset_eventAddFunctionWithMetaData_Parms*)Obj)->IsVoid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_IsVoid = { "IsVoid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEBlueprintAsset_eventAddFunctionWithMetaData_Parms), &Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_IsVoid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InGraphPinType = { "InGraphPinType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunctionWithMetaData_Parms, InGraphPinType), Z_Construct_UScriptStruct_FPEGraphPinType, METADATA_PARAMS(0, nullptr) }; // 1877023195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InPinValueType = { "InPinValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunctionWithMetaData_Parms, InPinValueType), Z_Construct_UScriptStruct_FPEGraphTerminalType, METADATA_PARAMS(0, nullptr) }; // 3058452062
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InSetFlags = { "InSetFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunctionWithMetaData_Parms, InSetFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InClearFlags = { "InClearFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunctionWithMetaData_Parms, InClearFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InMetaData = { "InMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddFunctionWithMetaData_Parms, InMetaData), Z_Construct_UClass_UPEFunctionMetaData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_IsVoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InGraphPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InPinValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InSetFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InClearFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::NewProp_InMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "AddFunctionWithMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::PEBlueprintAsset_eventAddFunctionWithMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::PEBlueprintAsset_eventAddFunctionWithMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execAddFunctionWithMetaData)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_UBOOL(Z_Param_IsVoid);
	P_GET_STRUCT(FPEGraphPinType,Z_Param_InGraphPinType);
	P_GET_STRUCT(FPEGraphTerminalType,Z_Param_InPinValueType);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSetFlags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InClearFlags);
	P_GET_OBJECT(UPEFunctionMetaData,Z_Param_InMetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFunctionWithMetaData(Z_Param_InName,Z_Param_IsVoid,Z_Param_InGraphPinType,Z_Param_InPinValueType,Z_Param_InSetFlags,Z_Param_InClearFlags,Z_Param_InMetaData);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function AddFunctionWithMetaData

// Begin Class UPEBlueprintAsset Function AddMemberVariable
struct Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics
{
	struct PEBlueprintAsset_eventAddMemberVariable_Parms
	{
		FName NewVarName;
		FPEGraphPinType InGraphPinType;
		FPEGraphTerminalType InPinValueType;
		int32 InLFlags;
		int32 InHFlags;
		int32 InLifetimeCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewVarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGraphPinType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPinValueType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLifetimeCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_NewVarName = { "NewVarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariable_Parms, NewVarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InGraphPinType = { "InGraphPinType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariable_Parms, InGraphPinType), Z_Construct_UScriptStruct_FPEGraphPinType, METADATA_PARAMS(0, nullptr) }; // 1877023195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InPinValueType = { "InPinValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariable_Parms, InPinValueType), Z_Construct_UScriptStruct_FPEGraphTerminalType, METADATA_PARAMS(0, nullptr) }; // 3058452062
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InLFlags = { "InLFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariable_Parms, InLFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InHFlags = { "InHFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariable_Parms, InHFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InLifetimeCondition = { "InLifetimeCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariable_Parms, InLifetimeCondition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_NewVarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InGraphPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InPinValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InLFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InHFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::NewProp_InLifetimeCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "AddMemberVariable", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::PEBlueprintAsset_eventAddMemberVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::PEBlueprintAsset_eventAddMemberVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execAddMemberVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewVarName);
	P_GET_STRUCT(FPEGraphPinType,Z_Param_InGraphPinType);
	P_GET_STRUCT(FPEGraphTerminalType,Z_Param_InPinValueType);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLFlags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHFlags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLifetimeCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMemberVariable(Z_Param_NewVarName,Z_Param_InGraphPinType,Z_Param_InPinValueType,Z_Param_InLFlags,Z_Param_InHFlags,Z_Param_InLifetimeCondition);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function AddMemberVariable

// Begin Class UPEBlueprintAsset Function AddMemberVariableWithMetaData
struct Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics
{
	struct PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms
	{
		FName InNewVarName;
		FPEGraphPinType InGraphPinType;
		FPEGraphTerminalType InPinValueType;
		int32 InLFlags;
		int32 InHFLags;
		int32 InLifetimeCondition;
		UPEPropertyMetaData* InMetaData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief create the property with given meta data\n     * @param InNewVarName\n     * @param InGraphPinType\n     * @param InPinValueType\n     * @param InLFlags\n     * @param InHFLags\n     * @param InLifetimeCondition\n     * @param InMetaData\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief create the property with given meta data\n@param InNewVarName\n@param InGraphPinType\n@param InPinValueType\n@param InLFlags\n@param InHFLags\n@param InLifetimeCondition\n@param InMetaData" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InNewVarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGraphPinType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPinValueType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHFLags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLifetimeCondition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InNewVarName = { "InNewVarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms, InNewVarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InGraphPinType = { "InGraphPinType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms, InGraphPinType), Z_Construct_UScriptStruct_FPEGraphPinType, METADATA_PARAMS(0, nullptr) }; // 1877023195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InPinValueType = { "InPinValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms, InPinValueType), Z_Construct_UScriptStruct_FPEGraphTerminalType, METADATA_PARAMS(0, nullptr) }; // 3058452062
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InLFlags = { "InLFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms, InLFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InHFLags = { "InHFLags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms, InHFLags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InLifetimeCondition = { "InLifetimeCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms, InLifetimeCondition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InMetaData = { "InMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms, InMetaData), Z_Construct_UClass_UPEPropertyMetaData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InNewVarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InGraphPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InPinValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InLFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InHFLags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InLifetimeCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::NewProp_InMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "AddMemberVariableWithMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::PEBlueprintAsset_eventAddMemberVariableWithMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execAddMemberVariableWithMetaData)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InNewVarName);
	P_GET_STRUCT(FPEGraphPinType,Z_Param_InGraphPinType);
	P_GET_STRUCT(FPEGraphTerminalType,Z_Param_InPinValueType);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLFlags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHFLags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLifetimeCondition);
	P_GET_OBJECT(UPEPropertyMetaData,Z_Param_InMetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMemberVariableWithMetaData(Z_Param_InNewVarName,Z_Param_InGraphPinType,Z_Param_InPinValueType,Z_Param_InLFlags,Z_Param_InHFLags,Z_Param_InLifetimeCondition,Z_Param_InMetaData);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function AddMemberVariableWithMetaData

// Begin Class UPEBlueprintAsset Function AddParameter
struct Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics
{
	struct PEBlueprintAsset_eventAddParameter_Parms
	{
		FName InParameterName;
		FPEGraphPinType InGraphPinType;
		FPEGraphTerminalType InPinValueType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGraphPinType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPinValueType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddParameter_Parms, InParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::NewProp_InGraphPinType = { "InGraphPinType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddParameter_Parms, InGraphPinType), Z_Construct_UScriptStruct_FPEGraphPinType, METADATA_PARAMS(0, nullptr) }; // 1877023195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::NewProp_InPinValueType = { "InPinValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddParameter_Parms, InPinValueType), Z_Construct_UScriptStruct_FPEGraphTerminalType, METADATA_PARAMS(0, nullptr) }; // 3058452062
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::NewProp_InGraphPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::NewProp_InPinValueType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "AddParameter", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::PEBlueprintAsset_eventAddParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::PEBlueprintAsset_eventAddParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_AddParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_AddParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execAddParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
	P_GET_STRUCT(FPEGraphPinType,Z_Param_InGraphPinType);
	P_GET_STRUCT(FPEGraphTerminalType,Z_Param_InPinValueType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddParameter(Z_Param_InParameterName,Z_Param_InGraphPinType,Z_Param_InPinValueType);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function AddParameter

// Begin Class UPEBlueprintAsset Function AddParameterWithMetaData
struct Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics
{
	struct PEBlueprintAsset_eventAddParameterWithMetaData_Parms
	{
		FName InParameterName;
		FPEGraphPinType InGraphPinType;
		FPEGraphTerminalType InPinValueType;
		UPEParamMetaData* InMetaData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief add parameter with given meta data\n     * @param InParameterName\n     * @param InGraphPinType\n     * @param InPinValueType\n     * @param InMetaData\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief add parameter with given meta data\n@param InParameterName\n@param InGraphPinType\n@param InPinValueType\n@param InMetaData" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGraphPinType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPinValueType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddParameterWithMetaData_Parms, InParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InGraphPinType = { "InGraphPinType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddParameterWithMetaData_Parms, InGraphPinType), Z_Construct_UScriptStruct_FPEGraphPinType, METADATA_PARAMS(0, nullptr) }; // 1877023195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InPinValueType = { "InPinValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddParameterWithMetaData_Parms, InPinValueType), Z_Construct_UScriptStruct_FPEGraphTerminalType, METADATA_PARAMS(0, nullptr) }; // 3058452062
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InMetaData = { "InMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventAddParameterWithMetaData_Parms, InMetaData), Z_Construct_UClass_UPEParamMetaData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InGraphPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InPinValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::NewProp_InMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "AddParameterWithMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::PEBlueprintAsset_eventAddParameterWithMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::PEBlueprintAsset_eventAddParameterWithMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execAddParameterWithMetaData)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
	P_GET_STRUCT(FPEGraphPinType,Z_Param_InGraphPinType);
	P_GET_STRUCT(FPEGraphTerminalType,Z_Param_InPinValueType);
	P_GET_OBJECT(UPEParamMetaData,Z_Param_InMetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddParameterWithMetaData(Z_Param_InParameterName,Z_Param_InGraphPinType,Z_Param_InPinValueType,Z_Param_InMetaData);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function AddParameterWithMetaData

// Begin Class UPEBlueprintAsset Function ClearParameter
struct Z_Construct_UFunction_UPEBlueprintAsset_ClearParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_ClearParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "ClearParameter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_ClearParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_ClearParameter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_ClearParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_ClearParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execClearParameter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearParameter();
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function ClearParameter

// Begin Class UPEBlueprintAsset Function Existed
struct Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics
{
	struct PEBlueprintAsset_eventExisted_Parms
	{
		FString InName;
		FString InPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventExisted_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventExisted_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PEBlueprintAsset_eventExisted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEBlueprintAsset_eventExisted_Parms), &Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "Existed", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::PEBlueprintAsset_eventExisted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::PEBlueprintAsset_eventExisted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_Existed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_Existed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execExisted)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPEBlueprintAsset::Existed(Z_Param_InName,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function Existed

// Begin Class UPEBlueprintAsset Function LoadOrCreate
struct Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics
{
	struct PEBlueprintAsset_eventLoadOrCreate_Parms
	{
		FString InName;
		FString InPath;
		UClass* ParentClass;
		int32 InSetFlags;
		int32 InClearFlags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSetFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InClearFlags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreate_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreate_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreate_Parms, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InSetFlags = { "InSetFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreate_Parms, InSetFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InClearFlags = { "InClearFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreate_Parms, InClearFlags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PEBlueprintAsset_eventLoadOrCreate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEBlueprintAsset_eventLoadOrCreate_Parms), &Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_ParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InSetFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_InClearFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "LoadOrCreate", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::PEBlueprintAsset_eventLoadOrCreate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::PEBlueprintAsset_eventLoadOrCreate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execLoadOrCreate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_OBJECT(UClass,Z_Param_ParentClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSetFlags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InClearFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadOrCreate(Z_Param_InName,Z_Param_InPath,Z_Param_ParentClass,Z_Param_InSetFlags,Z_Param_InClearFlags);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function LoadOrCreate

// Begin Class UPEBlueprintAsset Function LoadOrCreateWithMetaData
struct Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics
{
	struct PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms
	{
		FString InName;
		FString InPath;
		UClass* InParentClass;
		int32 InSetFlags;
		int32 InClearFlags;
		UPEClassMetaData* InMetaData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief create the class with given meta data\n     * @param InName\n     * @param InPath\n     * @param InParentClass\n     * @param InSetFlags\n     * @param InClearFlags\n     * @param InMetaData\n     * @return\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief create the class with given meta data\n@param InName\n@param InPath\n@param InParentClass\n@param InSetFlags\n@param InClearFlags\n@param InMetaData\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InParentClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSetFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InClearFlags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InParentClass = { "InParentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms, InParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InSetFlags = { "InSetFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms, InSetFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InClearFlags = { "InClearFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms, InClearFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InMetaData = { "InMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms, InMetaData), Z_Construct_UClass_UPEClassMetaData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms), &Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InSetFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InClearFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_InMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "LoadOrCreateWithMetaData", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::PEBlueprintAsset_eventLoadOrCreateWithMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execLoadOrCreateWithMetaData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_OBJECT(UClass,Z_Param_InParentClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSetFlags);
	P_GET_PROPERTY(FIntProperty,Z_Param_InClearFlags);
	P_GET_OBJECT(UPEClassMetaData,Z_Param_InMetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadOrCreateWithMetaData(Z_Param_InName,Z_Param_InPath,Z_Param_InParentClass,Z_Param_InSetFlags,Z_Param_InClearFlags,Z_Param_InMetaData);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function LoadOrCreateWithMetaData

// Begin Class UPEBlueprintAsset Function RemoveNotExistedComponent
struct Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "RemoveNotExistedComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execRemoveNotExistedComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNotExistedComponent();
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function RemoveNotExistedComponent

// Begin Class UPEBlueprintAsset Function RemoveNotExistedFunction
struct Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "RemoveNotExistedFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execRemoveNotExistedFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNotExistedFunction();
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function RemoveNotExistedFunction

// Begin Class UPEBlueprintAsset Function RemoveNotExistedMemberVariable
struct Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedMemberVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "RemoveNotExistedMemberVariable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedMemberVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedMemberVariable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedMemberVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedMemberVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execRemoveNotExistedMemberVariable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNotExistedMemberVariable();
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function RemoveNotExistedMemberVariable

// Begin Class UPEBlueprintAsset Function Save
struct Z_Construct_UFunction_UPEBlueprintAsset_Save_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "Save", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_Save_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_Save_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_Save()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_Save_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Save();
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function Save

// Begin Class UPEBlueprintAsset Function SetupAttachments
struct Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics
{
	struct PEBlueprintAsset_eventSetupAttachments_Parms
	{
		TMap<FName,FName> InAttachments;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttachments_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttachments_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InAttachments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::NewProp_InAttachments_ValueProp = { "InAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::NewProp_InAttachments_Key_KeyProp = { "InAttachments_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::NewProp_InAttachments = { "InAttachments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEBlueprintAsset_eventSetupAttachments_Parms, InAttachments), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::NewProp_InAttachments_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::NewProp_InAttachments_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::NewProp_InAttachments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEBlueprintAsset, nullptr, "SetupAttachments", nullptr, nullptr, Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::PEBlueprintAsset_eventSetupAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::PEBlueprintAsset_eventSetupAttachments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEBlueprintAsset::execSetupAttachments)
{
	P_GET_TMAP(FName,FName,Z_Param_InAttachments);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupAttachments(Z_Param_InAttachments);
	P_NATIVE_END;
}
// End Class UPEBlueprintAsset Function SetupAttachments

// Begin Class UPEBlueprintAsset
void UPEBlueprintAsset::StaticRegisterNativesUPEBlueprintAsset()
{
	UClass* Class = UPEBlueprintAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFunction", &UPEBlueprintAsset::execAddFunction },
		{ "AddFunctionWithMetaData", &UPEBlueprintAsset::execAddFunctionWithMetaData },
		{ "AddMemberVariable", &UPEBlueprintAsset::execAddMemberVariable },
		{ "AddMemberVariableWithMetaData", &UPEBlueprintAsset::execAddMemberVariableWithMetaData },
		{ "AddParameter", &UPEBlueprintAsset::execAddParameter },
		{ "AddParameterWithMetaData", &UPEBlueprintAsset::execAddParameterWithMetaData },
		{ "ClearParameter", &UPEBlueprintAsset::execClearParameter },
		{ "Existed", &UPEBlueprintAsset::execExisted },
		{ "LoadOrCreate", &UPEBlueprintAsset::execLoadOrCreate },
		{ "LoadOrCreateWithMetaData", &UPEBlueprintAsset::execLoadOrCreateWithMetaData },
		{ "RemoveNotExistedComponent", &UPEBlueprintAsset::execRemoveNotExistedComponent },
		{ "RemoveNotExistedFunction", &UPEBlueprintAsset::execRemoveNotExistedFunction },
		{ "RemoveNotExistedMemberVariable", &UPEBlueprintAsset::execRemoveNotExistedMemberVariable },
		{ "Save", &UPEBlueprintAsset::execSave },
		{ "SetupAttachments", &UPEBlueprintAsset::execSetupAttachments },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEBlueprintAsset);
UClass* Z_Construct_UClass_UPEBlueprintAsset_NoRegister()
{
	return UPEBlueprintAsset::StaticClass();
}
struct Z_Construct_UClass_UPEBlueprintAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "PEBlueprintAsset.h" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedSave_MetaData[] = {
		{ "Category", "PEBlueprintAsset" },
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasConstructor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PEBlueprintAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratedClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Package;
	static void NewProp_NeedSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NeedSave;
	static void NewProp_HasConstructor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasConstructor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEBlueprintAsset_AddFunction, "AddFunction" }, // 3996759926
		{ &Z_Construct_UFunction_UPEBlueprintAsset_AddFunctionWithMetaData, "AddFunctionWithMetaData" }, // 1139141153
		{ &Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariable, "AddMemberVariable" }, // 974638255
		{ &Z_Construct_UFunction_UPEBlueprintAsset_AddMemberVariableWithMetaData, "AddMemberVariableWithMetaData" }, // 222153615
		{ &Z_Construct_UFunction_UPEBlueprintAsset_AddParameter, "AddParameter" }, // 2788846589
		{ &Z_Construct_UFunction_UPEBlueprintAsset_AddParameterWithMetaData, "AddParameterWithMetaData" }, // 1827499420
		{ &Z_Construct_UFunction_UPEBlueprintAsset_ClearParameter, "ClearParameter" }, // 1863682087
		{ &Z_Construct_UFunction_UPEBlueprintAsset_Existed, "Existed" }, // 50205276
		{ &Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreate, "LoadOrCreate" }, // 1901230033
		{ &Z_Construct_UFunction_UPEBlueprintAsset_LoadOrCreateWithMetaData, "LoadOrCreateWithMetaData" }, // 2314992088
		{ &Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedComponent, "RemoveNotExistedComponent" }, // 3001216302
		{ &Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedFunction, "RemoveNotExistedFunction" }, // 1920242978
		{ &Z_Construct_UFunction_UPEBlueprintAsset_RemoveNotExistedMemberVariable, "RemoveNotExistedMemberVariable" }, // 1002302336
		{ &Z_Construct_UFunction_UPEBlueprintAsset_Save, "Save" }, // 2316804094
		{ &Z_Construct_UFunction_UPEBlueprintAsset_SetupAttachments, "SetupAttachments" }, // 2873341528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEBlueprintAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_GeneratedClass = { "GeneratedClass", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPEBlueprintAsset, GeneratedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedClass_MetaData), NewProp_GeneratedClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPEBlueprintAsset, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blueprint_MetaData), NewProp_Blueprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPEBlueprintAsset, Package), Z_Construct_UClass_UPackage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Package_MetaData), NewProp_Package_MetaData) };
void Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_NeedSave_SetBit(void* Obj)
{
	((UPEBlueprintAsset*)Obj)->NeedSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_NeedSave = { "NeedSave", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPEBlueprintAsset), &Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_NeedSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedSave_MetaData), NewProp_NeedSave_MetaData) };
void Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_HasConstructor_SetBit(void* Obj)
{
	((UPEBlueprintAsset*)Obj)->HasConstructor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_HasConstructor = { "HasConstructor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPEBlueprintAsset), &Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_HasConstructor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasConstructor_MetaData), NewProp_HasConstructor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPEBlueprintAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_GeneratedClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_Package,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_NeedSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEBlueprintAsset_Statics::NewProp_HasConstructor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEBlueprintAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPEBlueprintAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEBlueprintAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEBlueprintAsset_Statics::ClassParams = {
	&UPEBlueprintAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPEBlueprintAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPEBlueprintAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEBlueprintAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEBlueprintAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEBlueprintAsset()
{
	if (!Z_Registration_Info_UClass_UPEBlueprintAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEBlueprintAsset.OuterSingleton, Z_Construct_UClass_UPEBlueprintAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEBlueprintAsset.OuterSingleton;
}
template<> PUERTSEDITOR_API UClass* StaticClass<UPEBlueprintAsset>()
{
	return UPEBlueprintAsset::StaticClass();
}
UPEBlueprintAsset::UPEBlueprintAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEBlueprintAsset);
UPEBlueprintAsset::~UPEBlueprintAsset() {}
// End Class UPEBlueprintAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPEGraphTerminalType::StaticStruct, Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics::NewStructOps, TEXT("PEGraphTerminalType"), &Z_Registration_Info_UScriptStruct_PEGraphTerminalType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPEGraphTerminalType), 3058452062U) },
		{ FPEGraphPinType::StaticStruct, Z_Construct_UScriptStruct_FPEGraphPinType_Statics::NewStructOps, TEXT("PEGraphPinType"), &Z_Registration_Info_UScriptStruct_PEGraphPinType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPEGraphPinType), 1877023195U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPEBlueprintAsset, UPEBlueprintAsset::StaticClass, TEXT("UPEBlueprintAsset"), &Z_Registration_Info_UClass_UPEBlueprintAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEBlueprintAsset), 3308602936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_1366568666(TEXT("/Script/PuertsEditor"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
