/*-------------------------------------------------------------------------------

	BARONY
	File: init.hpp
	Desc: prototypes for init.cpp, various setup/teardown functions

	Copyright 2013-2016 (c) Turning Wheel LLC, all rights reserved.
	See LICENSE for details.

-------------------------------------------------------------------------------*/
#pragma once

int initApp(const char *const title);
int deinitApp();
bool initVideo();
bool changeVideoMode();
void generatePolyModels(int start, int end, bool forceCacheRebuild);
void generateVBOs(int start, int end);
int loadLanguage(char const * const lang);
int reloadLanguage();
void freeLanguages();
