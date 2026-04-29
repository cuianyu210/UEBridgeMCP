// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Subsystem/McpEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpEditorSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UMcpEditorSubsystem();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UMcpEditorSubsystem_NoRegister();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UMcpServerSettings();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UMcpServerSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UMcpServerSettings
void UMcpServerSettings::StaticRegisterNativesUMcpServerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMcpServerSettings);
UClass* Z_Construct_UClass_UMcpServerSettings_NoRegister()
{
	return UMcpServerSettings::StaticClass();
}
struct Z_Construct_UClass_UMcpServerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for MCP Server\n */" },
		{ "IncludePath", "Subsystem/McpEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Settings for MCP Server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[] = {
		{ "Category", "Server" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "1" },
		{ "Comment", "/** HTTP server port for MCP connections */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "HTTP server port for MCP connections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartServer_MetaData[] = {
		{ "Category", "Server" },
		{ "Comment", "/** Auto-start the MCP server when the editor opens */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Auto-start the MCP server when the editor opens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindAddress_MetaData[] = {
		{ "Category", "Server" },
		{ "Comment", "/** Bind address for HTTP server (127.0.0.1 for localhost only) */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Bind address for HTTP server (127.0.0.1 for localhost only)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static void NewProp_bAutoStartServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartServer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BindAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMcpServerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMcpServerSettings, ServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPort_MetaData), NewProp_ServerPort_MetaData) };
void Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_bAutoStartServer_SetBit(void* Obj)
{
	((UMcpServerSettings*)Obj)->bAutoStartServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_bAutoStartServer = { "bAutoStartServer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMcpServerSettings), &Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_bAutoStartServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartServer_MetaData), NewProp_bAutoStartServer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_BindAddress = { "BindAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMcpServerSettings, BindAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindAddress_MetaData), NewProp_BindAddress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMcpServerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_bAutoStartServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpServerSettings_Statics::NewProp_BindAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpServerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMcpServerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpServerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMcpServerSettings_Statics::ClassParams = {
	&UMcpServerSettings::StaticClass,
	"UEBridgeMCP",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMcpServerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMcpServerSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpServerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMcpServerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMcpServerSettings()
{
	if (!Z_Registration_Info_UClass_UMcpServerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMcpServerSettings.OuterSingleton, Z_Construct_UClass_UMcpServerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMcpServerSettings.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UMcpServerSettings>()
{
	return UMcpServerSettings::StaticClass();
}
UMcpServerSettings::UMcpServerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMcpServerSettings);
UMcpServerSettings::~UMcpServerSettings() {}
// End Class UMcpServerSettings

// Begin Class UMcpEditorSubsystem Function GetActualPort
struct Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics
{
	struct McpEditorSubsystem_eventGetActualPort_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MCP" },
		{ "Comment", "/** Get the port the server is bound to (0 if not running) */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Get the port the server is bound to (0 if not running)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(McpEditorSubsystem_eventGetActualPort_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMcpEditorSubsystem, nullptr, "GetActualPort", nullptr, nullptr, Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::McpEditorSubsystem_eventGetActualPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::McpEditorSubsystem_eventGetActualPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMcpEditorSubsystem::execGetActualPort)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActualPort();
	P_NATIVE_END;
}
// End Class UMcpEditorSubsystem Function GetActualPort

// Begin Class UMcpEditorSubsystem Function GetServerStatus
struct Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics
{
	struct McpEditorSubsystem_eventGetServerStatus_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MCP" },
		{ "Comment", "/** Get server status information */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Get server status information" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(McpEditorSubsystem_eventGetServerStatus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMcpEditorSubsystem, nullptr, "GetServerStatus", nullptr, nullptr, Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::McpEditorSubsystem_eventGetServerStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::McpEditorSubsystem_eventGetServerStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMcpEditorSubsystem::execGetServerStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerStatus();
	P_NATIVE_END;
}
// End Class UMcpEditorSubsystem Function GetServerStatus

// Begin Class UMcpEditorSubsystem Function GetSettings
struct Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics
{
	struct McpEditorSubsystem_eventGetSettings_Parms
	{
		UMcpServerSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MCP" },
		{ "Comment", "/** Get settings */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Get settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(McpEditorSubsystem_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UMcpServerSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMcpEditorSubsystem, nullptr, "GetSettings", nullptr, nullptr, Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::McpEditorSubsystem_eventGetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::McpEditorSubsystem_eventGetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMcpEditorSubsystem::execGetSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMcpServerSettings**)Z_Param__Result=P_THIS->GetSettings();
	P_NATIVE_END;
}
// End Class UMcpEditorSubsystem Function GetSettings

// Begin Class UMcpEditorSubsystem Function IsServerRunning
struct Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics
{
	struct McpEditorSubsystem_eventIsServerRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MCP" },
		{ "Comment", "/** Check if server is running */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Check if server is running" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((McpEditorSubsystem_eventIsServerRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(McpEditorSubsystem_eventIsServerRunning_Parms), &Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMcpEditorSubsystem, nullptr, "IsServerRunning", nullptr, nullptr, Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::McpEditorSubsystem_eventIsServerRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::McpEditorSubsystem_eventIsServerRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMcpEditorSubsystem::execIsServerRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsServerRunning();
	P_NATIVE_END;
}
// End Class UMcpEditorSubsystem Function IsServerRunning

// Begin Class UMcpEditorSubsystem Function RestartServer
struct Z_Construct_UFunction_UMcpEditorSubsystem_RestartServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MCP" },
		{ "Comment", "/** Restart the server */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Restart the server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMcpEditorSubsystem_RestartServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMcpEditorSubsystem, nullptr, "RestartServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_RestartServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMcpEditorSubsystem_RestartServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMcpEditorSubsystem_RestartServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMcpEditorSubsystem_RestartServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMcpEditorSubsystem::execRestartServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartServer();
	P_NATIVE_END;
}
// End Class UMcpEditorSubsystem Function RestartServer

// Begin Class UMcpEditorSubsystem Function StartServer
struct Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics
{
	struct McpEditorSubsystem_eventStartServer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MCP" },
		{ "Comment", "/** Start the MCP server */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Start the MCP server" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((McpEditorSubsystem_eventStartServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(McpEditorSubsystem_eventStartServer_Parms), &Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMcpEditorSubsystem, nullptr, "StartServer", nullptr, nullptr, Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::McpEditorSubsystem_eventStartServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::McpEditorSubsystem_eventStartServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMcpEditorSubsystem_StartServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMcpEditorSubsystem_StartServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMcpEditorSubsystem::execStartServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartServer();
	P_NATIVE_END;
}
// End Class UMcpEditorSubsystem Function StartServer

// Begin Class UMcpEditorSubsystem Function StopServer
struct Z_Construct_UFunction_UMcpEditorSubsystem_StopServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MCP" },
		{ "Comment", "/** Stop the MCP server */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Stop the MCP server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMcpEditorSubsystem_StopServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMcpEditorSubsystem, nullptr, "StopServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMcpEditorSubsystem_StopServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMcpEditorSubsystem_StopServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMcpEditorSubsystem_StopServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMcpEditorSubsystem_StopServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMcpEditorSubsystem::execStopServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopServer();
	P_NATIVE_END;
}
// End Class UMcpEditorSubsystem Function StopServer

// Begin Class UMcpEditorSubsystem
void UMcpEditorSubsystem::StaticRegisterNativesUMcpEditorSubsystem()
{
	UClass* Class = UMcpEditorSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActualPort", &UMcpEditorSubsystem::execGetActualPort },
		{ "GetServerStatus", &UMcpEditorSubsystem::execGetServerStatus },
		{ "GetSettings", &UMcpEditorSubsystem::execGetSettings },
		{ "IsServerRunning", &UMcpEditorSubsystem::execIsServerRunning },
		{ "RestartServer", &UMcpEditorSubsystem::execRestartServer },
		{ "StartServer", &UMcpEditorSubsystem::execStartServer },
		{ "StopServer", &UMcpEditorSubsystem::execStopServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMcpEditorSubsystem);
UClass* Z_Construct_UClass_UMcpEditorSubsystem_NoRegister()
{
	return UMcpEditorSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMcpEditorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor subsystem managing MCP server lifecycle\n */" },
		{ "IncludePath", "Subsystem/McpEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Editor subsystem managing MCP server lifecycle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Settings */" },
		{ "ModuleRelativePath", "Public/Subsystem/McpEditorSubsystem.h" },
		{ "ToolTip", "Settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMcpEditorSubsystem_GetActualPort, "GetActualPort" }, // 1731699182
		{ &Z_Construct_UFunction_UMcpEditorSubsystem_GetServerStatus, "GetServerStatus" }, // 2224432794
		{ &Z_Construct_UFunction_UMcpEditorSubsystem_GetSettings, "GetSettings" }, // 1390261183
		{ &Z_Construct_UFunction_UMcpEditorSubsystem_IsServerRunning, "IsServerRunning" }, // 944229910
		{ &Z_Construct_UFunction_UMcpEditorSubsystem_RestartServer, "RestartServer" }, // 2140431775
		{ &Z_Construct_UFunction_UMcpEditorSubsystem_StartServer, "StartServer" }, // 2175419700
		{ &Z_Construct_UFunction_UMcpEditorSubsystem_StopServer, "StopServer" }, // 4181136702
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMcpEditorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMcpEditorSubsystem_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMcpEditorSubsystem, Settings), Z_Construct_UClass_UMcpServerSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMcpEditorSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpEditorSubsystem_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpEditorSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMcpEditorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpEditorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMcpEditorSubsystem_Statics::ClassParams = {
	&UMcpEditorSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMcpEditorSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMcpEditorSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMcpEditorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMcpEditorSubsystem()
{
	if (!Z_Registration_Info_UClass_UMcpEditorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMcpEditorSubsystem.OuterSingleton, Z_Construct_UClass_UMcpEditorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMcpEditorSubsystem.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UMcpEditorSubsystem>()
{
	return UMcpEditorSubsystem::StaticClass();
}
UMcpEditorSubsystem::UMcpEditorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMcpEditorSubsystem);
UMcpEditorSubsystem::~UMcpEditorSubsystem() {}
// End Class UMcpEditorSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMcpServerSettings, UMcpServerSettings::StaticClass, TEXT("UMcpServerSettings"), &Z_Registration_Info_UClass_UMcpServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMcpServerSettings), 1099958876U) },
		{ Z_Construct_UClass_UMcpEditorSubsystem, UMcpEditorSubsystem::StaticClass, TEXT("UMcpEditorSubsystem"), &Z_Registration_Info_UClass_UMcpEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMcpEditorSubsystem), 3540471824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_3937349390(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
