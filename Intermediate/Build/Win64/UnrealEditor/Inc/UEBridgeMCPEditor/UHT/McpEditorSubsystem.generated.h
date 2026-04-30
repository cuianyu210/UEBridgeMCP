// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/McpEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMcpServerSettings;
#ifdef UEBRIDGEMCPEDITOR_McpEditorSubsystem_generated_h
#error "McpEditorSubsystem.generated.h already included, missing '#pragma once' in McpEditorSubsystem.h"
#endif
#define UEBRIDGEMCPEDITOR_McpEditorSubsystem_generated_h

#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMcpServerSettings(); \
	friend struct Z_Construct_UClass_UMcpServerSettings_Statics; \
public: \
	DECLARE_CLASS(UMcpServerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEBridgeMCPEditor"), NO_API) \
	DECLARE_SERIALIZER(UMcpServerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("UEBridgeMCP");} \



#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMcpServerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMcpServerSettings(UMcpServerSettings&&); \
	UMcpServerSettings(const UMcpServerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMcpServerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMcpServerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMcpServerSettings) \
	NO_API virtual ~UMcpServerSettings();


#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_13_PROLOG
#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<class UMcpServerSettings>();

#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActualPort); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execGetServerStatus); \
	DECLARE_FUNCTION(execRestartServer); \
	DECLARE_FUNCTION(execStopServer); \
	DECLARE_FUNCTION(execStartServer); \
	DECLARE_FUNCTION(execIsServerRunning);


#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMcpEditorSubsystem(); \
	friend struct Z_Construct_UClass_UMcpEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMcpEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEBridgeMCPEditor"), NO_API) \
	DECLARE_SERIALIZER(UMcpEditorSubsystem)


#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMcpEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMcpEditorSubsystem(UMcpEditorSubsystem&&); \
	UMcpEditorSubsystem(const UMcpEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMcpEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMcpEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMcpEditorSubsystem) \
	NO_API virtual ~UMcpEditorSubsystem();


#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_35_PROLOG
#define FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<class UMcpEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Subsystem_McpEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
