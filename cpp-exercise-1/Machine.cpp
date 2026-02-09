#include "Machine.h"

Machine::Machine() {/* This is the default constructor that just creates the Machine Object*/ }

Machine::Machine(string MachineName, int MachineHP, string PrimaryWp, int PrimaryDMG, string SecondaryWp, int SecondaryDMG, string MeleeWp, int MeleeDMG)
{
	SetName(MachineName);
	SetHP(MachineHP);
	SetPrimaryWpName(PrimaryWp);
	SetPrimaryDMG(PrimaryDMG);
	SetSecondaryWpName(SecondaryWp);
	SetSecondaryDMG(SecondaryDMG);
	SetMeleeWpName(MeleeWp);
	SetMeleeDMG(MeleeDMG);
}

void Machine::GetRandomMachine()	// This could be potentially done in a different way but this is how I was able to do it myself.
{
	srand(time(0));
	int ChosenValue = rand() % MachineArrayLength;

	switch (ChosenValue)
	{
	case 0:
		CaptainPunch();
		break;
	case 1:
		FanScout();
		break;
	case 2:
		HeavyChamp();
		break;
	case 3:
		DemoknightBot();
		break;
	case 4:
		BBoxSoldier();
		break;
	case 5:
		SniperBot();
		break;
	case 6:
		MLScout();
		break;
	case 7:
		PyroBot();
		break;
	case 8:
		SoldierBot();
		break;
	}
}

void Machine::CaptainPunch()
{
	srand(time(0));
	SetName("Captain Punch");
	SetHP(300);
	SetPrimaryWpName("NONE");
	SetPrimaryDMG(0);
	SetSecondaryWpName("Cap's Shotgun");
	SetSecondaryDMG(rand() % 15 + 5);
	SetMeleeWpName("Fists of Steel");
	SetMeleeDMG(rand() % 10 + 6);
}

void Machine::FanScout()
{
	srand(time(0));
	SetName("Force-A-Nature Scout");
	SetHP(120);
	SetPrimaryWpName("Force-A-Nature");
	SetPrimaryDMG(rand() % 15 + 2);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Sandman");
	SetMeleeDMG(rand() % 10 + 4);
}

void Machine::HeavyChamp()
{
	srand(time(0));
	SetName("Heavyweight Champ");
	SetHP(300);
	SetPrimaryWpName("The Panic Attack");
	SetPrimaryDMG(rand() % 15 + 5);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Gloves of Running Urgently");
	SetMeleeDMG(rand() % 10 + 4);
}

void Machine::DemoknightBot()
{

	srand(time(0));
	SetName("Demoknight");
	SetHP(200);
	SetPrimaryWpName("Chargin' Targe");
	SetPrimaryDMG(rand() % 8 + 5);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Eyelander");
	SetMeleeDMG(rand() % 10 + 5);

}

void Machine::BBoxSoldier()
{

	srand(time(0));
	SetName("Black Box Soldier");
	SetHP(200);
	SetPrimaryWpName("BlackBox");
	SetPrimaryDMG(rand() % 17 + 10);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Shovel");
	SetMeleeDMG(rand() % 15 + 5);

}

void Machine::SniperBot()
{

	srand(time(0));
	SetName("Sniper Bot");
	SetHP(120);
	SetPrimaryWpName("Sniper Rifle");
	SetPrimaryDMG(rand() % 15 + 2);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Kukri");
	SetMeleeDMG(rand() % 10 + 5);

}

void Machine::MLScout()
{

	srand(time(0));
	SetName("Minor League Scout");
	SetHP(120);
	SetPrimaryWpName("Force-A-Nature");
	SetPrimaryDMG(rand() % 15 + 2);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Sandman");
	SetMeleeDMG(rand() % 10 + 4);

}

void Machine::PyroBot()
{


	srand(time(0));
	SetName("Pyro Bot");
	SetHP(170);
	SetPrimaryWpName("Scorch Shot");
	SetPrimaryDMG(rand() % 15 + 2);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Fireaxe");
	SetMeleeDMG(rand() % 10 + 5);
}

void Machine::SoldierBot()
{

	srand(time(0));
	SetName("Soldier Bot");
	SetHP(180);
	SetPrimaryWpName("Rocket Launcher");
	SetPrimaryDMG(rand() % 15 + 10);
	SetSecondaryWpName("NONE");
	SetSecondaryDMG(0);
	SetMeleeWpName("Shovel");
	SetMeleeDMG(rand() % 10 + 5);

}