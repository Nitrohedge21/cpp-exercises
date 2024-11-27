#pragma once
#include "BaseState.h"
#include "Mercenary.h"
#include "GameFunctionLibrary.h"

class GameState : public BaseState
{
public:
	GameState();

	// isOver boolean's default value is false
	// so there is no need to override it here.

	// Wasn't originally sure if this was necessary but
	// Having custom functions and logic setup inside custom states
	// seems like the better approach to keep the main.cpp clean
	void InitializeState(Mercenary& PlayerRef, GameFunctionLibrary FunctionLibraryRef);
};

