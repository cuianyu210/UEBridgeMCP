// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocol/McpTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRIDGEMCP_McpTypes_generated_h
#error "McpTypes.generated.h already included, missing '#pragma once' in McpTypes.h"
#endif
#define UEBRIDGEMCP_McpTypes_generated_h

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMcpRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<struct FMcpRequest>();

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMcpResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<struct FMcpResponse>();

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMcpSchemaProperty_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<struct FMcpSchemaProperty>();

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMcpToolDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<struct FMcpToolDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpTypes_h


#define FOREACH_ENUM_EMCPMETHOD(op) \
	op(EMcpMethod::Initialize) \
	op(EMcpMethod::Initialized) \
	op(EMcpMethod::Shutdown) \
	op(EMcpMethod::ToolsList) \
	op(EMcpMethod::ToolsCall) \
	op(EMcpMethod::ResourcesList) \
	op(EMcpMethod::ResourcesRead) \
	op(EMcpMethod::ResourcesTemplatesList) \
	op(EMcpMethod::ResourcesSubscribe) \
	op(EMcpMethod::ResourcesUnsubscribe) \
	op(EMcpMethod::PromptsList) \
	op(EMcpMethod::PromptsGet) \
	op(EMcpMethod::CancelledNotification) \
	op(EMcpMethod::ProgressNotification) \
	op(EMcpMethod::ResourcesListChanged) \
	op(EMcpMethod::ToolsListChanged) \
	op(EMcpMethod::Unknown) 

enum class EMcpMethod : uint8;
template<> struct TIsUEnumClass<EMcpMethod> { enum { Value = true }; };
template<> UEBRIDGEMCP_API UEnum* StaticEnum<EMcpMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
