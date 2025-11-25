using UnrealBuildTool;

public class SheepyStudiosEditorTarget : TargetRules
{
	public SheepyStudiosEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("SheepyStudios");
	}
}
