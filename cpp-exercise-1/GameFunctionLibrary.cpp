#include "GameFunctionLibrary.h"

void GameFunctionLibrary::PlayerHUD(Mercenary& PlayerRef)
{
	cout << "=======================================" << endl;
	cout << "Name: " << PlayerRef.GetName() << endl;
	cout << "HP: " << PlayerRef.GetHP() << endl;
	cout << "Primary & DMG: " << PlayerRef.GetPrimaryWpName() << " / " << PlayerRef.GetPrimaryDMG() << endl;
	cout << "Secondary & DMG: " << PlayerRef.GetSecondaryWpName() << " / " << PlayerRef.GetSecondaryDMG() << endl;
	cout << "Melee & DMG: " << PlayerRef.GetMeleeWpName() << " / " << PlayerRef.GetMeleeDMG() << endl;
	cout << "=======================================" << endl;
	cout << "Player Position X = " << PlayerRef.GetPos('X') << " and Y = " << PlayerRef.GetPos('Y') << endl;
}

void GameFunctionLibrary::MachineHUD(Machine& MachineRef)
{
	cout << "=======================================" << endl;
	cout << "Name: " << MachineRef.GetName() << endl;
	cout << "HP: " << MachineRef.GetHP() << endl;
	cout << "Primary & DMG: " << MachineRef.GetPrimaryWpName() << " / " << MachineRef.GetPrimaryDMG() << endl;
	cout << "Secondary & DMG: " << MachineRef.GetSecondaryWpName() << " / " << MachineRef.GetSecondaryDMG() << endl;
	cout << "Melee & DMG: " << MachineRef.GetMeleeWpName() << " / " << MachineRef.GetMeleeDMG() << endl;
	cout << "=======================================" << endl;
}

void GameFunctionLibrary::MovementStateHUD(Mercenary& PlayerRef)
{
	PlayerHUD(PlayerRef);  
}

void GameFunctionLibrary::BattleStateHUD(Mercenary& PlayerRef, Machine& MachineRef)
{
	cout << "\n============================== BATTLE STATUS ==============================\n";

	// 1. Header (Standard 50-character gap)
	cout << setw(6) << " ";
	cout << left << setw(34) << "PLAYER";
	cout << "ENEMY" << endl;

	// 2. Names
	cout << "Name: " << left << setw(34) << PlayerRef.GetName();
	cout << MachineRef.GetName() << endl;

	// 3. HP
	cout << "HP: " << left << setw(36) << PlayerRef.GetHP();
	cout << MachineRef.GetHP() << endl;

	//4. Primary Weapon & DMG
	cout << "Primary & DMG: " << left << setw(10) << PlayerRef.GetPrimaryWpName() << " / " << PlayerRef.GetPrimaryDMG();
	cout << MachineRef.GetPrimaryWpName() << " / " << MachineRef.GetPrimaryDMG() << endl;

	cout << "===========================================================================\n";
}

void GameFunctionLibrary::IntroText()
{
	cout << endl;
	cout << "	Made by" << endl;

	cout << R"(

	 _  _ _ _           _           _          ___ _ 
	| \| (_) |_ _ _ ___| |_  ___ __| |__ _ ___|_  ) |
	| .` | |  _| '_/ _ \ ' \/ -_) _` / _` / -_)/ /| |
	|_|\_|_|\__|_| \___/_||_\___\__,_\__, \___/___|_|
	                                  |___/                        
    )" << endl;


	Sleep(3000);
	system("CLS");
}


void GameFunctionLibrary::TF2Logo()
{
	cout << endl;
	cout << R"(		
                                                                                                                                                                          
	 _____                     ______         _                       _____ 
	|_   _|                    |  ___|       | |                     / __  \
	  | | ___  __ _ _ __ ___   | |_ ___  _ __| |_ _ __ ___  ___ ___  `' / /'
	  | |/ _ \/ _` | '_ ` _ \  |  _/ _ \| '__| __| '__/ _ \/ __/ __|   / /  
	  | |  __/ (_| | | | | | | | || (_) | |  | |_| | |  __/\__ \__ \ ./ /___
	  \_/\___|\__,_|_| |_| |_| \_| \___/|_|   \__|_|  \___||___/___/ \_____/
                                                                                                                                                
	)" << endl;

}