// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicDelegateProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSENV_DynamicDelegateProxy_generated_h
#error "DynamicDelegateProxy.generated.h already included, missing '#pragma once' in DynamicDelegateProxy.h"
#endif
#define JSENV_DynamicDelegateProxy_generated_h

#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFire);


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicDelegateProxy(); \
	friend struct Z_Construct_UClass_UDynamicDelegateProxy_Statics; \
public: \
	DECLARE_CLASS(UDynamicDelegateProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsEnv"), NO_API) \
	DECLARE_SERIALIZER(UDynamicDelegateProxy)


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicDelegateProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicDelegateProxy(UDynamicDelegateProxy&&); \
	UDynamicDelegateProxy(const UDynamicDelegateProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicDelegateProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicDelegateProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicDelegateProxy) \
	NO_API virtual ~UDynamicDelegateProxy();


#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_29_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_32_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSENV_API UClass* StaticClass<class UDynamicDelegateProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_JsEnv_Private_DynamicDelegateProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
