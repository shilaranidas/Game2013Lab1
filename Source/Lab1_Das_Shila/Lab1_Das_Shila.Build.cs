// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab1_Das_Shila : ModuleRules
{
	public Lab1_Das_Shila(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
