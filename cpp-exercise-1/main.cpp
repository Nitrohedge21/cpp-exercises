#include <iostream>
#include <format>
#include <Windows.h>
#include "Mercenary.h"
#include "GameState.h"
#include "MovementState.h"
#include "BattleState.h"
#include "GameFunctionLibrary.h"
#include "GlobalFunctions.h"

using namespace std;

// Main needs to be kept as clean as possible.

int main()
{

	GameFunctionLibrary FunctionLibraryRef;
	//FunctionLibraryRef.IntroText();
	FunctionLibraryRef.TF2Logo();

	Mercenary TestMercenary;
	// Game Begins, a blank mercenary class gets created.
	// User is welcomed by a message and asked for input to choose a class
	TestMercenary.SetPlayerClass();
	Sleep(1000);
	cout << "The game shall begin now!" << endl;
	Sleep(1000);

	// The GameState object gets created AFTER the player has
	// succesfully chosen a mercenary class.
	GameState Game;

	Machine* nMachine = new Machine;	// New instance of an object being created
	nMachine->GetRandomMachine();		// Have to decide on which approach I want to take

	MovementState MoveState;
	BattleState BattleState;

	while (!Game.isOver)    // While the game isn't over, do the following.
	{

		// The system and playerHUD lines are required for the game
		system("CLS");
		FunctionLibraryRef.TF2Logo();
		//FunctionLibraryRef.MovementStateHUD(TestMercenary);

		FunctionLibraryRef.BattleStateHUD(TestMercenary,*nMachine);
		//BattleState.isOver = true;


		MoveState.InitializeState(TestMercenary);
		MoveState.ProgressCheck(TestMercenary, Game);
	}
}


