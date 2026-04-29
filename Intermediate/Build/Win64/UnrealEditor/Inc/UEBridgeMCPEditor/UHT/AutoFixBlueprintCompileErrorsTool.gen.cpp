// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/AutoFixBlueprintCompileErrorsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoFixBlueprintCompileErrorsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAutoFixBlueprintCompileErrorsTool
void UAutoFixBlueprintCompileErrorsTool::StaticRegisterNativesUAutoFixBlueprintCompileErrorsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoFixBlueprintCompileErrorsTool);
UClass* Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_NoRegister()
{
	return UAutoFixBlueprintCompileErrorsTool::StaticClass();
}
struct Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Blueprint/AutoFixBlueprintCompileErrorsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/AutoFixBlueprintCompileErrorsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoFixBlueprintCompileErrorsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_Statics::ClassParams = {
	&UAutoFixBlueprintCompileErrorsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool()
{
	if (!Z_Registration_Info_UClass_UAutoFixBlueprintCompileErrorsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoFixBlueprintCompileErrorsTool.OuterSingleton, Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoFixBlueprintCompileErrorsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAutoFixBlueprintCompileErrorsTool>()
{
	return UAutoFixBlueprintCompileErrorsTool::StaticClass();
}
UAutoFixBlueprintCompileErrorsTool::UAutoFixBlueprintCompileErrorsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoFixBlueprintCompileErrorsTool);
UAutoFixBlueprintCompileErrorsTool::~UAutoFixBlueprintCompileErrorsTool() {}
// End Class UAutoFixBlueprintCompileErrorsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_AutoFixBlueprintCompileErrorsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoFixBlueprintCompileErrorsTool, UAutoFixBlueprintCompileErrorsTool::StaticClass, TEXT("UAutoFixBlueprintCompileErrorsTool"), &Z_Registration_Info_UClass_UAutoFixBlueprintCompileErrorsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoFixBlueprintCompileErrorsTool), 1518634536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_AutoFixBlueprintCompileErrorsTool_h_885696968(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_AutoFixBlueprintCompileErrorsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_AutoFixBlueprintCompileErrorsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
