// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Asset/GetAssetDiffTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetAssetDiffTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UGetAssetDiffTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UGetAssetDiffTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UGetAssetDiffTool
void UGetAssetDiffTool::StaticRegisterNativesUGetAssetDiffTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetAssetDiffTool);
UClass* Z_Construct_UClass_UGetAssetDiffTool_NoRegister()
{
	return UGetAssetDiffTool::StaticClass();
}
struct Z_Construct_UClass_UGetAssetDiffTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool for diffing binary Unreal assets against SCM (Git/Perforce) base versions.\n * Returns structured JSON diff that can be consumed programmatically by AI assistants.\n *\n * Unlike visual diff tools (IAssetTools::DiffAssets), this returns text-based output.\n */" },
#endif
		{ "IncludePath", "Tools/Asset/GetAssetDiffTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Asset/GetAssetDiffTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool for diffing binary Unreal assets against SCM (Git/Perforce) base versions.\nReturns structured JSON diff that can be consumed programmatically by AI assistants.\n\nUnlike visual diff tools (IAssetTools::DiffAssets), this returns text-based output." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetAssetDiffTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGetAssetDiffTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetAssetDiffTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetAssetDiffTool_Statics::ClassParams = {
	&UGetAssetDiffTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetAssetDiffTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetAssetDiffTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGetAssetDiffTool()
{
	if (!Z_Registration_Info_UClass_UGetAssetDiffTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetAssetDiffTool.OuterSingleton, Z_Construct_UClass_UGetAssetDiffTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGetAssetDiffTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UGetAssetDiffTool>()
{
	return UGetAssetDiffTool::StaticClass();
}
UGetAssetDiffTool::UGetAssetDiffTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGetAssetDiffTool);
UGetAssetDiffTool::~UGetAssetDiffTool() {}
// End Class UGetAssetDiffTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_GetAssetDiffTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGetAssetDiffTool, UGetAssetDiffTool::StaticClass, TEXT("UGetAssetDiffTool"), &Z_Registration_Info_UClass_UGetAssetDiffTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetAssetDiffTool), 3091087384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_GetAssetDiffTool_h_3339133315(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_GetAssetDiffTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_GetAssetDiffTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
