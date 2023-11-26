#include "Entity.h"
Entity::Entity(int p_x, int p_y, SDL_Texture* p_tex) : x(p_x), y(p_y), tex(p_tex) {
	currentFrame.x = p_x;
	currentFrame.y = p_y;
	currentFrame.w = 64;
	currentFrame.h = 64;
}
