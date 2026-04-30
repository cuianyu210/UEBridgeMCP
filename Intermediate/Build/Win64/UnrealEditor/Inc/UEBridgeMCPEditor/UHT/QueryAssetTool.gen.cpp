// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Asset/QueryAssetTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryAssetTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryAssetTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryAssetTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryAssetTool
void UQueryAssetTool::StaticRegisterNativesUQueryAssetTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryAssetTool);
UClass* Z_Construct_UClass_UQueryAssetTool_NoRegister()
{
	return UQueryAssetTool::StaticClass();
}
struct Z_Construct_UClass_UQueryAssetTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Consolidated tool for asset operations.\n * Replaces: search-assets, inspect-asset, inspect-data-asset\n *\n * Usage modes:\n * - query param: Search for assets (like search-assets)\n * - asset_path param: Inspect specific asset (like inspect-asset/inspect-data-asset)\n */" },
#endif
		{ "IncludePath", "Tools/Asset/QueryAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Asset/QueryAssetTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consolidated tool for asset operations.\nReplaces: search-assets, inspect-asset, inspect-data-asset\n\nUsage modes:\n- query param: Search for assets (like search-assets)\n- asset_path param: Inspect specific asset (like inspect-asset/inspect-data-asset)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryAssetTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryAssetTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryAssetTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryAssetTool_Statics::ClassParams = {
	&UQueryAssetTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryAssetTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryAssetTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryAssetTool()
{
	if (!Z_Registration_Info_UClass_UQueryAssetTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryAssetTool.OuterSingleton, Z_Construct_UClass_UQueryAssetTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryAssetTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryAssetTool>()
{
	return UQueryAssetTool::StaticClass();
}
UQueryAssetTool::UQueryAssetTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryAssetTool);
UQueryAssetTool::~UQueryAssetTool() {}
// End Class UQueryAssetTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_QueryAssetTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryAssetTool, UQueryAssetTool::StaticClass, TEXT("UQueryAssetTool"), &Z_Registration_Info_UClass_UQueryAssetTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryAssetTool), 2742529933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_QueryAssetTool_h_4294599240(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_QueryAssetTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_QueryAssetTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
