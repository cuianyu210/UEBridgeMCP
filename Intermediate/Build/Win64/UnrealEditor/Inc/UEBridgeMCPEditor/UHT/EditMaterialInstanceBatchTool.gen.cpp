// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Material/EditMaterialInstanceBatchTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditMaterialInstanceBatchTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditMaterialInstanceBatchTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditMaterialInstanceBatchTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UEditMaterialInstanceBatchTool
void UEditMaterialInstanceBatchTool::StaticRegisterNativesUEditMaterialInstanceBatchTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMaterialInstanceBatchTool);
UClass* Z_Construct_UClass_UEditMaterialInstanceBatchTool_NoRegister()
{
	return UEditMaterialInstanceBatchTool::StaticClass();
}
struct Z_Construct_UClass_UEditMaterialInstanceBatchTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Material/EditMaterialInstanceBatchTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Material/EditMaterialInstanceBatchTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMaterialInstanceBatchTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMaterialInstanceBatchTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMaterialInstanceBatchTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMaterialInstanceBatchTool_Statics::ClassParams = {
	&UEditMaterialInstanceBatchTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMaterialInstanceBatchTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMaterialInstanceBatchTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMaterialInstanceBatchTool()
{
	if (!Z_Registration_Info_UClass_UEditMaterialInstanceBatchTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMaterialInstanceBatchTool.OuterSingleton, Z_Construct_UClass_UEditMaterialInstanceBatchTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMaterialInstanceBatchTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UEditMaterialInstanceBatchTool>()
{
	return UEditMaterialInstanceBatchTool::StaticClass();
}
UEditMaterialInstanceBatchTool::UEditMaterialInstanceBatchTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMaterialInstanceBatchTool);
UEditMaterialInstanceBatchTool::~UEditMaterialInstanceBatchTool() {}
// End Class UEditMaterialInstanceBatchTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceBatchTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditMaterialInstanceBatchTool, UEditMaterialInstanceBatchTool::StaticClass, TEXT("UEditMaterialInstanceBatchTool"), &Z_Registration_Info_UClass_UEditMaterialInstanceBatchTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMaterialInstanceBatchTool), 3804625348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceBatchTool_h_714955063(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceBatchTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceBatchTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
