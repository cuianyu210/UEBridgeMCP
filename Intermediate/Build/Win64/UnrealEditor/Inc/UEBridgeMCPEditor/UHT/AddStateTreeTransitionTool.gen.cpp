// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/StateTree/AddStateTreeTransitionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddStateTreeTransitionTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddStateTreeTransitionTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddStateTreeTransitionTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAddStateTreeTransitionTool
void UAddStateTreeTransitionTool::StaticRegisterNativesUAddStateTreeTransitionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddStateTreeTransitionTool);
UClass* Z_Construct_UClass_UAddStateTreeTransitionTool_NoRegister()
{
	return UAddStateTreeTransitionTool::StaticClass();
}
struct Z_Construct_UClass_UAddStateTreeTransitionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool for adding a transition between states in a StateTree asset.\n */" },
#endif
		{ "IncludePath", "Tools/StateTree/AddStateTreeTransitionTool.h" },
		{ "ModuleRelativePath", "Public/Tools/StateTree/AddStateTreeTransitionTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool for adding a transition between states in a StateTree asset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddStateTreeTransitionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAddStateTreeTransitionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddStateTreeTransitionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddStateTreeTransitionTool_Statics::ClassParams = {
	&UAddStateTreeTransitionTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddStateTreeTransitionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddStateTreeTransitionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAddStateTreeTransitionTool()
{
	if (!Z_Registration_Info_UClass_UAddStateTreeTransitionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddStateTreeTransitionTool.OuterSingleton, Z_Construct_UClass_UAddStateTreeTransitionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAddStateTreeTransitionTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAddStateTreeTransitionTool>()
{
	return UAddStateTreeTransitionTool::StaticClass();
}
UAddStateTreeTransitionTool::UAddStateTreeTransitionTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAddStateTreeTransitionTool);
UAddStateTreeTransitionTool::~UAddStateTreeTransitionTool() {}
// End Class UAddStateTreeTransitionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTransitionTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAddStateTreeTransitionTool, UAddStateTreeTransitionTool::StaticClass, TEXT("UAddStateTreeTransitionTool"), &Z_Registration_Info_UClass_UAddStateTreeTransitionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddStateTreeTransitionTool), 1038441698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTransitionTool_h_747936250(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTransitionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTransitionTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
