// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/PIE/QueryGameplayStateTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryGameplayStateTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryGameplayStateTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryGameplayStateTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryGameplayStateTool
void UQueryGameplayStateTool::StaticRegisterNativesUQueryGameplayStateTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryGameplayStateTool);
UClass* Z_Construct_UClass_UQueryGameplayStateTool_NoRegister()
{
	return UQueryGameplayStateTool::StaticClass();
}
struct Z_Construct_UClass_UQueryGameplayStateTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PIE/QueryGameplayStateTool.h" },
		{ "ModuleRelativePath", "Public/Tools/PIE/QueryGameplayStateTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryGameplayStateTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryGameplayStateTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryGameplayStateTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryGameplayStateTool_Statics::ClassParams = {
	&UQueryGameplayStateTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryGameplayStateTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryGameplayStateTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryGameplayStateTool()
{
	if (!Z_Registration_Info_UClass_UQueryGameplayStateTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryGameplayStateTool.OuterSingleton, Z_Construct_UClass_UQueryGameplayStateTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryGameplayStateTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryGameplayStateTool>()
{
	return UQueryGameplayStateTool::StaticClass();
}
UQueryGameplayStateTool::UQueryGameplayStateTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryGameplayStateTool);
UQueryGameplayStateTool::~UQueryGameplayStateTool() {}
// End Class UQueryGameplayStateTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_QueryGameplayStateTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryGameplayStateTool, UQueryGameplayStateTool::StaticClass, TEXT("UQueryGameplayStateTool"), &Z_Registration_Info_UClass_UQueryGameplayStateTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryGameplayStateTool), 1209497123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_QueryGameplayStateTool_h_1145376783(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_QueryGameplayStateTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_QueryGameplayStateTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
