// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/PIE/WaitForWorldConditionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaitForWorldConditionTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UWaitForWorldConditionTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UWaitForWorldConditionTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UWaitForWorldConditionTool
void UWaitForWorldConditionTool::StaticRegisterNativesUWaitForWorldConditionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaitForWorldConditionTool);
UClass* Z_Construct_UClass_UWaitForWorldConditionTool_NoRegister()
{
	return UWaitForWorldConditionTool::StaticClass();
}
struct Z_Construct_UClass_UWaitForWorldConditionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PIE/WaitForWorldConditionTool.h" },
		{ "ModuleRelativePath", "Public/Tools/PIE/WaitForWorldConditionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaitForWorldConditionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaitForWorldConditionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitForWorldConditionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaitForWorldConditionTool_Statics::ClassParams = {
	&UWaitForWorldConditionTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitForWorldConditionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaitForWorldConditionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaitForWorldConditionTool()
{
	if (!Z_Registration_Info_UClass_UWaitForWorldConditionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaitForWorldConditionTool.OuterSingleton, Z_Construct_UClass_UWaitForWorldConditionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaitForWorldConditionTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UWaitForWorldConditionTool>()
{
	return UWaitForWorldConditionTool::StaticClass();
}
UWaitForWorldConditionTool::UWaitForWorldConditionTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaitForWorldConditionTool);
UWaitForWorldConditionTool::~UWaitForWorldConditionTool() {}
// End Class UWaitForWorldConditionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_WaitForWorldConditionTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaitForWorldConditionTool, UWaitForWorldConditionTool::StaticClass, TEXT("UWaitForWorldConditionTool"), &Z_Registration_Info_UClass_UWaitForWorldConditionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaitForWorldConditionTool), 1606425061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_WaitForWorldConditionTool_h_104372930(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_WaitForWorldConditionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_WaitForWorldConditionTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
