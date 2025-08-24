// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Azerlite : ModuleRules
{
	public Azerlite(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "GameplayAbilities", "GameplayTasks", "GameplayTags" });
	}
}
