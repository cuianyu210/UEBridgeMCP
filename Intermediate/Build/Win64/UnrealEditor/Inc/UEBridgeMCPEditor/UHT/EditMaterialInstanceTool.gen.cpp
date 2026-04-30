// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Material/EditMaterialInstanceTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditMaterialInstanceTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditMaterialInstanceTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditMaterialInstanceTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UEditMaterialInstanceTool
void UEditMaterialInstanceTool::StaticRegisterNativesUEditMaterialInstanceTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditMaterialInstanceTool);
UClass* Z_Construct_UClass_UEditMaterialInstanceTool_NoRegister()
{
	return UEditMaterialInstanceTool::StaticClass();
}
struct Z_Construct_UClass_UEditMaterialInstanceTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Material/EditMaterialInstanceTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Material/EditMaterialInstanceTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditMaterialInstanceTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditMaterialInstanceTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMaterialInstanceTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditMaterialInstanceTool_Statics::ClassParams = {
	&UEditMaterialInstanceTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditMaterialInstanceTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditMaterialInstanceTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditMaterialInstanceTool()
{
	if (!Z_Registration_Info_UClass_UEditMaterialInstanceTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditMaterialInstanceTool.OuterSingleton, Z_Construct_UClass_UEditMaterialInstanceTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditMaterialInstanceTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UEditMaterialInstanceTool>()
{
	return UEditMaterialInstanceTool::StaticClass();
}
UEditMaterialInstanceTool::UEditMaterialInstanceTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditMaterialInstanceTool);
UEditMaterialInstanceTool::~UEditMaterialInstanceTool() {}
// End Class UEditMaterialInstanceTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditMaterialInstanceTool, UEditMaterialInstanceTool::StaticClass, TEXT("UEditMaterialInstanceTool"), &Z_Registration_Info_UClass_UEditMaterialInstanceTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditMaterialInstanceTool), 3809922912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceTool_h_791533274(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Material_EditMaterialInstanceTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
