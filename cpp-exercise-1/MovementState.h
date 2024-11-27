#pragma once
#include "BaseState.h"
#include "Mercenary.h"
#include "GameState.h"
#include <conio.h>

class MovementState : public BaseState
{
public:
	MovementState();

	char keyInput;
	int asciiValue;

	void InitializeState(Mercenary& PlayerRef);

	void ProgressCheck(Mercenary& PlayerRef, GameState& GameStateRef);
	
};

