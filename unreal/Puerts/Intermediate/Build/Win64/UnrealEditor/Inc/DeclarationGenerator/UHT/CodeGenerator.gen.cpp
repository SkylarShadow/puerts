// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeclarationGenerator/Public/CodeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DECLARATIONGENERATOR_API UClass* Z_Construct_UClass_UCodeGenerator();
DECLARATIONGENERATOR_API UClass* Z_Construct_UClass_UCodeGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_DeclarationGenerator();
// End Cross Module References

// Begin Interface UCodeGenerator Function Gen
void ICodeGenerator::Gen() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Gen instead.");
}
static FName NAME_UCodeGenerator_Gen = FName(TEXT("Gen"));
void ICodeGenerator::Execute_Gen(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCodeGenerator::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCodeGenerator_Gen);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, NULL);
	}
	else if (auto I = (const ICodeGenerator*)(O->GetNativeInterfaceAddress(UCodeGenerator::StaticClass())))
	{
		I->Gen_Implementation();
	}
}
struct Z_Construct_UFunction_UCodeGenerator_Gen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CodeGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCodeGenerator_Gen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCodeGenerator, nullptr, "Gen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCodeGenerator_Gen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCodeGenerator_Gen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCodeGenerator_Gen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCodeGenerator_Gen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICodeGenerator::execGen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Gen_Implementation();
	P_NATIVE_END;
}
// End Interface UCodeGenerator Function Gen

// Begin Interface UCodeGenerator
void UCodeGenerator::StaticRegisterNativesUCodeGenerator()
{
	UClass* Class = UCodeGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Gen", &ICodeGenerator::execGen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCodeGenerator);
UClass* Z_Construct_UClass_UCodeGenerator_NoRegister()
{
	return UCodeGenerator::StaticClass();
}
struct Z_Construct_UClass_UCodeGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CodeGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCodeGenerator_Gen, "Gen" }, // 2006557518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICodeGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCodeGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DeclarationGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCodeGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCodeGenerator_Statics::ClassParams = {
	&UCodeGenerator::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCodeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCodeGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCodeGenerator()
{
	if (!Z_Registration_Info_UClass_UCodeGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCodeGenerator.OuterSingleton, Z_Construct_UClass_UCodeGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCodeGenerator.OuterSingleton;
}
template<> DECLARATIONGENERATOR_API UClass* StaticClass<UCodeGenerator>()
{
	return UCodeGenerator::StaticClass();
}
UCodeGenerator::UCodeGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeGenerator);
UCodeGenerator::~UCodeGenerator() {}
// End Interface UCodeGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCodeGenerator, UCodeGenerator::StaticClass, TEXT("UCodeGenerator"), &Z_Registration_Info_UClass_UCodeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCodeGenerator), 2035824182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_2248403004(TEXT("/Script/DeclarationGenerator"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
