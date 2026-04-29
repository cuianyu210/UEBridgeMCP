// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/QueryBlueprintGraphTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryBlueprintGraphTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintGraphTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintGraphTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryBlueprintGraphTool
void UQueryBlueprintGraphTool::StaticRegisterNativesUQueryBlueprintGraphTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryBlueprintGraphTool);
UClass* Z_Construct_UClass_UQueryBlueprintGraphTool_NoRegister()
{
	return UQueryBlueprintGraphTool::StaticClass();
}
struct Z_Construct_UClass_UQueryBlueprintGraphTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Consolidated tool for Blueprint graph inspection.\n * Replaces: get-blueprint-graph, get-blueprint-node, list-blueprint-callables, get-callable-details\n *\n * Usage modes:\n * - No special params: List all graphs with nodes (like get-blueprint-graph)\n * - node_guid: Get specific node details (like get-blueprint-node)\n * - callable_name: Get specific callable's graph (like get-callable-details)\n * - list_callables=true: List all callables without full graphs (like list-blueprint-callables)\n */" },
		{ "IncludePath", "Tools/Blueprint/QueryBlueprintGraphTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/QueryBlueprintGraphTool.h" },
		{ "ToolTip", "Consolidated tool for Blueprint graph inspection.\nReplaces: get-blueprint-graph, get-blueprint-node, list-blueprint-callables, get-callable-details\n\nUsage modes:\n- No special params: List all graphs with nodes (like get-blueprint-graph)\n- node_guid: Get specific node details (like get-blueprint-node)\n- callable_name: Get specific callable's graph (like get-callable-details)\n- list_callables=true: List all callables without full graphs (like list-blueprint-callables)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryBlueprintGraphTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryBlueprintGraphTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintGraphTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryBlueprintGraphTool_Statics::ClassParams = {
	&UQueryBlueprintGraphTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintGraphTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryBlueprintGraphTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryBlueprintGraphTool()
{
	if (!Z_Registration_Info_UClass_UQueryBlueprintGraphTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryBlueprintGraphTool.OuterSingleton, Z_Construct_UClass_UQueryBlueprintGraphTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryBlueprintGraphTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryBlueprintGraphTool>()
{
	return UQueryBlueprintGraphTool::StaticClass();
}
UQueryBlueprintGraphTool::UQueryBlueprintGraphTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryBlueprintGraphTool);
UQueryBlueprintGraphTool::~UQueryBlueprintGraphTool() {}
// End Class UQueryBlueprintGraphTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryBlueprintGraphTool, UQueryBlueprintGraphTool::StaticClass, TEXT("UQueryBlueprintGraphTool"), &Z_Registration_Info_UClass_UQueryBlueprintGraphTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryBlueprintGraphTool), 2785430403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphTool_h_1361414895(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
