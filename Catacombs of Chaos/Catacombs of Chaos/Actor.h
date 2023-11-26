#pragma once
#include "Entity.h"
class Actor : public Entity
{
public:
	enum State {
		EActive,
		EPaused,
		EDead
	};

	Actor(class Game* game);
	virtual ~Actor();

protected:
	//The actor's state
	State mState;
};

