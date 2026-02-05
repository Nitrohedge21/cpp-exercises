#pragma once
#include <iostream>
#include <format>
#include <Windows.h>

using namespace std;

class Mercenary
{
private:
	string mName;
	int mHP;
	float mSpeed;

	// The position variables are used by the MovementState class
	int posX = 0;
	int posY = 0;
	int movementCounter = 0;

public:

	// This one will be used for the class selector logic (switch case)
	Mercenary();
	// This one was used for testing purposes

	Mercenary(string MercName, int MercHP, float MercSpeed);

	// General functions
	string GetName();
	void SetName(string NewName);
	int GetHP();
	void SetHP(int NewHP);
	float GetSpeed();
	void SetSpeed(float NewSpeed);
	void SetPlayerClass();

	// Movement functions
	int GetPos(char ChosenAxis);
	void SetPos(char ChosenAxis, int NewValue);
	int GetMovementCount();
	void SetMovementCount(int NewValue);

	// Mercenary class initializer functions
	void Scout();
	void Soldier();
	void Pyro();
	void Demoman();
	void Heavy();
	void Engineer();
	void Medic();
	void Sniper();
	void Spy();
	void Dev();
};

