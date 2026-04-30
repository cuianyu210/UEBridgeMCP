// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCP/Public/Protocol/McpCapabilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpCapabilities() {}

// Begin Cross Module References
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpClientCapabilities();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpClientInfo();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpServerCapabilities();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpServerInfo();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCP();
// End Cross Module References

// Begin ScriptStruct FMcpServerCapabilities
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpServerCapabilities;
class UScriptStruct* FMcpServerCapabilities::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpServerCapabilities.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpServerCapabilities.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpServerCapabilities, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpServerCapabilities"));
	}
	return Z_Registration_Info_UScriptStruct_McpServerCapabilities.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpServerCapabilities>()
{
	return FMcpServerCapabilities::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Server capabilities to declare during initialization\n */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server capabilities to declare during initialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsTools_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server supports tools */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server supports tools" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToolsListChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server supports tool list change notifications */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server supports tool list change notifications" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsToolListing_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server supports tools/list */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server supports tools/list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsToolInvocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server supports tools/call */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server supports tools/call" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredToolCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of tools currently registered */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of tools currently registered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsResources_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server supports resources */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server supports resources" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsPrompts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server supports prompts */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server supports prompts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsLogging_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server supports logging */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server supports logging" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSupportsTools_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsTools;
	static void NewProp_bToolsListChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToolsListChanged;
	static void NewProp_bSupportsToolListing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsToolListing;
	static void NewProp_bSupportsToolInvocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsToolInvocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegisteredToolCount;
	static void NewProp_bSupportsResources_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsResources;
	static void NewProp_bSupportsPrompts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsPrompts;
	static void NewProp_bSupportsLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpServerCapabilities>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsTools_SetBit(void* Obj)
{
	((FMcpServerCapabilities*)Obj)->bSupportsTools = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsTools = { "bSupportsTools", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpServerCapabilities), &Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsTools_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsTools_MetaData), NewProp_bSupportsTools_MetaData) };
void Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bToolsListChanged_SetBit(void* Obj)
{
	((FMcpServerCapabilities*)Obj)->bToolsListChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bToolsListChanged = { "bToolsListChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpServerCapabilities), &Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bToolsListChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToolsListChanged_MetaData), NewProp_bToolsListChanged_MetaData) };
void Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolListing_SetBit(void* Obj)
{
	((FMcpServerCapabilities*)Obj)->bSupportsToolListing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolListing = { "bSupportsToolListing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpServerCapabilities), &Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolListing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsToolListing_MetaData), NewProp_bSupportsToolListing_MetaData) };
void Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolInvocation_SetBit(void* Obj)
{
	((FMcpServerCapabilities*)Obj)->bSupportsToolInvocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolInvocation = { "bSupportsToolInvocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpServerCapabilities), &Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolInvocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsToolInvocation_MetaData), NewProp_bSupportsToolInvocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_RegisteredToolCount = { "RegisteredToolCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpServerCapabilities, RegisteredToolCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredToolCount_MetaData), NewProp_RegisteredToolCount_MetaData) };
void Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsResources_SetBit(void* Obj)
{
	((FMcpServerCapabilities*)Obj)->bSupportsResources = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsResources = { "bSupportsResources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpServerCapabilities), &Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsResources_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsResources_MetaData), NewProp_bSupportsResources_MetaData) };
void Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsPrompts_SetBit(void* Obj)
{
	((FMcpServerCapabilities*)Obj)->bSupportsPrompts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsPrompts = { "bSupportsPrompts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpServerCapabilities), &Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsPrompts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsPrompts_MetaData), NewProp_bSupportsPrompts_MetaData) };
void Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsLogging_SetBit(void* Obj)
{
	((FMcpServerCapabilities*)Obj)->bSupportsLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsLogging = { "bSupportsLogging", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpServerCapabilities), &Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsLogging_MetaData), NewProp_bSupportsLogging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsTools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bToolsListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolListing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsToolInvocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_RegisteredToolCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsResources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsPrompts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewProp_bSupportsLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpServerCapabilities",
	Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::PropPointers),
	sizeof(FMcpServerCapabilities),
	alignof(FMcpServerCapabilities),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpServerCapabilities()
{
	if (!Z_Registration_Info_UScriptStruct_McpServerCapabilities.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpServerCapabilities.InnerSingleton, Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpServerCapabilities.InnerSingleton;
}
// End ScriptStruct FMcpServerCapabilities

// Begin ScriptStruct FMcpClientCapabilities
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpClientCapabilities;
class UScriptStruct* FMcpClientCapabilities::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpClientCapabilities.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpClientCapabilities.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpClientCapabilities, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpClientCapabilities"));
	}
	return Z_Registration_Info_UScriptStruct_McpClientCapabilities.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpClientCapabilities>()
{
	return FMcpClientCapabilities::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Client capabilities received during initialization\n */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client capabilities received during initialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsRoots_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Client supports roots */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client supports roots" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRootsListChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Client supports roots list changed notifications */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client supports roots list changed notifications" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsSampling_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Client supports sampling */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client supports sampling" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSupportsRoots_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsRoots;
	static void NewProp_bRootsListChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRootsListChanged;
	static void NewProp_bSupportsSampling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsSampling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpClientCapabilities>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsRoots_SetBit(void* Obj)
{
	((FMcpClientCapabilities*)Obj)->bSupportsRoots = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsRoots = { "bSupportsRoots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpClientCapabilities), &Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsRoots_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsRoots_MetaData), NewProp_bSupportsRoots_MetaData) };
void Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bRootsListChanged_SetBit(void* Obj)
{
	((FMcpClientCapabilities*)Obj)->bRootsListChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bRootsListChanged = { "bRootsListChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpClientCapabilities), &Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bRootsListChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRootsListChanged_MetaData), NewProp_bRootsListChanged_MetaData) };
void Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsSampling_SetBit(void* Obj)
{
	((FMcpClientCapabilities*)Obj)->bSupportsSampling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsSampling = { "bSupportsSampling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMcpClientCapabilities), &Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsSampling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsSampling_MetaData), NewProp_bSupportsSampling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsRoots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bRootsListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewProp_bSupportsSampling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpClientCapabilities",
	Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::PropPointers),
	sizeof(FMcpClientCapabilities),
	alignof(FMcpClientCapabilities),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpClientCapabilities()
{
	if (!Z_Registration_Info_UScriptStruct_McpClientCapabilities.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpClientCapabilities.InnerSingleton, Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpClientCapabilities.InnerSingleton;
}
// End ScriptStruct FMcpClientCapabilities

// Begin ScriptStruct FMcpServerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpServerInfo;
class UScriptStruct* FMcpServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpServerInfo, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_McpServerInfo.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpServerInfo>()
{
	return FMcpServerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpServerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Server information for initialize response\n */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server information for initialize response" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpServerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpServerInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpServerInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpServerInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpServerInfo, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpServerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpServerInfo_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpServerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpServerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpServerInfo",
	Z_Construct_UScriptStruct_FMcpServerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpServerInfo_Statics::PropPointers),
	sizeof(FMcpServerInfo),
	alignof(FMcpServerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpServerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpServerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpServerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_McpServerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FMcpServerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpServerInfo.InnerSingleton;
}
// End ScriptStruct FMcpServerInfo

// Begin ScriptStruct FMcpClientInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpClientInfo;
class UScriptStruct* FMcpClientInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpClientInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpClientInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpClientInfo, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpClientInfo"));
	}
	return Z_Registration_Info_UScriptStruct_McpClientInfo.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpClientInfo>()
{
	return FMcpClientInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpClientInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Client information received during initialization\n */" },
#endif
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client information received during initialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/McpCapabilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpClientInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpClientInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpClientInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpClientInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMcpClientInfo, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpClientInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpClientInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpClientInfo_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpClientInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpClientInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpClientInfo",
	Z_Construct_UScriptStruct_FMcpClientInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpClientInfo_Statics::PropPointers),
	sizeof(FMcpClientInfo),
	alignof(FMcpClientInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpClientInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpClientInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpClientInfo()
{
	if (!Z_Registration_Info_UScriptStruct_McpClientInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpClientInfo.InnerSingleton, Z_Construct_UScriptStruct_FMcpClientInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpClientInfo.InnerSingleton;
}
// End ScriptStruct FMcpClientInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpCapabilities_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMcpServerCapabilities::StaticStruct, Z_Construct_UScriptStruct_FMcpServerCapabilities_Statics::NewStructOps, TEXT("McpServerCapabilities"), &Z_Registration_Info_UScriptStruct_McpServerCapabilities, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpServerCapabilities), 331860544U) },
		{ FMcpClientCapabilities::StaticStruct, Z_Construct_UScriptStruct_FMcpClientCapabilities_Statics::NewStructOps, TEXT("McpClientCapabilities"), &Z_Registration_Info_UScriptStruct_McpClientCapabilities, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpClientCapabilities), 3902985444U) },
		{ FMcpServerInfo::StaticStruct, Z_Construct_UScriptStruct_FMcpServerInfo_Statics::NewStructOps, TEXT("McpServerInfo"), &Z_Registration_Info_UScriptStruct_McpServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpServerInfo), 3981990133U) },
		{ FMcpClientInfo::StaticStruct, Z_Construct_UScriptStruct_FMcpClientInfo_Statics::NewStructOps, TEXT("McpClientInfo"), &Z_Registration_Info_UScriptStruct_McpClientInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpClientInfo), 3725043081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpCapabilities_h_2226715530(TEXT("/Script/UEBridgeMCP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpCapabilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Protocol_McpCapabilities_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
