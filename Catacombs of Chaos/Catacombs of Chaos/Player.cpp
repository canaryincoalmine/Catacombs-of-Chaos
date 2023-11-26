#include "Player.h"

Player::Player(class Game* game, class Race p_Race, class CharacterClass p_Class) : Actor(game), playerRace(p_Race), playerClass(p_Class) {

}

class Race Player::getRace() {
	return playerRace;
}

class CharacterClass Player::getClass() {
	return playerClass;
}