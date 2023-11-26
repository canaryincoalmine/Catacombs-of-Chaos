#include "Game.h"
#include "Random.h"

Game::Game() : mIsRunning(true) {

}

bool Game::Initialize() {

	Random::Init();

	return true;
}

void Game::RunLoop()
{
	while (mIsRunning)
	{
		//add these functions later
		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}

void Game::Shutdown() {

}