#pragma once
#include "Actor.h"
#include "CharacterClass.h"
#include "Race.h"
#include "Item.h"
#include <vector>
class Player : public Actor
{
public:
	Player(class Game* game, class Race pRace, class CharacterClass pClass);
	
	class Race getRace();
	class CharacterClass getClass();

private:
	class Race playerRace;
	class CharacterClass playerClass;
	std::vector<Item> playerInventory; //Might be better to use something other than a vector. Not sure what though.
};

