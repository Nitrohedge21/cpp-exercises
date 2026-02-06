#include "Machine.h"

Machine::Machine() {/* This is the default constructor that just creates the Machine Object*/ }

Machine::Machine(string MachineName, int MachineHP, string PrimaryWp, int PrimaryDMG, string SecondaryWp, int SecondaryDMG, string MeleeWp, int MeleeDMG)
{
	SetName(MachineName);
	SetHP(MachineHP);
	SetPrimaryWpName(PrimaryWp);
	//mPrimaryDamage = PrimaryDMG;
	SetSecondaryWpName(SecondaryWp);
	//mSecondaryDamage = SecondaryDMG;
	SetMeleeWpName(MeleeWp);
	//mMeleeDamage = MeleeDMG;
}
