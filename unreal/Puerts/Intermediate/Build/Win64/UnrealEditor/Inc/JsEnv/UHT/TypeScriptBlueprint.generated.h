// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TypeScriptBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSENV_TypeScriptBlueprint_generated_h
#error "TypeScriptBlueprint.generated.h already included, missing '#pragma once' in TypeScriptBlueprint.h"
#endif
#define JSENV_TypeScriptBlueprint_generated_h

#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptBlueprint_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypeScriptBlueprint(); \
	friend struct Z_Construct_UClass_UTypeScriptBlueprint_Statics; \
public: \
	DECLARE_CLASS(UTypeScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JsEnv"), NO_API) \
	DECLARE_SERIALIZER(UTypeScriptBlueprint)


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptBlueprint_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypeScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypeScriptBlueprint(UTypeScriptBlueprint&&); \
	UTypeScriptBlueprint(const UTypeScriptBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypeScriptBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypeScriptBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypeScriptBlueprint) \
	NO_API virtual ~UTypeScriptBlueprint();


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptBlueprint_h_18_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptBlueprint_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptBlueprint_h_21_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptBlueprint_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSENV_API UClass* StaticClass<class UTypeScriptBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_TypeScriptBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
