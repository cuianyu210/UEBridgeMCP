// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/PIE/PieInputTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRIDGEMCPEDITOR_PieInputTool_generated_h
#error "PieInputTool.generated.h already included, missing '#pragma once' in PieInputTool.h"
#endif
#define UEBRIDGEMCPEDITOR_PieInputTool_generated_h

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPieInputTool(); \
	friend struct Z_Construct_UClass_UPieInputTool_Statics; \
public: \
	DECLARE_CLASS(UPieInputTool, UMcpToolBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEBridgeMCPEditor"), NO_API) \
	DECLARE_SERIALIZER(UPieInputTool)


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPieInputTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPieInputTool(UPieInputTool&&); \
	UPieInputTool(const UPieInputTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPieInputTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPieInputTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPieInputTool) \
	NO_API virtual ~UPieInputTool();


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_13_PROLOG
#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<class UPieInputTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
