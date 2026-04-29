// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/Write/SpawnActorTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRIDGEMCPEDITOR_SpawnActorTool_generated_h
#error "SpawnActorTool.generated.h already included, missing '#pragma once' in SpawnActorTool.h"
#endif
#define UEBRIDGEMCPEDITOR_SpawnActorTool_generated_h

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawnActorTool(); \
	friend struct Z_Construct_UClass_USpawnActorTool_Statics; \
public: \
	DECLARE_CLASS(USpawnActorTool, UMcpToolBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEBridgeMCPEditor"), NO_API) \
	DECLARE_SERIALIZER(USpawnActorTool)


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpawnActorTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpawnActorTool(USpawnActorTool&&); \
	USpawnActorTool(const USpawnActorTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnActorTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnActorTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpawnActorTool) \
	NO_API virtual ~USpawnActorTool();


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_12_PROLOG
#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<class USpawnActorTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
