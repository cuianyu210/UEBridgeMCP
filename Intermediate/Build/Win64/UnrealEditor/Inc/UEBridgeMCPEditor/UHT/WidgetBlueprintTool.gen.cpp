// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Widget/WidgetBlueprintTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UWidgetBlueprintTool
void UWidgetBlueprintTool::StaticRegisterNativesUWidgetBlueprintTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintTool);
UClass* Z_Construct_UClass_UWidgetBlueprintTool_NoRegister()
{
	return UWidgetBlueprintTool::StaticClass();
}
struct Z_Construct_UClass_UWidgetBlueprintTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool for inspecting Widget Blueprint-specific data including\n * widget hierarchy, slot information, and visibility settings.\n */" },
#endif
		{ "IncludePath", "Tools/Widget/WidgetBlueprintTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Widget/WidgetBlueprintTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool for inspecting Widget Blueprint-specific data including\nwidget hierarchy, slot information, and visibility settings." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBlueprintTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintTool_Statics::ClassParams = {
	&UWidgetBlueprintTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBlueprintTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBlueprintTool()
{
	if (!Z_Registration_Info_UClass_UWidgetBlueprintTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintTool.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBlueprintTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UWidgetBlueprintTool>()
{
	return UWidgetBlueprintTool::StaticClass();
}
UWidgetBlueprintTool::UWidgetBlueprintTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintTool);
UWidgetBlueprintTool::~UWidgetBlueprintTool() {}
// End Class UWidgetBlueprintTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Widget_WidgetBlueprintTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintTool, UWidgetBlueprintTool::StaticClass, TEXT("UWidgetBlueprintTool"), &Z_Registration_Info_UClass_UWidgetBlueprintTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintTool), 951906295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Widget_WidgetBlueprintTool_h_771828944(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Widget_WidgetBlueprintTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Widget_WidgetBlueprintTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
