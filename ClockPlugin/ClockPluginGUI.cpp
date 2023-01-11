#include "pch.h"
#include "ClockPlugin.h"

/* Plugin Settings Window code here
std::string ClockPlugin::GetPluginName() {
	return "ClockPlugin";
}

void ClockPlugin::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> ClockPlugin
void ClockPlugin::RenderSettings() {
	ImGui::TextUnformatted("ClockPlugin plugin settings");
}
*/

/*
// Do ImGui rendering here
void ClockPlugin::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string ClockPlugin::GetMenuName()
{
	return "clockplugin";
}

// Title to give the menu
std::string ClockPlugin::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void ClockPlugin::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool ClockPlugin::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool ClockPlugin::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void ClockPlugin::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void ClockPlugin::OnClose()
{
	isWindowOpen_ = false;
}
*/
