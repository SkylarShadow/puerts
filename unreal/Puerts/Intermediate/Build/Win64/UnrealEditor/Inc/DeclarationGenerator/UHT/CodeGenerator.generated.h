// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECLARATIONGENERATOR_CodeGenerator_generated_h
#error "CodeGenerator.generated.h already included, missing '#pragma once' in CodeGenerator.h"
#endif
#define DECLARATIONGENERATOR_CodeGenerator_generated_h

#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Gen_Implementation() const {}; \
	DECLARE_FUNCTION(execGen);


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_CALLBACK_WRAPPERS
#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECLARATIONGENERATOR_API UCodeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCodeGenerator(UCodeGenerator&&); \
	UCodeGenerator(const UCodeGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECLARATIONGENERATOR_API, UCodeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeGenerator) \
	DECLARATIONGENERATOR_API virtual ~UCodeGenerator();


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCodeGenerator(); \
	friend struct Z_Construct_UClass_UCodeGenerator_Statics; \
public: \
	DECLARE_CLASS(UCodeGenerator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeclarationGenerator"), DECLARATIONGENERATOR_API) \
	DECLARE_SERIALIZER(UCodeGenerator)


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICodeGenerator() {} \
public: \
	typedef UCodeGenerator UClassType; \
	typedef ICodeGenerator ThisClass; \
	static void Execute_Gen(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_10_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_CALLBACK_WRAPPERS \
	FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECLARATIONGENERATOR_API UClass* StaticClass<class UCodeGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_DeclarationGenerator_Public_CodeGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
