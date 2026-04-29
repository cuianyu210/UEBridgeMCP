// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCP/Public/Tools/McpToolResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpToolResult() {}

// Begin Cross Module References
UEBRIDGEMCP_API UEnum* Z_Construct_UEnum_UEBridgeMCP_EMcpContentType();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpToolResult();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCP();
// End Cross Module References

// Begin Enum EMcpContentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMcpContentType;
static UEnum* EMcpContentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMcpContentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMcpContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEBridgeMCP_EMcpContentType, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("EMcpContentType"));
	}
	return Z_Registration_Info_UEnum_EMcpContentType.OuterSingleton;
}
template<> UEBRIDGEMCP_API UEnum* StaticEnum<EMcpContentType>()
{
	return EMcpContentType_StaticEnum();
}
struct Z_Construct_UEnum_UEBridgeMCP_EMcpContentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Content type for tool results\n */" },
		{ "Image.Name", "EMcpContentType::Image" },
		{ "ModuleRelativePath", "Public/Tools/McpToolResult.h" },
		{ "Resource.Name", "EMcpContentType::Resource" },
		{ "Text.Name", "EMcpContentType::Text" },
		{ "ToolTip", "Content type for tool results" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMcpContentType::Text", (int64)EMcpContentType::Text },
		{ "EMcpContentType::Image", (int64)EMcpContentType::Image },
		{ "EMcpContentType::Resource", (int64)EMcpContentType::Resource },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEBridgeMCP_EMcpContentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	"EMcpContentType",
	"EMcpContentType",
	Z_Construct_UEnum_UEBridgeMCP_EMcpContentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UEBridgeMCP_EMcpContentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UEBridgeMCP_EMcpContentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UEBridgeMCP_EMcpContentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UEBridgeMCP_EMcpContentType()
{
	if (!Z_Registration_Info_UEnum_EMcpContentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMcpContentType.InnerSingleton, Z_Construct_UEnum_UEBridgeMCP_EMcpContentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMcpContentType.InnerSingleton;
}
// End Enum EMcpContentType

// Begin ScriptStruct FMcpToolResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpToolResult;
class UScriptStruct* FMcpToolResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpToolResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpToolResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpToolResult, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpToolResult"));
	}
	return Z_Registration_Info_UScriptStruct_McpToolResult.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpToolResult>()
{
	return FMcpToolResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpToolResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool execution result\n */" },
		{ "ModuleRelativePath", "Public/Tools/McpToolResult.h" },
		{ "ToolTip", "Tool execution result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Comment", "/** Whether execution succeeded */" },
		{ "ModuleRelativePath", "Public/Tools/McpToolResult.h" },
		{ "ToolTip", "Whether execution succeeded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsError_MetaData[] = {
		{ "Comment", "/** Is this an error result */" },
		{ "ModuleRelativePath", "Public/Tools/McpToolResult.h" },
		{ "ToolTip", "Is this an error result" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static void NewProp_bIsError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpToolResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FMcpToolResult*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpToolResult), &Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
void Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bIsError_SetBit(void* Obj)
{
	((FMcpToolResult*)Obj)->bIsError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpToolResult), &Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsError_MetaData), NewProp_bIsError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpToolResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewProp_bIsError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpToolResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpToolResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpToolResult",
	Z_Construct_UScriptStruct_FMcpToolResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpToolResult_Statics::PropPointers),
	sizeof(FMcpToolResult),
	alignof(FMcpToolResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpToolResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpToolResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpToolResult()
{
	if (!Z_Registration_Info_UScriptStruct_McpToolResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpToolResult.InnerSingleton, Z_Construct_UScriptStruct_FMcpToolResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpToolResult.InnerSingleton;
}
// End ScriptStruct FMcpToolResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMcpContentType_StaticEnum, TEXT("EMcpContentType"), &Z_Registration_Info_UEnum_EMcpContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2373636034U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMcpToolResult::StaticStruct, Z_Construct_UScriptStruct_FMcpToolResult_Statics::NewStructOps, TEXT("McpToolResult"), &Z_Registration_Info_UScriptStruct_McpToolResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpToolResult), 1636162362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h_1870739923(TEXT("/Script/UEBridgeMCP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
