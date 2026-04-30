// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/QueryBlueprintTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryBlueprintTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryBlueprintTool
void UQueryBlueprintTool::StaticRegisterNativesUQueryBlueprintTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryBlueprintTool);
UClass* Z_Construct_UClass_UQueryBlueprintTool_NoRegister()
{
	return UQueryBlueprintTool::StaticClass();
}
struct Z_Construct_UClass_UQueryBlueprintTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Consolidated tool for Blueprint structure analysis.\n * Replaces: analyze-blueprint, get-blueprint-functions, get-blueprint-variables,\n *           get-blueprint-components, get-blueprint-defaults\n */" },
#endif
		{ "IncludePath", "Tools/Blueprint/QueryBlueprintTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/QueryBlueprintTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consolidated tool for Blueprint structure analysis.\nReplaces: analyze-blueprint, get-blueprint-functions, get-blueprint-variables,\n          get-blueprint-components, get-blueprint-defaults" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryBlueprintTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryBlueprintTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryBlueprintTool_Statics::ClassParams = {
	&UQueryBlueprintTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryBlueprintTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryBlueprintTool()
{
	if (!Z_Registration_Info_UClass_UQueryBlueprintTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryBlueprintTool.OuterSingleton, Z_Construct_UClass_UQueryBlueprintTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryBlueprintTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryBlueprintTool>()
{
	return UQueryBlueprintTool::StaticClass();
}
UQueryBlueprintTool::UQueryBlueprintTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryBlueprintTool);
UQueryBlueprintTool::~UQueryBlueprintTool() {}
// End Class UQueryBlueprintTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryBlueprintTool, UQueryBlueprintTool::StaticClass, TEXT("UQueryBlueprintTool"), &Z_Registration_Info_UClass_UQueryBlueprintTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryBlueprintTool), 1287332429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintTool_h_1618409225(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
