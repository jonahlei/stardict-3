#ifndef _STARDICT_ESPEAK_PLUGIN_H_
#define _STARDICT_ESPEAK_PLUGIN_H_

#include "../../src/lib/plugin.h"
#include "../../src/lib/ttsplugin.h"
#include "../../src/lib/iappdirs.h"

extern "C" {
	extern bool stardict_plugin_init(StarDictPlugInObject *obj, IAppDirs* appDirs);
	extern void stardict_plugin_exit(void);
	extern bool stardict_tts_plugin_init(StarDictTtsPlugInObject *obj);
}

#endif
