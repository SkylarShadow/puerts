// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateBindingGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECLARATIONGENERATOR_TemplateBindingGenerator_generated_h
#error "TemplateBindingGenerator.generated.h already included, missing '#pragma once' in TemplateBindingGenerator.h"
#endif
#define DECLARATIONGENERATOR_TemplateBindingGenerator_generated_h

#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGen);


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_CALLBACK_WRAPPERS
#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateBindingGenerator(); \
	friend struct Z_Construct_UClass_UTemplateBindingGenerator_Statics; \
public: \
	DECLARE_CLASS(UTemplateBindingGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeclarationGenerator"), NO_API) \
	DECLARE_SERIALIZER(UTemplateBindingGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UTemplateBindingGenerator*>(this); }


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateBindingGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTemplateBindingGenerator(UTemplateBindingGenerator&&); \
	UTemplateBindingGenerator(const UTemplateBindingGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateBindingGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateBindingGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateBindingGenerator) \
	NO_API virtual ~UTemplateBindingGenerator();


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_15_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_CALLBACK_WRAPPERS \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECLARATIONGENERATOR_API UClass* StaticClass<class UTemplateBindingGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_TemplateBindingGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
