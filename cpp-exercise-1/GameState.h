#pragma once
#include "BaseState.h"

class GameState : public BaseState
{
public:
	GameState();
	// isOver boolean's default value is false
	// so there is no need to override it here.

	// Not even sure if this is necessary as I could simply 
	// just create a gamestate object through the baseState - 23.11.2024
};

