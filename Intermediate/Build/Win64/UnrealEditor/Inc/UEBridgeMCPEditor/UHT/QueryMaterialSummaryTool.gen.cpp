// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Material/QueryMaterialSummaryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryMaterialSummaryTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryMaterialSummaryTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryMaterialSummaryTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryMaterialSummaryTool
void UQueryMaterialSummaryTool::StaticRegisterNativesUQueryMaterialSummaryTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryMaterialSummaryTool);
UClass* Z_Construct_UClass_UQueryMaterialSummaryTool_NoRegister()
{
	return UQueryMaterialSummaryTool::StaticClass();
}
struct Z_Construct_UClass_UQueryMaterialSummaryTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Material/QueryMaterialSummaryTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Material/QueryMaterialSummaryTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryMaterialSummaryTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryMaterialSummaryTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryMaterialSummaryTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryMaterialSummaryTool_Statics::ClassParams = {
	&UQueryMaterialSummaryTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryMaterialSummaryTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryMaterialSummaryTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryMaterialSummaryTool()
{
	if (!Z_Registration_Info_UClass_UQueryMaterialSummaryTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryMaterialSummaryTool.OuterSingleton, Z_Construct_UClass_UQueryMaterialSummaryTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryMaterialSummaryTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryMaterialSummaryTool>()
{
	return UQueryMaterialSummaryTool::StaticClass();
}
UQueryMaterialSummaryTool::UQueryMaterialSummaryTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryMaterialSummaryTool);
UQueryMaterialSummaryTool::~UQueryMaterialSummaryTool() {}
// End Class UQueryMaterialSummaryTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialSummaryTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryMaterialSummaryTool, UQueryMaterialSummaryTool::StaticClass, TEXT("UQueryMaterialSummaryTool"), &Z_Registration_Info_UClass_UQueryMaterialSummaryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryMaterialSummaryTool), 2825411246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialSummaryTool_h_1264886840(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialSummaryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialSummaryTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
