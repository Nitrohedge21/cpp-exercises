#pragma once
#include "Mercenary.h"
#include "Machine.h"
#include <iomanip>

class GameFunctionLibrary
{

public:

	// HUD Functions
	void PlayerHUD(Mercenary& PlayerRef);

	void MachineHUD(Machine& MachineRef);

	void MovementStateHUD(Mercenary& PlayerRef);

	void BattleStateHUD(Mercenary& PlayerRef, Machine& MachineRef);

	void IntroText();

	void TF2Logo();

};

