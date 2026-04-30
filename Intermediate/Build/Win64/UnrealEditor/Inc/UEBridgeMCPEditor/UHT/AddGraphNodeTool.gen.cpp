// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/AddGraphNodeTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddGraphNodeTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddGraphNodeTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddGraphNodeTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAddGraphNodeTool
void UAddGraphNodeTool::StaticRegisterNativesUAddGraphNodeTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddGraphNodeTool);
UClass* Z_Construct_UClass_UAddGraphNodeTool_NoRegister()
{
	return UAddGraphNodeTool::StaticClass();
}
struct Z_Construct_UClass_UAddGraphNodeTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Add a node to a Blueprint or Material graph.\n * Uses dynamic class resolution - accepts any material expression or Blueprint node class name.\n *\n * For Materials: Use expression class names like \"MaterialExpressionAdd\",\n * \"MaterialExpressionSceneTexture\", \"MaterialExpressionCollectionParameter\", etc.\n *\n * For Blueprints: Use node class names like \"K2Node_CallFunction\",\n * \"K2Node_VariableGet\", \"K2Node_Event\", etc.\n */" },
#endif
		{ "IncludePath", "Tools/Write/AddGraphNodeTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/AddGraphNodeTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a node to a Blueprint or Material graph.\nUses dynamic class resolution - accepts any material expression or Blueprint node class name.\n\nFor Materials: Use expression class names like \"MaterialExpressionAdd\",\n\"MaterialExpressionSceneTexture\", \"MaterialExpressionCollectionParameter\", etc.\n\nFor Blueprints: Use node class names like \"K2Node_CallFunction\",\n\"K2Node_VariableGet\", \"K2Node_Event\", etc." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddGraphNodeTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAddGraphNodeTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddGraphNodeTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddGraphNodeTool_Statics::ClassParams = {
	&UAddGraphNodeTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddGraphNodeTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddGraphNodeTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAddGraphNodeTool()
{
	if (!Z_Registration_Info_UClass_UAddGraphNodeTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddGraphNodeTool.OuterSingleton, Z_Construct_UClass_UAddGraphNodeTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAddGraphNodeTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAddGraphNodeTool>()
{
	return UAddGraphNodeTool::StaticClass();
}
UAddGraphNodeTool::UAddGraphNodeTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAddGraphNodeTool);
UAddGraphNodeTool::~UAddGraphNodeTool() {}
// End Class UAddGraphNodeTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddGraphNodeTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAddGraphNodeTool, UAddGraphNodeTool::StaticClass, TEXT("UAddGraphNodeTool"), &Z_Registration_Info_UClass_UAddGraphNodeTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddGraphNodeTool), 3042627654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddGraphNodeTool_h_1718911849(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddGraphNodeTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddGraphNodeTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
