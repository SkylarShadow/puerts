// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PEBlueprintAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UObject;
class UPEClassMetaData;
class UPEFunctionMetaData;
class UPEParamMetaData;
class UPEPropertyMetaData;
struct FPEGraphPinType;
struct FPEGraphTerminalType;
#ifdef PUERTSEDITOR_PEBlueprintAsset_generated_h
#error "PEBlueprintAsset.generated.h already included, missing '#pragma once' in PEBlueprintAsset.h"
#endif
#define PUERTSEDITOR_PEBlueprintAsset_generated_h

#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPEGraphTerminalType_Statics; \
	PUERTSEDITOR_API static class UScriptStruct* StaticStruct();


template<> PUERTSEDITOR_API UScriptStruct* StaticStruct<struct FPEGraphTerminalType>();

#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPEGraphPinType_Statics; \
	PUERTSEDITOR_API static class UScriptStruct* StaticStruct();


template<> PUERTSEDITOR_API UScriptStruct* StaticStruct<struct FPEGraphPinType>();

#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execRemoveNotExistedComponent); \
	DECLARE_FUNCTION(execRemoveNotExistedMemberVariable); \
	DECLARE_FUNCTION(execAddMemberVariableWithMetaData); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execSetupAttachments); \
	DECLARE_FUNCTION(execRemoveNotExistedFunction); \
	DECLARE_FUNCTION(execAddFunctionWithMetaData); \
	DECLARE_FUNCTION(execAddFunction); \
	DECLARE_FUNCTION(execClearParameter); \
	DECLARE_FUNCTION(execAddParameterWithMetaData); \
	DECLARE_FUNCTION(execAddParameter); \
	DECLARE_FUNCTION(execLoadOrCreateWithMetaData); \
	DECLARE_FUNCTION(execLoadOrCreate); \
	DECLARE_FUNCTION(execExisted);


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPEBlueprintAsset(); \
	friend struct Z_Construct_UClass_UPEBlueprintAsset_Statics; \
public: \
	DECLARE_CLASS(UPEBlueprintAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuertsEditor"), NO_API) \
	DECLARE_SERIALIZER(UPEBlueprintAsset)


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPEBlueprintAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPEBlueprintAsset(UPEBlueprintAsset&&); \
	UPEBlueprintAsset(const UPEBlueprintAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPEBlueprintAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPEBlueprintAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPEBlueprintAsset) \
	NO_API virtual ~UPEBlueprintAsset();


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_61_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUERTSEDITOR_API UClass* StaticClass<class UPEBlueprintAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEBlueprintAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
