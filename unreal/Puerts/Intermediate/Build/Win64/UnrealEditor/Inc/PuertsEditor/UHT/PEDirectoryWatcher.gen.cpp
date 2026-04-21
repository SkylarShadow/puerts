// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuertsEditor/Public/PEDirectoryWatcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePEDirectoryWatcher() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEDirectoryWatcher();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UPEDirectoryWatcher_NoRegister();
PUERTSEDITOR_API UFunction* Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PuertsEditor();
// End Cross Module References

// Begin Delegate FDirectoryWatcherCallback
struct Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics
{
	struct _Script_PuertsEditor_eventDirectoryWatcherCallback_Parms
	{
		TArray<FString> Added;
		TArray<FString> Modified;
		TArray<FString> Removed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PEDirectoryWatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Added_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modified_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Added_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Added;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Modified_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modified;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Removed_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Removed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Added_Inner = { "Added", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Added = { "Added", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PuertsEditor_eventDirectoryWatcherCallback_Parms, Added), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Added_MetaData), NewProp_Added_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Modified_Inner = { "Modified", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Modified = { "Modified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PuertsEditor_eventDirectoryWatcherCallback_Parms, Modified), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modified_MetaData), NewProp_Modified_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Removed_Inner = { "Removed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PuertsEditor_eventDirectoryWatcherCallback_Parms, Removed), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Removed_MetaData), NewProp_Removed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Added_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Added,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Modified_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Modified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Removed_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::NewProp_Removed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PuertsEditor, nullptr, "DirectoryWatcherCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::_Script_PuertsEditor_eventDirectoryWatcherCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::_Script_PuertsEditor_eventDirectoryWatcherCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDirectoryWatcherCallback_DelegateWrapper(const FMulticastScriptDelegate& DirectoryWatcherCallback, TArray<FString> const& Added, TArray<FString> const& Modified, TArray<FString> const& Removed)
{
	struct _Script_PuertsEditor_eventDirectoryWatcherCallback_Parms
	{
		TArray<FString> Added;
		TArray<FString> Modified;
		TArray<FString> Removed;
	};
	_Script_PuertsEditor_eventDirectoryWatcherCallback_Parms Parms;
	Parms.Added=Added;
	Parms.Modified=Modified;
	Parms.Removed=Removed;
	DirectoryWatcherCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDirectoryWatcherCallback

// Begin Class UPEDirectoryWatcher Function UnWatch
struct Z_Construct_UFunction_UPEDirectoryWatcher_UnWatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/PEDirectoryWatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEDirectoryWatcher_UnWatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEDirectoryWatcher, nullptr, "UnWatch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEDirectoryWatcher_UnWatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEDirectoryWatcher_UnWatch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPEDirectoryWatcher_UnWatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEDirectoryWatcher_UnWatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEDirectoryWatcher::execUnWatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnWatch();
	P_NATIVE_END;
}
// End Class UPEDirectoryWatcher Function UnWatch

// Begin Class UPEDirectoryWatcher Function Watch
struct Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics
{
	struct PEDirectoryWatcher_eventWatch_Parms
	{
		FString InDirectory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/PEDirectoryWatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDirectory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::NewProp_InDirectory = { "InDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PEDirectoryWatcher_eventWatch_Parms, InDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirectory_MetaData), NewProp_InDirectory_MetaData) };
void Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PEDirectoryWatcher_eventWatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PEDirectoryWatcher_eventWatch_Parms), &Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::NewProp_InDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPEDirectoryWatcher, nullptr, "Watch", nullptr, nullptr, Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::PEDirectoryWatcher_eventWatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::PEDirectoryWatcher_eventWatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPEDirectoryWatcher_Watch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPEDirectoryWatcher_Watch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPEDirectoryWatcher::execWatch)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InDirectory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Watch(Z_Param_InDirectory);
	P_NATIVE_END;
}
// End Class UPEDirectoryWatcher Function Watch

// Begin Class UPEDirectoryWatcher
void UPEDirectoryWatcher::StaticRegisterNativesUPEDirectoryWatcher()
{
	UClass* Class = UPEDirectoryWatcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UnWatch", &UPEDirectoryWatcher::execUnWatch },
		{ "Watch", &UPEDirectoryWatcher::execWatch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPEDirectoryWatcher);
UClass* Z_Construct_UClass_UPEDirectoryWatcher_NoRegister()
{
	return UPEDirectoryWatcher::StaticClass();
}
struct Z_Construct_UClass_UPEDirectoryWatcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "PEDirectoryWatcher.h" },
		{ "ModuleRelativePath", "Public/PEDirectoryWatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/PEDirectoryWatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPEDirectoryWatcher_UnWatch, "UnWatch" }, // 3516821890
		{ &Z_Construct_UFunction_UPEDirectoryWatcher_Watch, "Watch" }, // 398236880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPEDirectoryWatcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPEDirectoryWatcher_Statics::NewProp_OnChanged = { "OnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPEDirectoryWatcher, OnChanged), Z_Construct_UDelegateFunction_PuertsEditor_DirectoryWatcherCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChanged_MetaData), NewProp_OnChanged_MetaData) }; // 3096482219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPEDirectoryWatcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPEDirectoryWatcher_Statics::NewProp_OnChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEDirectoryWatcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPEDirectoryWatcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPEDirectoryWatcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPEDirectoryWatcher_Statics::ClassParams = {
	&UPEDirectoryWatcher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPEDirectoryWatcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPEDirectoryWatcher_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPEDirectoryWatcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UPEDirectoryWatcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPEDirectoryWatcher()
{
	if (!Z_Registration_Info_UClass_UPEDirectoryWatcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPEDirectoryWatcher.OuterSingleton, Z_Construct_UClass_UPEDirectoryWatcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPEDirectoryWatcher.OuterSingleton;
}
template<> PUERTSEDITOR_API UClass* StaticClass<UPEDirectoryWatcher>()
{
	return UPEDirectoryWatcher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPEDirectoryWatcher);
// End Class UPEDirectoryWatcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPEDirectoryWatcher, UPEDirectoryWatcher::StaticClass, TEXT("UPEDirectoryWatcher"), &Z_Registration_Info_UClass_UPEDirectoryWatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPEDirectoryWatcher), 2912123272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_2594489056(TEXT("/Script/PuertsEditor"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
