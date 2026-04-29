// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/Project/ProjectInfoTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRIDGEMCPEDITOR_ProjectInfoTool_generated_h
#error "ProjectInfoTool.generated.h already included, missing '#pragma once' in ProjectInfoTool.h"
#endif
#define UEBRIDGEMCPEDITOR_ProjectInfoTool_generated_h

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectInfoTool(); \
	friend struct Z_Construct_UClass_UProjectInfoTool_Statics; \
public: \
	DECLARE_CLASS(UProjectInfoTool, UMcpToolBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEBridgeMCPEditor"), NO_API) \
	DECLARE_SERIALIZER(UProjectInfoTool)


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectInfoTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectInfoTool(UProjectInfoTool&&); \
	UProjectInfoTool(const UProjectInfoTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectInfoTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectInfoTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectInfoTool) \
	NO_API virtual ~UProjectInfoTool();


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_13_PROLOG
#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<class UProjectInfoTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
