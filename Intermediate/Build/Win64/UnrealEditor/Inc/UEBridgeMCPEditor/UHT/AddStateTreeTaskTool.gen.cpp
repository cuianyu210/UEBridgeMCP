// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/StateTree/AddStateTreeTaskTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddStateTreeTaskTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddStateTreeTaskTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddStateTreeTaskTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAddStateTreeTaskTool
void UAddStateTreeTaskTool::StaticRegisterNativesUAddStateTreeTaskTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddStateTreeTaskTool);
UClass* Z_Construct_UClass_UAddStateTreeTaskTool_NoRegister()
{
	return UAddStateTreeTaskTool::StaticClass();
}
struct Z_Construct_UClass_UAddStateTreeTaskTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool for adding a task to a state in a StateTree asset.\n */" },
		{ "IncludePath", "Tools/StateTree/AddStateTreeTaskTool.h" },
		{ "ModuleRelativePath", "Public/Tools/StateTree/AddStateTreeTaskTool.h" },
		{ "ToolTip", "Tool for adding a task to a state in a StateTree asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddStateTreeTaskTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAddStateTreeTaskTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddStateTreeTaskTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddStateTreeTaskTool_Statics::ClassParams = {
	&UAddStateTreeTaskTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddStateTreeTaskTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddStateTreeTaskTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAddStateTreeTaskTool()
{
	if (!Z_Registration_Info_UClass_UAddStateTreeTaskTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddStateTreeTaskTool.OuterSingleton, Z_Construct_UClass_UAddStateTreeTaskTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAddStateTreeTaskTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAddStateTreeTaskTool>()
{
	return UAddStateTreeTaskTool::StaticClass();
}
UAddStateTreeTaskTool::UAddStateTreeTaskTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAddStateTreeTaskTool);
UAddStateTreeTaskTool::~UAddStateTreeTaskTool() {}
// End Class UAddStateTreeTaskTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTaskTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAddStateTreeTaskTool, UAddStateTreeTaskTool::StaticClass, TEXT("UAddStateTreeTaskTool"), &Z_Registration_Info_UClass_UAddStateTreeTaskTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddStateTreeTaskTool), 655549783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTaskTool_h_3103838847(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTaskTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeTaskTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
