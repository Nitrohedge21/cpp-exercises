#pragma once
class BaseState
{
public:
	BaseState();

	void InitializeState();	// This is overridden by the derived/child classes

	// This will be used to check if the chosen state is over or not.
	bool isOver = false;
};

