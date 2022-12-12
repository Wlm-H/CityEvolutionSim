#pragma once
#include "window/window.hpp"
#include "terrain/terrain.hpp"

typedef struct {
	int WIDTH;
	int HEIGHT;
	const char* filename;
	//threadpool* threads;
} terrainWindowArgs;

typedef struct {
	windowHierarchy* win;
	Terrain* terrain;
} drawTerrainArgs;

void multiThreadDrawTerrain(void* args);
void drawTerrain(windowHierarchy* win, Terrain* terrain);

void multiThreadLaunchTerrainWindow(void* args);
void launchTerrainWindow(int width, int height, const char* filename);