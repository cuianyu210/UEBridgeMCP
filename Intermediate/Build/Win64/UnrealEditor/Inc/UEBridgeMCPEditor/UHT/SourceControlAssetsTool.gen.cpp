// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Asset/SourceControlAssetsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControlAssetsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_USourceControlAssetsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_USourceControlAssetsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class USourceControlAssetsTool
void USourceControlAssetsTool::StaticRegisterNativesUSourceControlAssetsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceControlAssetsTool);
UClass* Z_Construct_UClass_USourceControlAssetsTool_NoRegister()
{
	return USourceControlAssetsTool::StaticClass();
}
struct Z_Construct_UClass_USourceControlAssetsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Asset/SourceControlAssetsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Asset/SourceControlAssetsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceControlAssetsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USourceControlAssetsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlAssetsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceControlAssetsTool_Statics::ClassParams = {
	&USourceControlAssetsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlAssetsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceControlAssetsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceControlAssetsTool()
{
	if (!Z_Registration_Info_UClass_USourceControlAssetsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceControlAssetsTool.OuterSingleton, Z_Construct_UClass_USourceControlAssetsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceControlAssetsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<USourceControlAssetsTool>()
{
	return USourceControlAssetsTool::StaticClass();
}
USourceControlAssetsTool::USourceControlAssetsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceControlAssetsTool);
USourceControlAssetsTool::~USourceControlAssetsTool() {}
// End Class USourceControlAssetsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_SourceControlAssetsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceControlAssetsTool, USourceControlAssetsTool::StaticClass, TEXT("USourceControlAssetsTool"), &Z_Registration_Info_UClass_USourceControlAssetsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceControlAssetsTool), 601199357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_SourceControlAssetsTool_h_1123296414(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_SourceControlAssetsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_SourceControlAssetsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
