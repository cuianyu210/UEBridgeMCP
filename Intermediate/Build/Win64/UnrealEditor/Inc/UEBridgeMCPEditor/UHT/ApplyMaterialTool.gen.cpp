// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Material/ApplyMaterialTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplyMaterialTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UApplyMaterialTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UApplyMaterialTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UApplyMaterialTool
void UApplyMaterialTool::StaticRegisterNativesUApplyMaterialTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApplyMaterialTool);
UClass* Z_Construct_UClass_UApplyMaterialTool_NoRegister()
{
	return UApplyMaterialTool::StaticClass();
}
struct Z_Construct_UClass_UApplyMaterialTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Material/ApplyMaterialTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Material/ApplyMaterialTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplyMaterialTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UApplyMaterialTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplyMaterialTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UApplyMaterialTool_Statics::ClassParams = {
	&UApplyMaterialTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UApplyMaterialTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UApplyMaterialTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UApplyMaterialTool()
{
	if (!Z_Registration_Info_UClass_UApplyMaterialTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApplyMaterialTool.OuterSingleton, Z_Construct_UClass_UApplyMaterialTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UApplyMaterialTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UApplyMaterialTool>()
{
	return UApplyMaterialTool::StaticClass();
}
UApplyMaterialTool::UApplyMaterialTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UApplyMaterialTool);
UApplyMaterialTool::~UApplyMaterialTool() {}
// End Class UApplyMaterialTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_ApplyMaterialTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UApplyMaterialTool, UApplyMaterialTool::StaticClass, TEXT("UApplyMaterialTool"), &Z_Registration_Info_UClass_UApplyMaterialTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApplyMaterialTool), 378013178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_ApplyMaterialTool_h_4044661826(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_ApplyMaterialTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_ApplyMaterialTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
