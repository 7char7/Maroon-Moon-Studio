using UnrealBuildTool;

public class SheepyStudiosServerTarget : TargetRules
{
	public SheepyStudiosServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("SheepyStudios");
	}
}
