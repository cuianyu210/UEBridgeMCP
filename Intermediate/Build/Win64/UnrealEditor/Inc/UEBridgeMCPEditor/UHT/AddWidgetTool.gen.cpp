// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/AddWidgetTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddWidgetTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddWidgetTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddWidgetTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAddWidgetTool
void UAddWidgetTool::StaticRegisterNativesUAddWidgetTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddWidgetTool);
UClass* Z_Construct_UClass_UAddWidgetTool_NoRegister()
{
	return UAddWidgetTool::StaticClass();
}
struct Z_Construct_UClass_UAddWidgetTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Add a widget to a WidgetBlueprint.\n */" },
		{ "IncludePath", "Tools/Write/AddWidgetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/AddWidgetTool.h" },
		{ "ToolTip", "Add a widget to a WidgetBlueprint." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddWidgetTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAddWidgetTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddWidgetTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddWidgetTool_Statics::ClassParams = {
	&UAddWidgetTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddWidgetTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddWidgetTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAddWidgetTool()
{
	if (!Z_Registration_Info_UClass_UAddWidgetTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddWidgetTool.OuterSingleton, Z_Construct_UClass_UAddWidgetTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAddWidgetTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAddWidgetTool>()
{
	return UAddWidgetTool::StaticClass();
}
UAddWidgetTool::UAddWidgetTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAddWidgetTool);
UAddWidgetTool::~UAddWidgetTool() {}
// End Class UAddWidgetTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddWidgetTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAddWidgetTool, UAddWidgetTool::StaticClass, TEXT("UAddWidgetTool"), &Z_Registration_Info_UClass_UAddWidgetTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddWidgetTool), 2002246341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddWidgetTool_h_92909372(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddWidgetTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddWidgetTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
