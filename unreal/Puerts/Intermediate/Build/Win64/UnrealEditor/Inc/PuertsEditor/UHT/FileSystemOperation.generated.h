// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileSystemOperation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUERTSEDITOR_FileSystemOperation_generated_h
#error "FileSystemOperation.generated.h already included, missing '#pragma once' in FileSystemOperation.h"
#endif
#define PUERTSEDITOR_FileSystemOperation_generated_h

#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFileMD5Hash); \
	DECLARE_FUNCTION(execPuertsNotifyChange); \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execGetDirectories); \
	DECLARE_FUNCTION(execGetCurrentDirectory); \
	DECLARE_FUNCTION(execCreateDirectory); \
	DECLARE_FUNCTION(execDirectoryExists); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execResolvePath); \
	DECLARE_FUNCTION(execWriteFile); \
	DECLARE_FUNCTION(execReadFile);


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileSystemOperation(); \
	friend struct Z_Construct_UClass_UFileSystemOperation_Statics; \
public: \
	DECLARE_CLASS(UFileSystemOperation, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuertsEditor"), NO_API) \
	DECLARE_SERIALIZER(UFileSystemOperation)


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileSystemOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileSystemOperation(UFileSystemOperation&&); \
	UFileSystemOperation(const UFileSystemOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileSystemOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileSystemOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileSystemOperation) \
	NO_API virtual ~UFileSystemOperation();


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_12_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUERTSEDITOR_API UClass* StaticClass<class UFileSystemOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
