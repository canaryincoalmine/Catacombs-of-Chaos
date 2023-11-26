#pragma once
class Actor
{
public:
	enum State {
		EActive,
		EPaused,
		EDead
	};

	Actor(class Game* game);
	virtual ~Actor();

private:
	//The actor's state
	State mState;
};

