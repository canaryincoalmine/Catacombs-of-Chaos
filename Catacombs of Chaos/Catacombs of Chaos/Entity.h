#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Entity
{
public:
	Entity(int p_x, int p_y, SDL_Texture* p_tex);
protected:
	int x, y;
	SDL_Rect currentFrame;
	SDL_Texture* tex;
};

