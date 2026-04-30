// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/EditLevelBatchTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditLevelBatchTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditLevelBatchTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditLevelBatchTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UEditLevelBatchTool
void UEditLevelBatchTool::StaticRegisterNativesUEditLevelBatchTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditLevelBatchTool);
UClass* Z_Construct_UClass_UEditLevelBatchTool_NoRegister()
{
	return UEditLevelBatchTool::StaticClass();
}
struct Z_Construct_UClass_UEditLevelBatchTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Level/EditLevelBatchTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/EditLevelBatchTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditLevelBatchTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditLevelBatchTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditLevelBatchTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditLevelBatchTool_Statics::ClassParams = {
	&UEditLevelBatchTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditLevelBatchTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditLevelBatchTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditLevelBatchTool()
{
	if (!Z_Registration_Info_UClass_UEditLevelBatchTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditLevelBatchTool.OuterSingleton, Z_Construct_UClass_UEditLevelBatchTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditLevelBatchTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UEditLevelBatchTool>()
{
	return UEditLevelBatchTool::StaticClass();
}
UEditLevelBatchTool::UEditLevelBatchTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditLevelBatchTool);
UEditLevelBatchTool::~UEditLevelBatchTool() {}
// End Class UEditLevelBatchTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelBatchTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditLevelBatchTool, UEditLevelBatchTool::StaticClass, TEXT("UEditLevelBatchTool"), &Z_Registration_Info_UClass_UEditLevelBatchTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditLevelBatchTool), 4004141176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelBatchTool_h_3725816022(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelBatchTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelBatchTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
