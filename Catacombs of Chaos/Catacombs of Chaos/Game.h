#include <SDL.h>

#pragma once
class Game
{
public:
	Game();
	bool Initialize();
	void RunLoop();
	void Shutdown();

private:
	bool mIsRunning;

};

