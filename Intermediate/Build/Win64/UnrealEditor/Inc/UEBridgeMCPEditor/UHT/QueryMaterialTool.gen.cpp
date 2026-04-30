// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Material/QueryMaterialTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryMaterialTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryMaterialTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryMaterialTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryMaterialTool
void UQueryMaterialTool::StaticRegisterNativesUQueryMaterialTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryMaterialTool);
UClass* Z_Construct_UClass_UQueryMaterialTool_NoRegister()
{
	return UQueryMaterialTool::StaticClass();
}
struct Z_Construct_UClass_UQueryMaterialTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Consolidated tool for Material inspection.\n * Replaces: get-material-graph, get-material-parameters\n *\n * Usage:\n * - Default: Returns both graph and parameters\n * - include=\"graph\": Only graph structure\n * - include=\"parameters\": Only parameters\n */" },
#endif
		{ "IncludePath", "Tools/Material/QueryMaterialTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Material/QueryMaterialTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consolidated tool for Material inspection.\nReplaces: get-material-graph, get-material-parameters\n\nUsage:\n- Default: Returns both graph and parameters\n- include=\"graph\": Only graph structure\n- include=\"parameters\": Only parameters" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryMaterialTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryMaterialTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryMaterialTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryMaterialTool_Statics::ClassParams = {
	&UQueryMaterialTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryMaterialTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryMaterialTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryMaterialTool()
{
	if (!Z_Registration_Info_UClass_UQueryMaterialTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryMaterialTool.OuterSingleton, Z_Construct_UClass_UQueryMaterialTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryMaterialTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryMaterialTool>()
{
	return UQueryMaterialTool::StaticClass();
}
UQueryMaterialTool::UQueryMaterialTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryMaterialTool);
UQueryMaterialTool::~UQueryMaterialTool() {}
// End Class UQueryMaterialTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryMaterialTool, UQueryMaterialTool::StaticClass, TEXT("UQueryMaterialTool"), &Z_Registration_Info_UClass_UQueryMaterialTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryMaterialTool), 1683095752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialTool_h_4245885440(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
