#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__
#include "SDL/include/SDL.h"

// TODO 1: Create the declaration of ModuleWindow class
class ModuleWindow: public Module
{
public:

	bool Init() { return true; }
	bool CleanUp() { return true; }
};

#endif // __ModuleWindow_H__