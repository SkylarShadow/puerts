// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionMethods.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSENV_ExtensionMethods_generated_h
#error "ExtensionMethods.generated.h already included, missing '#pragma once' in ExtensionMethods.h"
#endif
#define JSENV_ExtensionMethods_generated_h

#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExtensionMethods(); \
	friend struct Z_Construct_UClass_UExtensionMethods_Statics; \
public: \
	DECLARE_CLASS(UExtensionMethods, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsEnv"), NO_API) \
	DECLARE_SERIALIZER(UExtensionMethods)


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExtensionMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExtensionMethods(UExtensionMethods&&); \
	UExtensionMethods(const UExtensionMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExtensionMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExtensionMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExtensionMethods) \
	NO_API virtual ~UExtensionMethods();


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_18_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_21_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSENV_API UClass* StaticClass<class UExtensionMethods>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_JsEnv_Public_ExtensionMethods_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
