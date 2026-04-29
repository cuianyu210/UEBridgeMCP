// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Asset/ImportAssetsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportAssetsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UImportAssetsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UImportAssetsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UImportAssetsTool
void UImportAssetsTool::StaticRegisterNativesUImportAssetsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportAssetsTool);
UClass* Z_Construct_UClass_UImportAssetsTool_NoRegister()
{
	return UImportAssetsTool::StaticClass();
}
struct Z_Construct_UClass_UImportAssetsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Asset/ImportAssetsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Asset/ImportAssetsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportAssetsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImportAssetsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImportAssetsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportAssetsTool_Statics::ClassParams = {
	&UImportAssetsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImportAssetsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UImportAssetsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImportAssetsTool()
{
	if (!Z_Registration_Info_UClass_UImportAssetsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportAssetsTool.OuterSingleton, Z_Construct_UClass_UImportAssetsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImportAssetsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UImportAssetsTool>()
{
	return UImportAssetsTool::StaticClass();
}
UImportAssetsTool::UImportAssetsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImportAssetsTool);
UImportAssetsTool::~UImportAssetsTool() {}
// End Class UImportAssetsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ImportAssetsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImportAssetsTool, UImportAssetsTool::StaticClass, TEXT("UImportAssetsTool"), &Z_Registration_Info_UClass_UImportAssetsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportAssetsTool), 1516145765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ImportAssetsTool_h_3293143701(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ImportAssetsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ImportAssetsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
