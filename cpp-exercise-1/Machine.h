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

public:

	Machine();


};

