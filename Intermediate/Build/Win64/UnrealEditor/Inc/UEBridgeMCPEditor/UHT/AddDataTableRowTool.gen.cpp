// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/AddDataTableRowTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddDataTableRowTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddDataTableRowTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddDataTableRowTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAddDataTableRowTool
void UAddDataTableRowTool::StaticRegisterNativesUAddDataTableRowTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddDataTableRowTool);
UClass* Z_Construct_UClass_UAddDataTableRowTool_NoRegister()
{
	return UAddDataTableRowTool::StaticClass();
}
struct Z_Construct_UClass_UAddDataTableRowTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Add a row to a DataTable.\n */" },
#endif
		{ "IncludePath", "Tools/Write/AddDataTableRowTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/AddDataTableRowTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a row to a DataTable." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddDataTableRowTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAddDataTableRowTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddDataTableRowTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddDataTableRowTool_Statics::ClassParams = {
	&UAddDataTableRowTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddDataTableRowTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddDataTableRowTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAddDataTableRowTool()
{
	if (!Z_Registration_Info_UClass_UAddDataTableRowTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddDataTableRowTool.OuterSingleton, Z_Construct_UClass_UAddDataTableRowTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAddDataTableRowTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAddDataTableRowTool>()
{
	return UAddDataTableRowTool::StaticClass();
}
UAddDataTableRowTool::UAddDataTableRowTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAddDataTableRowTool);
UAddDataTableRowTool::~UAddDataTableRowTool() {}
// End Class UAddDataTableRowTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddDataTableRowTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAddDataTableRowTool, UAddDataTableRowTool::StaticClass, TEXT("UAddDataTableRowTool"), &Z_Registration_Info_UClass_UAddDataTableRowTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddDataTableRowTool), 1380508300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddDataTableRowTool_h_2142985084(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddDataTableRowTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddDataTableRowTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
