/**
 *  VDR HbbTV Plugin
 *
 *  cefhbbtv.cpp
 *
 *  (c) 2019 Robert Hannebauer
 *
 * This code is distributed under the terms and conditions of the
 * GNU GENERAL PUBLIC LICENSE. See the file COPYING for details.
 *
 **/

#include "cefhbbtv.h"
#include "cefhbbtvpage.h"

cPluginCefHbbtv::cPluginCefHbbtv() {
    // Initialize any member variables here.
    // DON'T DO ANYTHING ELSE THAT MAY HAVE SIDE EFFECTS, REQUIRE GLOBAL
    // VDR OBJECTS TO EXIST OR PRODUCE ANY OUTPUT!
}

cPluginCefHbbtv::~cPluginCefHbbtv() {
    // Clean up after yourself!
}

const char *cPluginCefHbbtv::CommandLineHelp() {
    // Return a string that describes all known command line options.
    return nullptr;
}

bool cPluginCefHbbtv::ProcessArgs(int argc, char *argv[]) {
    // Implement command line argument processing here if applicable.
    return true;
}

bool cPluginCefHbbtv::Initialize() {
    // Initialize any background activities the plugin shall perform.
    return true;
}

bool cPluginCefHbbtv::Start() {
    // Start any background activities the plugin shall perform.
    return true;
}

void cPluginCefHbbtv::Stop() {
    // Stop any background activities the plugin is performing.
}

void cPluginCefHbbtv::Housekeeping() {
    // Perform any cleanup or other regular tasks.
}

void cPluginCefHbbtv::MainThreadHook() {
    // Perform actions in the context of the main program thread.
    // WARNING: Use with great care - see PLUGINS.html!
}

cString cPluginCefHbbtv::Active() {
    // Return a message string if shutdown should be postponed
    return nullptr;
}

time_t cPluginCefHbbtv::WakeupTime() {
    // Return custom wakeup time for shutdown script
    return 0;
}

cOsdObject *cPluginCefHbbtv::MainMenuAction() {
    return new CefHbbtvPage("http://hbbtv.daserste.de/index.php");
    // return new CefHbbtvPage("itv.ard.de/ardstart/index.html");
}

cMenuSetupPage *cPluginCefHbbtv::SetupMenu() {
    // Return a setup menu in case the plugin supports one.
    return nullptr;
}

bool cPluginCefHbbtv::SetupParse(const char *Name, const char *Value) {
    // Parse your own setup parameters and store their values.
    return false;
}

bool cPluginCefHbbtv::Service(const char *Id, void *Data) {
    // Handle custom service requests from other plugins
    return false;
}

const char **cPluginCefHbbtv::SVDRPHelpPages() {
    // Return help text for SVDRP commands this plugin implements
    return nullptr;
}

cString cPluginCefHbbtv::SVDRPCommand(const char *Command, const char *Option, int &ReplyCode) {
    // Process SVDRP commands this plugin implements
    return NULL;
}

VDRPLUGINCREATOR(cPluginCefHbbtv); // Don't touch this!
