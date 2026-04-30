// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/References/FindReferencesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindReferencesTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UFindReferencesTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UFindReferencesTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UFindReferencesTool
void UFindReferencesTool::StaticRegisterNativesUFindReferencesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindReferencesTool);
UClass* Z_Construct_UClass_UFindReferencesTool_NoRegister()
{
	return UFindReferencesTool::StaticClass();
}
struct Z_Construct_UClass_UFindReferencesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool for finding references to assets, Blueprint variables, and nodes.\n *\n * Supports three reference types:\n * - \"asset\": Find all assets that reference the given asset\n * - \"property\": Find where a Blueprint variable is used within its own graphs\n * - \"node\": Find all usages of a specific node type or function call\n *\n * Uses UE5's Find in Blueprints (FiB) cache for faster searching when available.\n */" },
#endif
		{ "IncludePath", "Tools/References/FindReferencesTool.h" },
		{ "ModuleRelativePath", "Public/Tools/References/FindReferencesTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool for finding references to assets, Blueprint variables, and nodes.\n\nSupports three reference types:\n- \"asset\": Find all assets that reference the given asset\n- \"property\": Find where a Blueprint variable is used within its own graphs\n- \"node\": Find all usages of a specific node type or function call\n\nUses UE5's Find in Blueprints (FiB) cache for faster searching when available." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindReferencesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFindReferencesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindReferencesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindReferencesTool_Statics::ClassParams = {
	&UFindReferencesTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFindReferencesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UFindReferencesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFindReferencesTool()
{
	if (!Z_Registration_Info_UClass_UFindReferencesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindReferencesTool.OuterSingleton, Z_Construct_UClass_UFindReferencesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFindReferencesTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UFindReferencesTool>()
{
	return UFindReferencesTool::StaticClass();
}
UFindReferencesTool::UFindReferencesTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFindReferencesTool);
UFindReferencesTool::~UFindReferencesTool() {}
// End Class UFindReferencesTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_References_FindReferencesTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFindReferencesTool, UFindReferencesTool::StaticClass, TEXT("UFindReferencesTool"), &Z_Registration_Info_UClass_UFindReferencesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindReferencesTool), 1874124503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_References_FindReferencesTool_h_202261670(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_References_FindReferencesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_References_FindReferencesTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
