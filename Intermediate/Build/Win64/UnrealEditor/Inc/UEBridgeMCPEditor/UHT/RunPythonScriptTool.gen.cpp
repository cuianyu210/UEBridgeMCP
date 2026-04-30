// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Scripting/RunPythonScriptTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunPythonScriptTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_URunPythonScriptTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_URunPythonScriptTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class URunPythonScriptTool
void URunPythonScriptTool::StaticRegisterNativesURunPythonScriptTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URunPythonScriptTool);
UClass* Z_Construct_UClass_URunPythonScriptTool_NoRegister()
{
	return URunPythonScriptTool::StaticClass();
}
struct Z_Construct_UClass_URunPythonScriptTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Execute Python scripts in Unreal Editor's Python environment.\n * Requires PythonScriptPlugin to be enabled.\n * Supports inline scripts or script files with optional arguments.\n */" },
#endif
		{ "IncludePath", "Tools/Scripting/RunPythonScriptTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Scripting/RunPythonScriptTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute Python scripts in Unreal Editor's Python environment.\nRequires PythonScriptPlugin to be enabled.\nSupports inline scripts or script files with optional arguments." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URunPythonScriptTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URunPythonScriptTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URunPythonScriptTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URunPythonScriptTool_Statics::ClassParams = {
	&URunPythonScriptTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URunPythonScriptTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URunPythonScriptTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URunPythonScriptTool()
{
	if (!Z_Registration_Info_UClass_URunPythonScriptTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URunPythonScriptTool.OuterSingleton, Z_Construct_UClass_URunPythonScriptTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URunPythonScriptTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<URunPythonScriptTool>()
{
	return URunPythonScriptTool::StaticClass();
}
URunPythonScriptTool::URunPythonScriptTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URunPythonScriptTool);
URunPythonScriptTool::~URunPythonScriptTool() {}
// End Class URunPythonScriptTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Scripting_RunPythonScriptTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URunPythonScriptTool, URunPythonScriptTool::StaticClass, TEXT("URunPythonScriptTool"), &Z_Registration_Info_UClass_URunPythonScriptTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URunPythonScriptTool), 711705269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Scripting_RunPythonScriptTool_h_1607413220(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Scripting_RunPythonScriptTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Scripting_RunPythonScriptTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
