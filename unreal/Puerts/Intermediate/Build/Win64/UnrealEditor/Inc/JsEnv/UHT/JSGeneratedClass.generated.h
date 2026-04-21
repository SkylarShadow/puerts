// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JSGeneratedClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSENV_JSGeneratedClass_generated_h
#error "JSGeneratedClass.generated.h already included, missing '#pragma once' in JSGeneratedClass.h"
#endif
#define JSENV_JSGeneratedClass_generated_h

#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJSGeneratedClass(); \
	friend struct Z_Construct_UClass_UJSGeneratedClass_Statics; \
public: \
	DECLARE_CLASS(UJSGeneratedClass, UBlueprintGeneratedClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsEnv"), NO_API) \
	DECLARE_SERIALIZER(UJSGeneratedClass)


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSGeneratedClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJSGeneratedClass(UJSGeneratedClass&&); \
	UJSGeneratedClass(const UJSGeneratedClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSGeneratedClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSGeneratedClass) \
	NO_API virtual ~UJSGeneratedClass();


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_29_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_32_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSENV_API UClass* StaticClass<class UJSGeneratedClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_JSGeneratedClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
