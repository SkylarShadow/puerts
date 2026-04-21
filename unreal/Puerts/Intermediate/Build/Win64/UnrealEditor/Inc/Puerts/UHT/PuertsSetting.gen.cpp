// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puerts/Private/PuertsSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertsSetting() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PUERTS_API UClass* Z_Construct_UClass_UPuertsSetting();
PUERTS_API UClass* Z_Construct_UClass_UPuertsSetting_NoRegister();
UPackage* Z_Construct_UPackage__Script_Puerts();
// End Cross Module References

// Begin Class UPuertsSetting
void UPuertsSetting::StaticRegisterNativesUPuertsSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuertsSetting);
UClass* Z_Construct_UClass_UPuertsSetting_NoRegister()
{
	return UPuertsSetting::StaticClass();
}
struct Z_Construct_UClass_UPuertsSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Puerts" },
		{ "IncludePath", "PuertsSetting.h" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPath_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "JavaScript" },
		{ "DisplayName", "JavaScript Source Root" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "JavaScript Source Code Root Path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoModeEnable_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "FALSE" },
		{ "DisplayName", "Enable" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnable_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "FALSE" },
		{ "DisplayName", "Debug Enable" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPort_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "8080" },
		{ "DisplayName", "Debug Port" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitDebugger_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "FALSE" },
		{ "DisplayName", "Wait Debugger" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitDebuggerTimeout_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "0" },
		{ "DisplayName", "Wait Debugger Timeout" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfJsEnv_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "1" },
		{ "DisplayName", "Number of JavaScript Env" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WatchDisable_MetaData[] = {
		{ "Category", "Default JavaScript Environment" },
		{ "defaultValue", "FALSE" },
		{ "DisplayName", "Disable TypeScript Watch" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreClassListOnDTS_MetaData[] = {
		{ "Category", "Declaration Generator" },
		{ "DisplayName", "D.ts Ignore Class Name List" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreStructListOnDTS_MetaData[] = {
		{ "Category", "Declaration Generator" },
		{ "DisplayName", "D.ts Ignore Struct Name List" },
		{ "ModuleRelativePath", "Private/PuertsSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RootPath;
	static void NewProp_AutoModeEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoModeEnable;
	static void NewProp_DebugEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugEnable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugPort;
	static void NewProp_WaitDebugger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WaitDebugger;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaitDebuggerTimeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfJsEnv;
	static void NewProp_WatchDisable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WatchDisable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoreClassListOnDTS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreClassListOnDTS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoreStructListOnDTS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreStructListOnDTS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuertsSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_RootPath = { "RootPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuertsSetting, RootPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPath_MetaData), NewProp_RootPath_MetaData) };
void Z_Construct_UClass_UPuertsSetting_Statics::NewProp_AutoModeEnable_SetBit(void* Obj)
{
	((UPuertsSetting*)Obj)->AutoModeEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_AutoModeEnable = { "AutoModeEnable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuertsSetting), &Z_Construct_UClass_UPuertsSetting_Statics::NewProp_AutoModeEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoModeEnable_MetaData), NewProp_AutoModeEnable_MetaData) };
void Z_Construct_UClass_UPuertsSetting_Statics::NewProp_DebugEnable_SetBit(void* Obj)
{
	((UPuertsSetting*)Obj)->DebugEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_DebugEnable = { "DebugEnable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuertsSetting), &Z_Construct_UClass_UPuertsSetting_Statics::NewProp_DebugEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnable_MetaData), NewProp_DebugEnable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_DebugPort = { "DebugPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuertsSetting, DebugPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPort_MetaData), NewProp_DebugPort_MetaData) };
void Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WaitDebugger_SetBit(void* Obj)
{
	((UPuertsSetting*)Obj)->WaitDebugger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WaitDebugger = { "WaitDebugger", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuertsSetting), &Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WaitDebugger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitDebugger_MetaData), NewProp_WaitDebugger_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WaitDebuggerTimeout = { "WaitDebuggerTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuertsSetting, WaitDebuggerTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitDebuggerTimeout_MetaData), NewProp_WaitDebuggerTimeout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_NumberOfJsEnv = { "NumberOfJsEnv", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuertsSetting, NumberOfJsEnv), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfJsEnv_MetaData), NewProp_NumberOfJsEnv_MetaData) };
void Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WatchDisable_SetBit(void* Obj)
{
	((UPuertsSetting*)Obj)->WatchDisable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WatchDisable = { "WatchDisable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuertsSetting), &Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WatchDisable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WatchDisable_MetaData), NewProp_WatchDisable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreClassListOnDTS_Inner = { "IgnoreClassListOnDTS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreClassListOnDTS = { "IgnoreClassListOnDTS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuertsSetting, IgnoreClassListOnDTS), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreClassListOnDTS_MetaData), NewProp_IgnoreClassListOnDTS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreStructListOnDTS_Inner = { "IgnoreStructListOnDTS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreStructListOnDTS = { "IgnoreStructListOnDTS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuertsSetting, IgnoreStructListOnDTS), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreStructListOnDTS_MetaData), NewProp_IgnoreStructListOnDTS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuertsSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_RootPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_AutoModeEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_DebugEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_DebugPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WaitDebugger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WaitDebuggerTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_NumberOfJsEnv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_WatchDisable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreClassListOnDTS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreClassListOnDTS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreStructListOnDTS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuertsSetting_Statics::NewProp_IgnoreStructListOnDTS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuertsSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPuertsSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Puerts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuertsSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuertsSetting_Statics::ClassParams = {
	&UPuertsSetting::StaticClass,
	"Puerts",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPuertsSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPuertsSetting_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuertsSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UPuertsSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPuertsSetting()
{
	if (!Z_Registration_Info_UClass_UPuertsSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPuertsSetting.OuterSingleton, Z_Construct_UClass_UPuertsSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPuertsSetting.OuterSingleton;
}
template<> PUERTS_API UClass* StaticClass<UPuertsSetting>()
{
	return UPuertsSetting::StaticClass();
}
UPuertsSetting::UPuertsSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPuertsSetting);
UPuertsSetting::~UPuertsSetting() {}
// End Class UPuertsSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPuertsSetting, UPuertsSetting::StaticClass, TEXT("UPuertsSetting"), &Z_Registration_Info_UClass_UPuertsSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuertsSetting), 1240657576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_597872099(TEXT("/Script/Puerts"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
