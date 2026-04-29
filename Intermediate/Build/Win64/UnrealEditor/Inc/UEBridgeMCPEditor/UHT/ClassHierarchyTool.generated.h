// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/Analysis/ClassHierarchyTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRIDGEMCPEDITOR_ClassHierarchyTool_generated_h
#error "ClassHierarchyTool.generated.h already included, missing '#pragma once' in ClassHierarchyTool.h"
#endif
#define UEBRIDGEMCPEDITOR_ClassHierarchyTool_generated_h

#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassHierarchyTool(); \
	friend struct Z_Construct_UClass_UClassHierarchyTool_Statics; \
public: \
	DECLARE_CLASS(UClassHierarchyTool, UMcpToolBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEBridgeMCPEditor"), NO_API) \
	DECLARE_SERIALIZER(UClassHierarchyTool)


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassHierarchyTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClassHierarchyTool(UClassHierarchyTool&&); \
	UClassHierarchyTool(const UClassHierarchyTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassHierarchyTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassHierarchyTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassHierarchyTool) \
	NO_API virtual ~UClassHierarchyTool();


#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_12_PROLOG
#define FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<class UClassHierarchyTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
