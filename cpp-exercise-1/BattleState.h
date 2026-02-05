#pragma once
#include "BaseState.h"
#include "Mercenary.h"
#include "GameState.h"
#include "MovementState.h"
#include <conio.h>

class BattleState : public BaseState
{
public:
	BattleState();

	char keyInput;
	// Need to grab an integer value input from the user and then choose the battle action accordingly.

	void InitializeState(Mercenary& PlayerRef);

};

