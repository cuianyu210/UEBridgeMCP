// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/GenerateLevelStructureTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateLevelStructureTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UGenerateLevelStructureTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UGenerateLevelStructureTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UGenerateLevelStructureTool
void UGenerateLevelStructureTool::StaticRegisterNativesUGenerateLevelStructureTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateLevelStructureTool);
UClass* Z_Construct_UClass_UGenerateLevelStructureTool_NoRegister()
{
	return UGenerateLevelStructureTool::StaticClass();
}
struct Z_Construct_UClass_UGenerateLevelStructureTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Level/GenerateLevelStructureTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/GenerateLevelStructureTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateLevelStructureTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenerateLevelStructureTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLevelStructureTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateLevelStructureTool_Statics::ClassParams = {
	&UGenerateLevelStructureTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLevelStructureTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenerateLevelStructureTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenerateLevelStructureTool()
{
	if (!Z_Registration_Info_UClass_UGenerateLevelStructureTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateLevelStructureTool.OuterSingleton, Z_Construct_UClass_UGenerateLevelStructureTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenerateLevelStructureTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UGenerateLevelStructureTool>()
{
	return UGenerateLevelStructureTool::StaticClass();
}
UGenerateLevelStructureTool::UGenerateLevelStructureTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateLevelStructureTool);
UGenerateLevelStructureTool::~UGenerateLevelStructureTool() {}
// End Class UGenerateLevelStructureTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_GenerateLevelStructureTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateLevelStructureTool, UGenerateLevelStructureTool::StaticClass, TEXT("UGenerateLevelStructureTool"), &Z_Registration_Info_UClass_UGenerateLevelStructureTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateLevelStructureTool), 3292626901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_GenerateLevelStructureTool_h_3307299158(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_GenerateLevelStructureTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_GenerateLevelStructureTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
