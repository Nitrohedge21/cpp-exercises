#pragma once
#include "Mercenary.h"
#include <iostream>
#include <format>
#include <Windows.h>

using namespace std;

class Machine : public Mercenary
{

private:

	// Base machine stats
	Machine(string MachineName, int MachineHP, string PrimaryWp, int PrimaryDMG, string SecondaryWp, int SecondaryDMG, string MeleeWp, int MeleeDMG);

	int MachineArrayLength = 9;

public:

	Machine();

	// Machine class initializer functions (Not sure if this is how I want to do this)
	
	void CaptainPunch();
	void FanScout();
	void HeavyChamp();
	void DemoknightBot();
	void BBoxSoldier();
	void SniperBot();
	void MLScout();
	void PyroBot();
	void SoldierBot();

	// General functions
	void GetRandomMachine();
	
};

