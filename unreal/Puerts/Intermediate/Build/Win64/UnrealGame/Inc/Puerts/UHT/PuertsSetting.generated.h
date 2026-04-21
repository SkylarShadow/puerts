// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PuertsSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUERTS_PuertsSetting_generated_h
#error "PuertsSetting.generated.h already included, missing '#pragma once' in PuertsSetting.h"
#endif
#define PUERTS_PuertsSetting_generated_h

#define FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuertsSetting(); \
	friend struct Z_Construct_UClass_UPuertsSetting_Statics; \
public: \
	DECLARE_CLASS(UPuertsSetting, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puerts"), NO_API) \
	DECLARE_SERIALIZER(UPuertsSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Puerts");} \



#define FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuertsSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPuertsSetting(UPuertsSetting&&); \
	UPuertsSetting(const UPuertsSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuertsSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuertsSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuertsSetting) \
	NO_API virtual ~UPuertsSetting();


#define FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_15_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUERTS_API UClass* StaticClass<class UPuertsSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_Puerts_Private_PuertsSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
