// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Build/BuildAndRelaunchTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildAndRelaunchTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UBuildAndRelaunchTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UBuildAndRelaunchTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UBuildAndRelaunchTool
void UBuildAndRelaunchTool::StaticRegisterNativesUBuildAndRelaunchTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildAndRelaunchTool);
UClass* Z_Construct_UClass_UBuildAndRelaunchTool_NoRegister()
{
	return UBuildAndRelaunchTool::StaticClass();
}
struct Z_Construct_UClass_UBuildAndRelaunchTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Close THIS editor instance, trigger a full project build, and relaunch the editor.\n * This tool handles the complete workflow for rebuilding the project.\n * Uses process ID (PID) to ensure only the MCP-connected editor instance is affected.\n * Other running editor instances are not affected.\n * Windows only.\n */" },
#endif
		{ "IncludePath", "Tools/Build/BuildAndRelaunchTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Build/BuildAndRelaunchTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close THIS editor instance, trigger a full project build, and relaunch the editor.\nThis tool handles the complete workflow for rebuilding the project.\nUses process ID (PID) to ensure only the MCP-connected editor instance is affected.\nOther running editor instances are not affected.\nWindows only." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildAndRelaunchTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuildAndRelaunchTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildAndRelaunchTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildAndRelaunchTool_Statics::ClassParams = {
	&UBuildAndRelaunchTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildAndRelaunchTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildAndRelaunchTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildAndRelaunchTool()
{
	if (!Z_Registration_Info_UClass_UBuildAndRelaunchTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildAndRelaunchTool.OuterSingleton, Z_Construct_UClass_UBuildAndRelaunchTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildAndRelaunchTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UBuildAndRelaunchTool>()
{
	return UBuildAndRelaunchTool::StaticClass();
}
UBuildAndRelaunchTool::UBuildAndRelaunchTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildAndRelaunchTool);
UBuildAndRelaunchTool::~UBuildAndRelaunchTool() {}
// End Class UBuildAndRelaunchTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_BuildAndRelaunchTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildAndRelaunchTool, UBuildAndRelaunchTool::StaticClass, TEXT("UBuildAndRelaunchTool"), &Z_Registration_Info_UClass_UBuildAndRelaunchTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildAndRelaunchTool), 2468075741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_BuildAndRelaunchTool_h_2869087799(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_BuildAndRelaunchTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_BuildAndRelaunchTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
