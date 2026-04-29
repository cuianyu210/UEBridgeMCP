// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/BlueprintScaffoldFromSpecTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintScaffoldFromSpecTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UBlueprintScaffoldFromSpecTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UBlueprintScaffoldFromSpecTool
void UBlueprintScaffoldFromSpecTool::StaticRegisterNativesUBlueprintScaffoldFromSpecTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintScaffoldFromSpecTool);
UClass* Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_NoRegister()
{
	return UBlueprintScaffoldFromSpecTool::StaticClass();
}
struct Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Blueprint/BlueprintScaffoldFromSpecTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/BlueprintScaffoldFromSpecTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintScaffoldFromSpecTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_Statics::ClassParams = {
	&UBlueprintScaffoldFromSpecTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintScaffoldFromSpecTool()
{
	if (!Z_Registration_Info_UClass_UBlueprintScaffoldFromSpecTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintScaffoldFromSpecTool.OuterSingleton, Z_Construct_UClass_UBlueprintScaffoldFromSpecTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintScaffoldFromSpecTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UBlueprintScaffoldFromSpecTool>()
{
	return UBlueprintScaffoldFromSpecTool::StaticClass();
}
UBlueprintScaffoldFromSpecTool::UBlueprintScaffoldFromSpecTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintScaffoldFromSpecTool);
UBlueprintScaffoldFromSpecTool::~UBlueprintScaffoldFromSpecTool() {}
// End Class UBlueprintScaffoldFromSpecTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_BlueprintScaffoldFromSpecTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintScaffoldFromSpecTool, UBlueprintScaffoldFromSpecTool::StaticClass, TEXT("UBlueprintScaffoldFromSpecTool"), &Z_Registration_Info_UClass_UBlueprintScaffoldFromSpecTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintScaffoldFromSpecTool), 1207279328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_BlueprintScaffoldFromSpecTool_h_1637625813(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_BlueprintScaffoldFromSpecTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_BlueprintScaffoldFromSpecTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
