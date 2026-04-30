// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/CreateAssetTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateAssetTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCreateAssetTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCreateAssetTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UCreateAssetTool
void UCreateAssetTool::StaticRegisterNativesUCreateAssetTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateAssetTool);
UClass* Z_Construct_UClass_UCreateAssetTool_NoRegister()
{
	return UCreateAssetTool::StaticClass();
}
struct Z_Construct_UClass_UCreateAssetTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Create a new asset by class name.\n * Supports any UObject type including Blueprint, Material, DataTable, DataAsset, etc.\n * Uses dynamic class resolution - accepts class names or Blueprint class paths.\n */" },
#endif
		{ "IncludePath", "Tools/Write/CreateAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/CreateAssetTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new asset by class name.\nSupports any UObject type including Blueprint, Material, DataTable, DataAsset, etc.\nUses dynamic class resolution - accepts class names or Blueprint class paths." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateAssetTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCreateAssetTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateAssetTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateAssetTool_Statics::ClassParams = {
	&UCreateAssetTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateAssetTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreateAssetTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCreateAssetTool()
{
	if (!Z_Registration_Info_UClass_UCreateAssetTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateAssetTool.OuterSingleton, Z_Construct_UClass_UCreateAssetTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCreateAssetTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UCreateAssetTool>()
{
	return UCreateAssetTool::StaticClass();
}
UCreateAssetTool::UCreateAssetTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateAssetTool);
UCreateAssetTool::~UCreateAssetTool() {}
// End Class UCreateAssetTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_CreateAssetTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCreateAssetTool, UCreateAssetTool::StaticClass, TEXT("UCreateAssetTool"), &Z_Registration_Info_UClass_UCreateAssetTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateAssetTool), 969958152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_CreateAssetTool_h_134901421(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_CreateAssetTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_CreateAssetTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
