using UnrealBuildTool;

public class SheepyStudiosTarget : TargetRules
{
	public SheepyStudiosTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("SheepyStudios");
	}
}
