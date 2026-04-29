// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Material/QueryMaterialInstanceTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryMaterialInstanceTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryMaterialInstanceTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryMaterialInstanceTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryMaterialInstanceTool
void UQueryMaterialInstanceTool::StaticRegisterNativesUQueryMaterialInstanceTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryMaterialInstanceTool);
UClass* Z_Construct_UClass_UQueryMaterialInstanceTool_NoRegister()
{
	return UQueryMaterialInstanceTool::StaticClass();
}
struct Z_Construct_UClass_UQueryMaterialInstanceTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Material/QueryMaterialInstanceTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Material/QueryMaterialInstanceTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryMaterialInstanceTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryMaterialInstanceTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryMaterialInstanceTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryMaterialInstanceTool_Statics::ClassParams = {
	&UQueryMaterialInstanceTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryMaterialInstanceTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryMaterialInstanceTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryMaterialInstanceTool()
{
	if (!Z_Registration_Info_UClass_UQueryMaterialInstanceTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryMaterialInstanceTool.OuterSingleton, Z_Construct_UClass_UQueryMaterialInstanceTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryMaterialInstanceTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryMaterialInstanceTool>()
{
	return UQueryMaterialInstanceTool::StaticClass();
}
UQueryMaterialInstanceTool::UQueryMaterialInstanceTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryMaterialInstanceTool);
UQueryMaterialInstanceTool::~UQueryMaterialInstanceTool() {}
// End Class UQueryMaterialInstanceTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialInstanceTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryMaterialInstanceTool, UQueryMaterialInstanceTool::StaticClass, TEXT("UQueryMaterialInstanceTool"), &Z_Registration_Info_UClass_UQueryMaterialInstanceTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryMaterialInstanceTool), 3066006380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialInstanceTool_h_2315751820(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialInstanceTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_QueryMaterialInstanceTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
