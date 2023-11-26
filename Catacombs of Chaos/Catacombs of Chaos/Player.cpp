#include "Player.h"

Player::Player(class Game* game, class Race pRace, class CharacterClass pClass) : Actor(game), playerRace(pRace), playerClass(pClass) {

}

class Race Player::getRace() {
	return playerRace;
}

class CharacterClass Player::getClass() {
	return playerClass;
}