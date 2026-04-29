// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/SpawnActorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnActorTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_USpawnActorTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_USpawnActorTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class USpawnActorTool
void USpawnActorTool::StaticRegisterNativesUSpawnActorTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnActorTool);
UClass* Z_Construct_UClass_USpawnActorTool_NoRegister()
{
	return USpawnActorTool::StaticClass();
}
struct Z_Construct_UClass_USpawnActorTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Spawn an actor in the currently open level.\n */" },
		{ "IncludePath", "Tools/Write/SpawnActorTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/SpawnActorTool.h" },
		{ "ToolTip", "Spawn an actor in the currently open level." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnActorTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpawnActorTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnActorTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnActorTool_Statics::ClassParams = {
	&USpawnActorTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnActorTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnActorTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnActorTool()
{
	if (!Z_Registration_Info_UClass_USpawnActorTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnActorTool.OuterSingleton, Z_Construct_UClass_USpawnActorTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnActorTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<USpawnActorTool>()
{
	return USpawnActorTool::StaticClass();
}
USpawnActorTool::USpawnActorTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnActorTool);
USpawnActorTool::~USpawnActorTool() {}
// End Class USpawnActorTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnActorTool, USpawnActorTool::StaticClass, TEXT("USpawnActorTool"), &Z_Registration_Info_UClass_USpawnActorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnActorTool), 3155753209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_1318984529(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SpawnActorTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
