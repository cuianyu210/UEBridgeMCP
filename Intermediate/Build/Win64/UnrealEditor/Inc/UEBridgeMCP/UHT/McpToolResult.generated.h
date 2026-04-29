// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/McpToolResult.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRIDGEMCP_McpToolResult_generated_h
#error "McpToolResult.generated.h already included, missing '#pragma once' in McpToolResult.h"
#endif
#define UEBRIDGEMCP_McpToolResult_generated_h

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMcpToolResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<struct FMcpToolResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolResult_h


#define FOREACH_ENUM_EMCPCONTENTTYPE(op) \
	op(EMcpContentType::Text) \
	op(EMcpContentType::Image) \
	op(EMcpContentType::Resource) 

enum class EMcpContentType : uint8;
template<> struct TIsUEnumClass<EMcpContentType> { enum { Value = true }; };
template<> UEBRIDGEMCP_API UEnum* StaticEnum<EMcpContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
