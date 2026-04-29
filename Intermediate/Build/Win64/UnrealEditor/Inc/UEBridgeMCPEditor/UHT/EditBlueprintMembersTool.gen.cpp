// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/EditBlueprintMembersTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditBlueprintMembersTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditBlueprintMembersTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditBlueprintMembersTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UEditBlueprintMembersTool
void UEditBlueprintMembersTool::StaticRegisterNativesUEditBlueprintMembersTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditBlueprintMembersTool);
UClass* Z_Construct_UClass_UEditBlueprintMembersTool_NoRegister()
{
	return UEditBlueprintMembersTool::StaticClass();
}
struct Z_Construct_UClass_UEditBlueprintMembersTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint member editing tool for variables, functions, and event dispatchers.\n * Supports batched actions with transactional rollback semantics.\n */" },
		{ "IncludePath", "Tools/Blueprint/EditBlueprintMembersTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/EditBlueprintMembersTool.h" },
		{ "ToolTip", "Blueprint member editing tool for variables, functions, and event dispatchers.\nSupports batched actions with transactional rollback semantics." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditBlueprintMembersTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditBlueprintMembersTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditBlueprintMembersTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditBlueprintMembersTool_Statics::ClassParams = {
	&UEditBlueprintMembersTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditBlueprintMembersTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditBlueprintMembersTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditBlueprintMembersTool()
{
	if (!Z_Registration_Info_UClass_UEditBlueprintMembersTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditBlueprintMembersTool.OuterSingleton, Z_Construct_UClass_UEditBlueprintMembersTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditBlueprintMembersTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UEditBlueprintMembersTool>()
{
	return UEditBlueprintMembersTool::StaticClass();
}
UEditBlueprintMembersTool::UEditBlueprintMembersTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditBlueprintMembersTool);
UEditBlueprintMembersTool::~UEditBlueprintMembersTool() {}
// End Class UEditBlueprintMembersTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintMembersTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditBlueprintMembersTool, UEditBlueprintMembersTool::StaticClass, TEXT("UEditBlueprintMembersTool"), &Z_Registration_Info_UClass_UEditBlueprintMembersTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditBlueprintMembersTool), 195020695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintMembersTool_h_3938938318(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintMembersTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintMembersTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
