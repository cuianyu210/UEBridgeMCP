// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/StateTree/AddStateTreeStateTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddStateTreeStateTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddStateTreeStateTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddStateTreeStateTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAddStateTreeStateTool
void UAddStateTreeStateTool::StaticRegisterNativesUAddStateTreeStateTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddStateTreeStateTool);
UClass* Z_Construct_UClass_UAddStateTreeStateTool_NoRegister()
{
	return UAddStateTreeStateTool::StaticClass();
}
struct Z_Construct_UClass_UAddStateTreeStateTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool for adding a new state to a StateTree asset.\n */" },
		{ "IncludePath", "Tools/StateTree/AddStateTreeStateTool.h" },
		{ "ModuleRelativePath", "Public/Tools/StateTree/AddStateTreeStateTool.h" },
		{ "ToolTip", "Tool for adding a new state to a StateTree asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddStateTreeStateTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAddStateTreeStateTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddStateTreeStateTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddStateTreeStateTool_Statics::ClassParams = {
	&UAddStateTreeStateTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddStateTreeStateTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddStateTreeStateTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAddStateTreeStateTool()
{
	if (!Z_Registration_Info_UClass_UAddStateTreeStateTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddStateTreeStateTool.OuterSingleton, Z_Construct_UClass_UAddStateTreeStateTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAddStateTreeStateTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAddStateTreeStateTool>()
{
	return UAddStateTreeStateTool::StaticClass();
}
UAddStateTreeStateTool::UAddStateTreeStateTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAddStateTreeStateTool);
UAddStateTreeStateTool::~UAddStateTreeStateTool() {}
// End Class UAddStateTreeStateTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeStateTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAddStateTreeStateTool, UAddStateTreeStateTool::StaticClass, TEXT("UAddStateTreeStateTool"), &Z_Registration_Info_UClass_UAddStateTreeStateTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddStateTreeStateTool), 3305876946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeStateTool_h_4094761163(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeStateTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_AddStateTreeStateTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
