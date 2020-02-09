/**
 *  VDR HbbTV Plugin
 *
 *  cefhbbtv.h
 *
 *  (c) 2019 Robert Hannebauer
 *
 * This code is distributed under the terms and conditions of the
 * GNU GENERAL PUBLIC LICENSE. See the file COPYING for details.
 *
 **/

#ifndef CEFHBBTV_H
#define CEFHBBTV_H

#include <vdr/plugin.h>
#include "lib/browser.h"

static const char *VERSION = "0.0.1";
static const char *DESCRIPTION = "Enter description for 'cefhbbtv' plugin";
static const char *MAINMENUENTRY = "CefHbbTV";

class cPluginCefHbbtv : public cPlugin {

private:

public:
    cPluginCefHbbtv();
    ~cPluginCefHbbtv() override;

    const char *Version() override { return VERSION; }
    const char *Description() override { return DESCRIPTION; }
    const char *MainMenuEntry() override { return MAINMENUENTRY; }
    const char *CommandLineHelp() override;

    bool ProcessArgs(int argc, char *argv[]) override;

    bool Initialize() override;
    bool Start() override;
    void Stop() override;
    void Housekeeping() override;

    void MainThreadHook() override;
    cString Active() override;
    time_t WakeupTime() override;
    cOsdObject *MainMenuAction() override;
    cMenuSetupPage *SetupMenu() override;

    bool SetupParse(const char *Name, const char *Value) override;
    bool Service(const char *Id, void *Data) override;

    const char **SVDRPHelpPages() override;
    cString SVDRPCommand(const char *Command, const char *Option, int &ReplyCode) override;
};

#endif // CEFHBBTV_H
