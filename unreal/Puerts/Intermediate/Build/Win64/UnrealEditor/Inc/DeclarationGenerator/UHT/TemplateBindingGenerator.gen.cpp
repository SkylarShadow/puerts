// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeclarationGenerator/Public/TemplateBindingGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateBindingGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DECLARATIONGENERATOR_API UClass* Z_Construct_UClass_UCodeGenerator_NoRegister();
DECLARATIONGENERATOR_API UClass* Z_Construct_UClass_UTemplateBindingGenerator();
DECLARATIONGENERATOR_API UClass* Z_Construct_UClass_UTemplateBindingGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_DeclarationGenerator();
// End Cross Module References

// Begin Class UTemplateBindingGenerator Function Gen
static FName NAME_UTemplateBindingGenerator_Gen = FName(TEXT("Gen"));
void UTemplateBindingGenerator::Gen() const
{
	const_cast<UTemplateBindingGenerator*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTemplateBindingGenerator_Gen),NULL);
}
struct Z_Construct_UFunction_UTemplateBindingGenerator_Gen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateBindingGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateBindingGenerator_Gen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateBindingGenerator, nullptr, "Gen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateBindingGenerator_Gen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTemplateBindingGenerator_Gen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTemplateBindingGenerator_Gen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTemplateBindingGenerator_Gen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTemplateBindingGenerator::execGen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Gen_Implementation();
	P_NATIVE_END;
}
// End Class UTemplateBindingGenerator Function Gen

// Begin Class UTemplateBindingGenerator
void UTemplateBindingGenerator::StaticRegisterNativesUTemplateBindingGenerator()
{
	UClass* Class = UTemplateBindingGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Gen", &UTemplateBindingGenerator::execGen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateBindingGenerator);
UClass* Z_Construct_UClass_UTemplateBindingGenerator_NoRegister()
{
	return UTemplateBindingGenerator::StaticClass();
}
struct Z_Construct_UClass_UTemplateBindingGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "TemplateBindingGenerator.h" },
		{ "ModuleRelativePath", "Public/TemplateBindingGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemplateBindingGenerator_Gen, "Gen" }, // 1811300376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateBindingGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTemplateBindingGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DeclarationGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateBindingGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTemplateBindingGenerator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCodeGenerator_NoRegister, (int32)VTABLE_OFFSET(UTemplateBindingGenerator, ICodeGenerator), false },  // 2035824182
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateBindingGenerator_Statics::ClassParams = {
	&UTemplateBindingGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateBindingGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemplateBindingGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemplateBindingGenerator()
{
	if (!Z_Registration_Info_UClass_UTemplateBindingGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateBindingGenerator.OuterSingleton, Z_Construct_UClass_UTemplateBindingGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemplateBindingGenerator.OuterSingleton;
}
template<> DECLARATIONGENERATOR_API UClass* StaticClass<UTemplateBindingGenerator>()
{
	return UTemplateBindingGenerator::StaticClass();
}
UTemplateBindingGenerator::UTemplateBindingGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateBindingGenerator);
UTemplateBindingGenerator::~UTemplateBindingGenerator() {}
// End Class UTemplateBindingGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateBindingGenerator, UTemplateBindingGenerator::StaticClass, TEXT("UTemplateBindingGenerator"), &Z_Registration_Info_UClass_UTemplateBindingGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateBindingGenerator), 3332404033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_2801617773(TEXT("/Script/DeclarationGenerator"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
