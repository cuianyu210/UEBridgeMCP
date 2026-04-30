// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Build/TriggerLiveCodingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerLiveCodingTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UTriggerLiveCodingTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UTriggerLiveCodingTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UTriggerLiveCodingTool
void UTriggerLiveCodingTool::StaticRegisterNativesUTriggerLiveCodingTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerLiveCodingTool);
UClass* Z_Construct_UClass_UTriggerLiveCodingTool_NoRegister()
{
	return UTriggerLiveCodingTool::StaticClass();
}
struct Z_Construct_UClass_UTriggerLiveCodingTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Trigger Live Coding compilation for C++ code changes.\n * Uses UE's Live Coding system (Ctrl+Alt+F11 equivalent).\n * Supports both async and sync modes with compilation result tracking.\n * Windows only. Requires Live Coding to be enabled in Editor Preferences.\n */" },
#endif
		{ "IncludePath", "Tools/Build/TriggerLiveCodingTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Build/TriggerLiveCodingTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger Live Coding compilation for C++ code changes.\nUses UE's Live Coding system (Ctrl+Alt+F11 equivalent).\nSupports both async and sync modes with compilation result tracking.\nWindows only. Requires Live Coding to be enabled in Editor Preferences." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerLiveCodingTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTriggerLiveCodingTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerLiveCodingTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerLiveCodingTool_Statics::ClassParams = {
	&UTriggerLiveCodingTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerLiveCodingTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerLiveCodingTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriggerLiveCodingTool()
{
	if (!Z_Registration_Info_UClass_UTriggerLiveCodingTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerLiveCodingTool.OuterSingleton, Z_Construct_UClass_UTriggerLiveCodingTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriggerLiveCodingTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UTriggerLiveCodingTool>()
{
	return UTriggerLiveCodingTool::StaticClass();
}
UTriggerLiveCodingTool::UTriggerLiveCodingTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerLiveCodingTool);
UTriggerLiveCodingTool::~UTriggerLiveCodingTool() {}
// End Class UTriggerLiveCodingTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_TriggerLiveCodingTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerLiveCodingTool, UTriggerLiveCodingTool::StaticClass, TEXT("UTriggerLiveCodingTool"), &Z_Registration_Info_UClass_UTriggerLiveCodingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerLiveCodingTool), 1165908853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_TriggerLiveCodingTool_h_2513168077(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_TriggerLiveCodingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Build_TriggerLiveCodingTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
