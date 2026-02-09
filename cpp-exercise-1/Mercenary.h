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

	// The position variables are used by the MovementState class
	int posX = 0;
	int posY = 0;
	int movementCounter = 0;
	
	// Weapon stuff
	string mPrimaryWeapon = "Placeholder Primary";
	string mSecondaryWeapon = "Placeholder Secondary";
	string mMeleeWeapon = "Crowbar";

	int mPrimaryDMG = 1;
	int mSecondaryDMG = 1;
	int mMeleeDMG = 1;

	Mercenary(string MercName, int MercHP, float MercSpeed);

public:

	// This one will be used for the class selector logic (switch case)
	Mercenary();
	// This one was used for testing purposes

	// General functions
	string GetName();
	void SetName(string NewName);
	int GetHP();
	void SetHP(int NewHP);
	void SetPlayerClass();

	// Movement functions
	int GetPos(char ChosenAxis);
	void SetPos(char ChosenAxis, int NewValue);
	int GetMovementCount();
	void SetMovementCount(int NewValue);

	// Weapon functions
	string GetPrimaryWpName();
	string GetSecondaryWpName();
	string GetMeleeWpName();

	void SetPrimaryWpName(string NewPrimaryWeapon);
	void SetSecondaryWpName(string NewSecondaryWeapon);
	void SetMeleeWpName(string NewMeleeWeapon);

	int GetPrimaryDMG() { return mPrimaryDMG; }
	int GetSecondaryDMG() { return mSecondaryDMG; }
	int GetMeleeDMG() { return mMeleeDMG; }

	void SetPrimaryDMG(int NewPrimaryDMG) { mPrimaryDMG = NewPrimaryDMG; }
	void SetSecondaryDMG(int NewSecondaryDMG) { mSecondaryDMG = NewSecondaryDMG; }
	void SetMeleeDMG(int NewMeleeDMG) { mMeleeDMG = NewMeleeDMG; }

private:
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

