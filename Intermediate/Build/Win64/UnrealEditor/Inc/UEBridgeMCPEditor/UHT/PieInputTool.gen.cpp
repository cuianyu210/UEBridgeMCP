// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/PIE/PieInputTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieInputTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UPieInputTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UPieInputTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UPieInputTool
void UPieInputTool::StaticRegisterNativesUPieInputTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPieInputTool);
UClass* Z_Construct_UClass_UPieInputTool_NoRegister()
{
	return UPieInputTool::StaticClass();
}
struct Z_Construct_UClass_UPieInputTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Consolidated PIE input simulation tool.\n * Actions: key, action, axis, move-to, look-at\n */" },
		{ "IncludePath", "Tools/PIE/PieInputTool.h" },
		{ "ModuleRelativePath", "Public/Tools/PIE/PieInputTool.h" },
		{ "ToolTip", "Consolidated PIE input simulation tool.\nActions: key, action, axis, move-to, look-at" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPieInputTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPieInputTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPieInputTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPieInputTool_Statics::ClassParams = {
	&UPieInputTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPieInputTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UPieInputTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPieInputTool()
{
	if (!Z_Registration_Info_UClass_UPieInputTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPieInputTool.OuterSingleton, Z_Construct_UClass_UPieInputTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPieInputTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UPieInputTool>()
{
	return UPieInputTool::StaticClass();
}
UPieInputTool::UPieInputTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPieInputTool);
UPieInputTool::~UPieInputTool() {}
// End Class UPieInputTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPieInputTool, UPieInputTool::StaticClass, TEXT("UPieInputTool"), &Z_Registration_Info_UClass_UPieInputTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPieInputTool), 668384815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_2004459587(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieInputTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
