// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/PIE/PieSessionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieSessionTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UPieSessionTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UPieSessionTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UPieSessionTool
void UPieSessionTool::StaticRegisterNativesUPieSessionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPieSessionTool);
UClass* Z_Construct_UClass_UPieSessionTool_NoRegister()
{
	return UPieSessionTool::StaticClass();
}
struct Z_Construct_UClass_UPieSessionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Consolidated PIE session control tool.\n * Actions: start, stop, pause, resume, get-state, wait-for\n */" },
#endif
		{ "IncludePath", "Tools/PIE/PieSessionTool.h" },
		{ "ModuleRelativePath", "Public/Tools/PIE/PieSessionTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consolidated PIE session control tool.\nActions: start, stop, pause, resume, get-state, wait-for" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPieSessionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPieSessionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPieSessionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPieSessionTool_Statics::ClassParams = {
	&UPieSessionTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPieSessionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UPieSessionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPieSessionTool()
{
	if (!Z_Registration_Info_UClass_UPieSessionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPieSessionTool.OuterSingleton, Z_Construct_UClass_UPieSessionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPieSessionTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UPieSessionTool>()
{
	return UPieSessionTool::StaticClass();
}
UPieSessionTool::UPieSessionTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPieSessionTool);
UPieSessionTool::~UPieSessionTool() {}
// End Class UPieSessionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieSessionTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPieSessionTool, UPieSessionTool::StaticClass, TEXT("UPieSessionTool"), &Z_Registration_Info_UClass_UPieSessionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPieSessionTool), 3999606980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieSessionTool_h_1353071475(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieSessionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_PieSessionTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
