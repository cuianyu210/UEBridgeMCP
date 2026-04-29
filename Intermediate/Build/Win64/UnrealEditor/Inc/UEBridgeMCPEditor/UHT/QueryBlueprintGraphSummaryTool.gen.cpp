// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/QueryBlueprintGraphSummaryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryBlueprintGraphSummaryTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintGraphSummaryTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryBlueprintGraphSummaryTool
void UQueryBlueprintGraphSummaryTool::StaticRegisterNativesUQueryBlueprintGraphSummaryTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryBlueprintGraphSummaryTool);
UClass* Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_NoRegister()
{
	return UQueryBlueprintGraphSummaryTool::StaticClass();
}
struct Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Blueprint/QueryBlueprintGraphSummaryTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/QueryBlueprintGraphSummaryTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryBlueprintGraphSummaryTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_Statics::ClassParams = {
	&UQueryBlueprintGraphSummaryTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryBlueprintGraphSummaryTool()
{
	if (!Z_Registration_Info_UClass_UQueryBlueprintGraphSummaryTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryBlueprintGraphSummaryTool.OuterSingleton, Z_Construct_UClass_UQueryBlueprintGraphSummaryTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryBlueprintGraphSummaryTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryBlueprintGraphSummaryTool>()
{
	return UQueryBlueprintGraphSummaryTool::StaticClass();
}
UQueryBlueprintGraphSummaryTool::UQueryBlueprintGraphSummaryTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryBlueprintGraphSummaryTool);
UQueryBlueprintGraphSummaryTool::~UQueryBlueprintGraphSummaryTool() {}
// End Class UQueryBlueprintGraphSummaryTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphSummaryTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryBlueprintGraphSummaryTool, UQueryBlueprintGraphSummaryTool::StaticClass, TEXT("UQueryBlueprintGraphSummaryTool"), &Z_Registration_Info_UClass_UQueryBlueprintGraphSummaryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryBlueprintGraphSummaryTool), 3493628810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphSummaryTool_h_3654236330(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphSummaryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintGraphSummaryTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
