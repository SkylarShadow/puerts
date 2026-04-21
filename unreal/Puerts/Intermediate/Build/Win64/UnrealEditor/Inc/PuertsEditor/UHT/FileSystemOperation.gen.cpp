// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuertsEditor/Public/FileSystemOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSystemOperation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UFileSystemOperation();
PUERTSEDITOR_API UClass* Z_Construct_UClass_UFileSystemOperation_NoRegister();
UPackage* Z_Construct_UPackage__Script_PuertsEditor();
// End Cross Module References

// Begin Class UFileSystemOperation Function CreateDirectory
struct Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics
{
	struct FileSystemOperation_eventCreateDirectory_Parms
	{
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventCreateDirectory_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "CreateDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::FileSystemOperation_eventCreateDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::FileSystemOperation_eventCreateDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_CreateDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_CreateDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execCreateDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSystemOperation::CreateDirectory(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function CreateDirectory

// Begin Class UFileSystemOperation Function DirectoryExists
struct Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics
{
	struct FileSystemOperation_eventDirectoryExists_Parms
	{
		FString Path;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventDirectoryExists_Parms, Path), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSystemOperation_eventDirectoryExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSystemOperation_eventDirectoryExists_Parms), &Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "DirectoryExists", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::FileSystemOperation_eventDirectoryExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::FileSystemOperation_eventDirectoryExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_DirectoryExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_DirectoryExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execDirectoryExists)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSystemOperation::DirectoryExists(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function DirectoryExists

// Begin Class UFileSystemOperation Function FileExists
struct Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics
{
	struct FileSystemOperation_eventFileExists_Parms
	{
		FString Path;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventFileExists_Parms, Path), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSystemOperation_eventFileExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSystemOperation_eventFileExists_Parms), &Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "FileExists", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::FileSystemOperation_eventFileExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::FileSystemOperation_eventFileExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_FileExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_FileExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execFileExists)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSystemOperation::FileExists(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function FileExists

// Begin Class UFileSystemOperation Function FileMD5Hash
struct Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics
{
	struct FileSystemOperation_eventFileMD5Hash_Parms
	{
		FString Path;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventFileMD5Hash_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventFileMD5Hash_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "FileMD5Hash", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::FileSystemOperation_eventFileMD5Hash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::FileSystemOperation_eventFileMD5Hash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execFileMD5Hash)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFileSystemOperation::FileMD5Hash(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function FileMD5Hash

// Begin Class UFileSystemOperation Function GetCurrentDirectory
struct Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics
{
	struct FileSystemOperation_eventGetCurrentDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventGetCurrentDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "GetCurrentDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::FileSystemOperation_eventGetCurrentDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::FileSystemOperation_eventGetCurrentDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execGetCurrentDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFileSystemOperation::GetCurrentDirectory();
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function GetCurrentDirectory

// Begin Class UFileSystemOperation Function GetDirectories
struct Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics
{
	struct FileSystemOperation_eventGetDirectories_Parms
	{
		FString Path;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventGetDirectories_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventGetDirectories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "GetDirectories", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::FileSystemOperation_eventGetDirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::FileSystemOperation_eventGetDirectories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_GetDirectories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_GetDirectories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execGetDirectories)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UFileSystemOperation::GetDirectories(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function GetDirectories

// Begin Class UFileSystemOperation Function GetFiles
struct Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics
{
	struct FileSystemOperation_eventGetFiles_Parms
	{
		FString Path;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventGetFiles_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventGetFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "GetFiles", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::FileSystemOperation_eventGetFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::FileSystemOperation_eventGetFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_GetFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_GetFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execGetFiles)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UFileSystemOperation::GetFiles(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function GetFiles

// Begin Class UFileSystemOperation Function PuertsNotifyChange
struct Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics
{
	struct FileSystemOperation_eventPuertsNotifyChange_Parms
	{
		FString Path;
		FString Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventPuertsNotifyChange_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventPuertsNotifyChange_Parms, Source), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "PuertsNotifyChange", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::FileSystemOperation_eventPuertsNotifyChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::FileSystemOperation_eventPuertsNotifyChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execPuertsNotifyChange)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSystemOperation::PuertsNotifyChange(Z_Param_Path,Z_Param_Source);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function PuertsNotifyChange

// Begin Class UFileSystemOperation Function ReadFile
struct Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics
{
	struct FileSystemOperation_eventReadFile_Parms
	{
		FString Path;
		FString Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventReadFile_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventReadFile_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSystemOperation_eventReadFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSystemOperation_eventReadFile_Parms), &Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "ReadFile", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::FileSystemOperation_eventReadFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::FileSystemOperation_eventReadFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_ReadFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_ReadFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execReadFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSystemOperation::ReadFile(Z_Param_Path,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function ReadFile

// Begin Class UFileSystemOperation Function ResolvePath
struct Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics
{
	struct FileSystemOperation_eventResolvePath_Parms
	{
		FString Path;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventResolvePath_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventResolvePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "ResolvePath", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::FileSystemOperation_eventResolvePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::FileSystemOperation_eventResolvePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_ResolvePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_ResolvePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execResolvePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFileSystemOperation::ResolvePath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function ResolvePath

// Begin Class UFileSystemOperation Function WriteFile
struct Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics
{
	struct FileSystemOperation_eventWriteFile_Parms
	{
		FString Path;
		FString Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventWriteFile_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSystemOperation_eventWriteFile_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSystemOperation, nullptr, "WriteFile", nullptr, nullptr, Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::FileSystemOperation_eventWriteFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::FileSystemOperation_eventWriteFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSystemOperation_WriteFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSystemOperation_WriteFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSystemOperation::execWriteFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSystemOperation::WriteFile(Z_Param_Path,Z_Param_Data);
	P_NATIVE_END;
}
// End Class UFileSystemOperation Function WriteFile

// Begin Class UFileSystemOperation
void UFileSystemOperation::StaticRegisterNativesUFileSystemOperation()
{
	UClass* Class = UFileSystemOperation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDirectory", &UFileSystemOperation::execCreateDirectory },
		{ "DirectoryExists", &UFileSystemOperation::execDirectoryExists },
		{ "FileExists", &UFileSystemOperation::execFileExists },
		{ "FileMD5Hash", &UFileSystemOperation::execFileMD5Hash },
		{ "GetCurrentDirectory", &UFileSystemOperation::execGetCurrentDirectory },
		{ "GetDirectories", &UFileSystemOperation::execGetDirectories },
		{ "GetFiles", &UFileSystemOperation::execGetFiles },
		{ "PuertsNotifyChange", &UFileSystemOperation::execPuertsNotifyChange },
		{ "ReadFile", &UFileSystemOperation::execReadFile },
		{ "ResolvePath", &UFileSystemOperation::execResolvePath },
		{ "WriteFile", &UFileSystemOperation::execWriteFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileSystemOperation);
UClass* Z_Construct_UClass_UFileSystemOperation_NoRegister()
{
	return UFileSystemOperation::StaticClass();
}
struct Z_Construct_UClass_UFileSystemOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "FileSystemOperation.h" },
		{ "ModuleRelativePath", "Public/FileSystemOperation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileSystemOperation_CreateDirectory, "CreateDirectory" }, // 2009387340
		{ &Z_Construct_UFunction_UFileSystemOperation_DirectoryExists, "DirectoryExists" }, // 1268350718
		{ &Z_Construct_UFunction_UFileSystemOperation_FileExists, "FileExists" }, // 2046660593
		{ &Z_Construct_UFunction_UFileSystemOperation_FileMD5Hash, "FileMD5Hash" }, // 2076815780
		{ &Z_Construct_UFunction_UFileSystemOperation_GetCurrentDirectory, "GetCurrentDirectory" }, // 1711341692
		{ &Z_Construct_UFunction_UFileSystemOperation_GetDirectories, "GetDirectories" }, // 2440731686
		{ &Z_Construct_UFunction_UFileSystemOperation_GetFiles, "GetFiles" }, // 198944618
		{ &Z_Construct_UFunction_UFileSystemOperation_PuertsNotifyChange, "PuertsNotifyChange" }, // 3987270246
		{ &Z_Construct_UFunction_UFileSystemOperation_ReadFile, "ReadFile" }, // 3126681462
		{ &Z_Construct_UFunction_UFileSystemOperation_ResolvePath, "ResolvePath" }, // 3209727686
		{ &Z_Construct_UFunction_UFileSystemOperation_WriteFile, "WriteFile" }, // 3450552380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileSystemOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFileSystemOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PuertsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSystemOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileSystemOperation_Statics::ClassParams = {
	&UFileSystemOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSystemOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileSystemOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileSystemOperation()
{
	if (!Z_Registration_Info_UClass_UFileSystemOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileSystemOperation.OuterSingleton, Z_Construct_UClass_UFileSystemOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileSystemOperation.OuterSingleton;
}
template<> PUERTSEDITOR_API UClass* StaticClass<UFileSystemOperation>()
{
	return UFileSystemOperation::StaticClass();
}
UFileSystemOperation::UFileSystemOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileSystemOperation);
UFileSystemOperation::~UFileSystemOperation() {}
// End Class UFileSystemOperation

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileSystemOperation, UFileSystemOperation::StaticClass, TEXT("UFileSystemOperation"), &Z_Registration_Info_UClass_UFileSystemOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileSystemOperation), 3461580325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_1620973594(TEXT("/Script/PuertsEditor"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_Puerts_Source_PuertsEditor_Public_FileSystemOperation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
