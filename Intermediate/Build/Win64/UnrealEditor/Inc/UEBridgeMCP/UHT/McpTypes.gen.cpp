// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCP/Public/Protocol/McpTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpTypes() {}

// Begin Cross Module References
UEBRIDGEMCP_API UEnum* Z_Construct_UEnum_UEBridgeMCP_EMcpMethod();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpRequest();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpResponse();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpSchemaProperty();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpToolDefinition();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCP();
// End Cross Module References

// Begin Enum EMcpMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMcpMethod;
static UEnum* EMcpMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMcpMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMcpMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEBridgeMCP_EMcpMethod, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("EMcpMethod"));
	}
	return Z_Registration_Info_UEnum_EMcpMethod.OuterSingleton;
}
template<> UEBRIDGEMCP_API UEnum* StaticEnum<EMcpMethod>()
{
	return EMcpMethod_StaticEnum();
}
struct Z_Construct_UEnum_UEBridgeMCP_EMcpMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CancelledNotification.Comment", "// Notifications\n" },
		{ "CancelledNotification.Name", "EMcpMethod::CancelledNotification" },
		{ "CancelledNotification.ToolTip", "Notifications" },
		{ "Comment", "/**\n * MCP request methods\n */" },
		{ "Initialize.Comment", "// Lifecycle\n" },
		{ "Initialize.Name", "EMcpMethod::Initialize" },
		{ "Initialize.ToolTip", "Lifecycle" },
		{ "Initialized.Name", "EMcpMethod::Initialized" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ProgressNotification.Name", "EMcpMethod::ProgressNotification" },
		{ "PromptsGet.Name", "EMcpMethod::PromptsGet" },
		{ "PromptsList.Comment", "// Prompts (future)\n" },
		{ "PromptsList.Name", "EMcpMethod::PromptsList" },
		{ "PromptsList.ToolTip", "Prompts (future)" },
		{ "ResourcesList.Comment", "// Resources (future)\n" },
		{ "ResourcesList.Name", "EMcpMethod::ResourcesList" },
		{ "ResourcesList.ToolTip", "Resources (future)" },
		{ "ResourcesListChanged.Name", "EMcpMethod::ResourcesListChanged" },
		{ "ResourcesRead.Name", "EMcpMethod::ResourcesRead" },
		{ "ResourcesSubscribe.Name", "EMcpMethod::ResourcesSubscribe" },
		{ "ResourcesTemplatesList.Name", "EMcpMethod::ResourcesTemplatesList" },
		{ "ResourcesUnsubscribe.Name", "EMcpMethod::ResourcesUnsubscribe" },
		{ "Shutdown.Name", "EMcpMethod::Shutdown" },
		{ "ToolsCall.Name", "EMcpMethod::ToolsCall" },
		{ "ToolsList.Comment", "// Tools\n" },
		{ "ToolsList.Name", "EMcpMethod::ToolsList" },
		{ "ToolsList.ToolTip", "Tools" },
		{ "ToolsListChanged.Name", "EMcpMethod::ToolsListChanged" },
		{ "ToolTip", "MCP request methods" },
		{ "Unknown.Name", "EMcpMethod::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMcpMethod::Initialize", (int64)EMcpMethod::Initialize },
		{ "EMcpMethod::Initialized", (int64)EMcpMethod::Initialized },
		{ "EMcpMethod::Shutdown", (int64)EMcpMethod::Shutdown },
		{ "EMcpMethod::ToolsList", (int64)EMcpMethod::ToolsList },
		{ "EMcpMethod::ToolsCall", (int64)EMcpMethod::ToolsCall },
		{ "EMcpMethod::ResourcesList", (int64)EMcpMethod::ResourcesList },
		{ "EMcpMethod::ResourcesRead", (int64)EMcpMethod::ResourcesRead },
		{ "EMcpMethod::ResourcesTemplatesList", (int64)EMcpMethod::ResourcesTemplatesList },
		{ "EMcpMethod::ResourcesSubscribe", (int64)EMcpMethod::ResourcesSubscribe },
		{ "EMcpMethod::ResourcesUnsubscribe", (int64)EMcpMethod::ResourcesUnsubscribe },
		{ "EMcpMethod::PromptsList", (int64)EMcpMethod::PromptsList },
		{ "EMcpMethod::PromptsGet", (int64)EMcpMethod::PromptsGet },
		{ "EMcpMethod::CancelledNotification", (int64)EMcpMethod::CancelledNotification },
		{ "EMcpMethod::ProgressNotification", (int64)EMcpMethod::ProgressNotification },
		{ "EMcpMethod::ResourcesListChanged", (int64)EMcpMethod::ResourcesListChanged },
		{ "EMcpMethod::ToolsListChanged", (int64)EMcpMethod::ToolsListChanged },
		{ "EMcpMethod::Unknown", (int64)EMcpMethod::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEBridgeMCP_EMcpMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	"EMcpMethod",
	"EMcpMethod",
	Z_Construct_UEnum_UEBridgeMCP_EMcpMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UEBridgeMCP_EMcpMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UEBridgeMCP_EMcpMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UEBridgeMCP_EMcpMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UEBridgeMCP_EMcpMethod()
{
	if (!Z_Registration_Info_UEnum_EMcpMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMcpMethod.InnerSingleton, Z_Construct_UEnum_UEBridgeMCP_EMcpMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMcpMethod.InnerSingleton;
}
// End Enum EMcpMethod

// Begin ScriptStruct FMcpRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpRequest;
class UScriptStruct* FMcpRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpRequest, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpRequest"));
	}
	return Z_Registration_Info_UScriptStruct_McpRequest.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpRequest>()
{
	return FMcpRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * JSON-RPC Request structure\n */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "JSON-RPC Request structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonRpc_MetaData[] = {
		{ "Comment", "/** JSON-RPC version (always \"2.0\") */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "JSON-RPC version (always \"2.0\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Comment", "/** Request ID (string or number, stored as string) */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Request ID (string or number, stored as string)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Comment", "/** Method name */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Method name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonRpc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Method;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpRequest_Statics::NewProp_JsonRpc = { "JsonRpc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpRequest, JsonRpc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonRpc_MetaData), NewProp_JsonRpc_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpRequest_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpRequest, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpRequest_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpRequest, Method), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpRequest_Statics::NewProp_JsonRpc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpRequest_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpRequest_Statics::NewProp_Method,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpRequest",
	Z_Construct_UScriptStruct_FMcpRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpRequest_Statics::PropPointers),
	sizeof(FMcpRequest),
	alignof(FMcpRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpRequest()
{
	if (!Z_Registration_Info_UScriptStruct_McpRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpRequest.InnerSingleton, Z_Construct_UScriptStruct_FMcpRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpRequest.InnerSingleton;
}
// End ScriptStruct FMcpRequest

// Begin ScriptStruct FMcpResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpResponse;
class UScriptStruct* FMcpResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpResponse, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpResponse"));
	}
	return Z_Registration_Info_UScriptStruct_McpResponse.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpResponse>()
{
	return FMcpResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * JSON-RPC Response structure\n */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "JSON-RPC Response structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonRpc_MetaData[] = {
		{ "Comment", "/** JSON-RPC version */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "JSON-RPC version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Comment", "/** Request ID (matches request) */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Request ID (matches request)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonRpc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpResponse_Statics::NewProp_JsonRpc = { "JsonRpc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpResponse, JsonRpc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonRpc_MetaData), NewProp_JsonRpc_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpResponse_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpResponse, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpResponse_Statics::NewProp_JsonRpc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpResponse_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpResponse",
	Z_Construct_UScriptStruct_FMcpResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpResponse_Statics::PropPointers),
	sizeof(FMcpResponse),
	alignof(FMcpResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpResponse()
{
	if (!Z_Registration_Info_UScriptStruct_McpResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpResponse.InnerSingleton, Z_Construct_UScriptStruct_FMcpResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpResponse.InnerSingleton;
}
// End ScriptStruct FMcpResponse

// Begin ScriptStruct FMcpSchemaProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpSchemaProperty;
class UScriptStruct* FMcpSchemaProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpSchemaProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpSchemaProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpSchemaProperty, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpSchemaProperty"));
	}
	return Z_Registration_Info_UScriptStruct_McpSchemaProperty.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpSchemaProperty>()
{
	return FMcpSchemaProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool input schema property\n * Supports nested object schemas and array<object> item schemas.\n */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Tool input schema property\nSupports nested object schemas and array<object> item schemas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequired_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsType_MetaData[] = {
		{ "Comment", "/** Items type for array properties (e.g., \"number\" for array of numbers) */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Items type for array properties (e.g., \"number\" for array of numbers)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdditionalProperties_MetaData[] = {
		{ "Comment", "/** Whether additional properties are allowed (JSON Schema additionalProperties) */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Whether additional properties are allowed (JSON Schema additionalProperties)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Comment", "/** Optional format hint (e.g., \"uri\", \"date-time\") */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Optional format hint (e.g., \"uri\", \"date-time\")" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_bRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequired;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Enum_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemsType;
	static void NewProp_bAdditionalProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditionalProperties;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Format;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpSchemaProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpSchemaProperty, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpSchemaProperty, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bRequired_SetBit(void* Obj)
{
	((FMcpSchemaProperty*)Obj)->bRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bRequired = { "bRequired", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpSchemaProperty), &Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequired_MetaData), NewProp_bRequired_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Enum_Inner = { "Enum", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpSchemaProperty, Enum), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_ItemsType = { "ItemsType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpSchemaProperty, ItemsType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsType_MetaData), NewProp_ItemsType_MetaData) };
void Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bAdditionalProperties_SetBit(void* Obj)
{
	((FMcpSchemaProperty*)Obj)->bAdditionalProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bAdditionalProperties = { "bAdditionalProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpSchemaProperty), &Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bAdditionalProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdditionalProperties_MetaData), NewProp_bAdditionalProperties_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpSchemaProperty, Format), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Enum_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Enum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_ItemsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_bAdditionalProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewProp_Format,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpSchemaProperty",
	Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::PropPointers),
	sizeof(FMcpSchemaProperty),
	alignof(FMcpSchemaProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpSchemaProperty()
{
	if (!Z_Registration_Info_UScriptStruct_McpSchemaProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpSchemaProperty.InnerSingleton, Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpSchemaProperty.InnerSingleton;
}
// End ScriptStruct FMcpSchemaProperty

// Begin ScriptStruct FMcpToolDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpToolDefinition;
class UScriptStruct* FMcpToolDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpToolDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpToolDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpToolDefinition, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpToolDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_McpToolDefinition.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpToolDefinition>()
{
	return FMcpToolDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpToolDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool definition for MCP tools/list response\n */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Tool definition for MCP tools/list response" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Unique tool name */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Unique tool name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Comment", "/** Human-readable description */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Human-readable description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Required_MetaData[] = {
		{ "Comment", "/** Required property names */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Required property names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[] = {
		{ "Comment", "/** Tool kind: query, detail, batch, assert, utility */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Tool kind: query, detail, batch, assert, utility" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceScope_MetaData[] = {
		{ "Comment", "/** Primary resource scope */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Primary resource scope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMutates_MetaData[] = {
		{ "Comment", "/** Whether the tool mutates editor state */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Whether the tool mutates editor state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsBatch_MetaData[] = {
		{ "Comment", "/** Whether the tool supports batched operations */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Whether the tool supports batched operations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDryRun_MetaData[] = {
		{ "Comment", "/** Whether the tool supports dry-run validation */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Whether the tool supports dry-run validation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsCompile_MetaData[] = {
		{ "Comment", "/** Whether the tool can compile modified assets */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Whether the tool can compile modified assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsSave_MetaData[] = {
		{ "Comment", "/** Whether the tool can save modified assets */" },
		{ "ModuleRelativePath", "Public/Protocol/McpTypes.h" },
		{ "ToolTip", "Whether the tool can save modified assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Required_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Required;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Kind;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResourceScope;
	static void NewProp_bMutates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMutates;
	static void NewProp_bSupportsBatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsBatch;
	static void NewProp_bSupportsDryRun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDryRun;
	static void NewProp_bSupportsCompile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsCompile;
	static void NewProp_bSupportsSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsSave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpToolDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpToolDefinition, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpToolDefinition, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Required_Inner = { "Required", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Required = { "Required", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpToolDefinition, Required), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Required_MetaData), NewProp_Required_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpToolDefinition, Kind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kind_MetaData), NewProp_Kind_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_ResourceScope = { "ResourceScope", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpToolDefinition, ResourceScope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceScope_MetaData), NewProp_ResourceScope_MetaData) };
void Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bMutates_SetBit(void* Obj)
{
	((FMcpToolDefinition*)Obj)->bMutates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bMutates = { "bMutates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpToolDefinition), &Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bMutates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMutates_MetaData), NewProp_bMutates_MetaData) };
void Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsBatch_SetBit(void* Obj)
{
	((FMcpToolDefinition*)Obj)->bSupportsBatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsBatch = { "bSupportsBatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpToolDefinition), &Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsBatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsBatch_MetaData), NewProp_bSupportsBatch_MetaData) };
void Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsDryRun_SetBit(void* Obj)
{
	((FMcpToolDefinition*)Obj)->bSupportsDryRun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsDryRun = { "bSupportsDryRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpToolDefinition), &Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsDryRun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsDryRun_MetaData), NewProp_bSupportsDryRun_MetaData) };
void Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsCompile_SetBit(void* Obj)
{
	((FMcpToolDefinition*)Obj)->bSupportsCompile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsCompile = { "bSupportsCompile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpToolDefinition), &Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsCompile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsCompile_MetaData), NewProp_bSupportsCompile_MetaData) };
void Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsSave_SetBit(void* Obj)
{
	((FMcpToolDefinition*)Obj)->bSupportsSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsSave = { "bSupportsSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpToolDefinition), &Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsSave_MetaData), NewProp_bSupportsSave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Required_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Required,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_Kind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_ResourceScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bMutates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsBatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsDryRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsCompile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewProp_bSupportsSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpToolDefinition",
	Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::PropPointers),
	sizeof(FMcpToolDefinition),
	alignof(FMcpToolDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpToolDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_McpToolDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpToolDefinition.InnerSingleton, Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpToolDefinition.InnerSingleton;
}
// End ScriptStruct FMcpToolDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMcpMethod_StaticEnum, TEXT("EMcpMethod"), &Z_Registration_Info_UEnum_EMcpMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1592919465U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMcpRequest::StaticStruct, Z_Construct_UScriptStruct_FMcpRequest_Statics::NewStructOps, TEXT("McpRequest"), &Z_Registration_Info_UScriptStruct_McpRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpRequest), 2716041486U) },
		{ FMcpResponse::StaticStruct, Z_Construct_UScriptStruct_FMcpResponse_Statics::NewStructOps, TEXT("McpResponse"), &Z_Registration_Info_UScriptStruct_McpResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpResponse), 3582657287U) },
		{ FMcpSchemaProperty::StaticStruct, Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics::NewStructOps, TEXT("McpSchemaProperty"), &Z_Registration_Info_UScriptStruct_McpSchemaProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpSchemaProperty), 3595016719U) },
		{ FMcpToolDefinition::StaticStruct, Z_Construct_UScriptStruct_FMcpToolDefinition_Statics::NewStructOps, TEXT("McpToolDefinition"), &Z_Registration_Info_UScriptStruct_McpToolDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpToolDefinition), 1434484130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_13227084(TEXT("/Script/UEBridgeMCP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
