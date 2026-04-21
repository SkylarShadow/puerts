// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PEDirectoryWatcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUERTSEDITOR_PEDirectoryWatcher_generated_h
#error "PEDirectoryWatcher.generated.h already included, missing '#pragma once' in PEDirectoryWatcher.h"
#endif
#define PUERTSEDITOR_PEDirectoryWatcher_generated_h

#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_12_DELEGATE \
PUERTSEDITOR_API void FDirectoryWatcherCallback_DelegateWrapper(const FMulticastScriptDelegate& DirectoryWatcherCallback, TArray<FString> const& Added, TArray<FString> const& Modified, TArray<FString> const& Removed);


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnWatch); \
	DECLARE_FUNCTION(execWatch);


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPEDirectoryWatcher(); \
	friend struct Z_Construct_UClass_UPEDirectoryWatcher_Statics; \
public: \
	DECLARE_CLASS(UPEDirectoryWatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuertsEditor"), NO_API) \
	DECLARE_SERIALIZER(UPEDirectoryWatcher)


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPEDirectoryWatcher(UPEDirectoryWatcher&&); \
	UPEDirectoryWatcher(const UPEDirectoryWatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPEDirectoryWatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPEDirectoryWatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPEDirectoryWatcher)


#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_17_PROLOG
#define FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUERTSEDITOR_API UClass* StaticClass<class UPEDirectoryWatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
