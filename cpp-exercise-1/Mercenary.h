#pragma once
#include <iostream>
#include <format>
#include <Windows.h>

using namespace std;

class Mercenary
{
private:
	
	// Player base variables
	string mName;
	int mHP = 0;

	// Variables to check if the player is a specific class
	bool mIsMedic = false;
	bool mIsEngineer = false;

	// Engineer specific variables
	int mMetal = 0;
	int mSentryHP = 0;
	int mSentryDMG = 0;

	// The position variables are used by the MovementState class
	int posX = 0;
	int posY = 0;
	int movementCounter = 0;
	
	// Weapon variables
	string mPrimaryWeapon = "Placeholder Primary";
	string mSecondaryWeapon = "Placeholder Secondary";
	string mMeleeWeapon = "Crowbar";

	int mPrimaryDMG = 1;
	int mSecondaryDMG = 1;
	int mMeleeDMG = 1;

	// Player progression variables
	int mLVL = 1;
	float mXP = 0.0f;

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
	int GetXP();
	void SetXP(float NewXP);
	int GetLevel();
	void SetLevel(int NewLevel);
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

	int GetPrimaryDMG();
	int GetSecondaryDMG();
	int GetMeleeDMG();

	void SetPrimaryDMG(int NewPrimaryDMG);
	void SetSecondaryDMG(int NewSecondaryDMG);
	void SetMeleeDMG(int NewMeleeDMG);

	bool IsEngineer();
	bool IsMedic();

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

