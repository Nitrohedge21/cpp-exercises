#include "Mercenary.h"

Mercenary::Mercenary() { /* This is the default constructor that just creates the Mercenary Object*/ }

Mercenary::Mercenary(string NewName, int NewHP, float NewSpeed)
{
	SetName(NewName);
	SetHP(NewHP);
}

string Mercenary::GetName()
{
	string returnValue;

	if (mName != "") 
	{ 
		returnValue = mName;
	}
	else
	{
		// If the mercenary doesn't have a name;
		cout << "\nThe mercenary does not have a name yet.\n";
		cout << "Please give it a name first\n";
		// Get user input and call SetName()
		string LocalNewName;
		cin >> LocalNewName;

		// The line above doesn't work for some reason
		// I believe this is doable through a while loop but couldn't figure out how.
		//if (LocalNewName == "") { cout << "You have to input a valid value"; }


		SetName(LocalNewName);
		GetName();	// Prints out the new name
		
	}
	return returnValue;
}

void Mercenary::SetName(string NewName)
{
	mName = NewName;
}

int Mercenary::GetHP() { return mHP; }

void Mercenary::SetHP(int NewHP) { mHP = NewHP; }

int Mercenary::GetXP() { return mXP; }

void Mercenary::SetXP(float NewXP) { mXP = NewXP; }

int Mercenary::GetLevel() { return mLVL; }

void Mercenary::SetLevel(int NewLVL) { mLVL = NewLVL; }

void Mercenary::SetPlayerClass()
{
	int UserInput;
	
	cout << "Please choose a mercenary class from the following options!" << endl;
	cout << "Scout (1), Soldier (2), Pyro (3), Demoman (4), ";
	cout << "Heavy(5), Engineer(6), Medic(7), Sniper(8), Spy(9)" << endl;

	cin >> UserInput;

	// In my case, if the input isn't an integer, do the following
	// The if statement was provided by ChatGPT.
	if (cin.fail()) 
	{
		cin.clear();                // Clear the error state
		cin.ignore(1000, '\n');     // Discard invalid input from the buffer
		cout << "Invalid input. Please enter a number between 1 and 9." << endl;
		Sleep(2000);
		system("CLS");
		SetPlayerClass();           // Retry
		return;
	}

	switch (UserInput)
	{
	case 1:
		Scout();
		break;
	case 2:
		Soldier();
		break;
	case 3:
		Pyro();
		break;
	case 4:
		Demoman();
		break;
	case 5:
		Heavy();
		break;
	case 6:
		Engineer();
		break;
	case 7:
		Medic();
		break;
	case 8:
		Sniper();
		break;
	case 9:
		Spy();
		break;
	case 69:
		Dev();
		break;
	default:
		cout << "Invalid input. Please choose a valid mercenary class!" << endl;
		Sleep(2000);
		system("CLS");
		SetPlayerClass();
		break;
	}
}

// Movement Functions //
int Mercenary::GetPos(char ChosenAxis)
{
	int returnValue = 0;

	if (ChosenAxis == 'X' || ChosenAxis == 'x') { returnValue = posX; }
	else if (ChosenAxis == 'Y' || ChosenAxis == 'y') { returnValue = posY; }

	return returnValue;
}

void Mercenary::SetPos(char ChosenAxis, int NewValue)
{
	if (ChosenAxis == 'X' || ChosenAxis == 'x') { posX = NewValue; }
	else if (ChosenAxis == 'Y' || ChosenAxis == 'y') { posY = NewValue; }
}

int Mercenary::GetMovementCount() { return movementCounter; }

void Mercenary::SetMovementCount(int NewValue) { movementCounter = NewValue; }
///////////////////////////////////////

// Weapon Functions //
string Mercenary::GetPrimaryWpName() { return mPrimaryWeapon; }
string Mercenary::GetSecondaryWpName() { return mSecondaryWeapon; }
string Mercenary::GetMeleeWpName() { return mMeleeWeapon; }

int Mercenary::GetPrimaryDMG() { return mPrimaryDMG; }
int Mercenary::GetSecondaryDMG() { return mSecondaryDMG; }
int Mercenary::GetMeleeDMG() { return mMeleeDMG; }

void Mercenary::SetPrimaryWpName(string NewPrimaryWeapon) { mPrimaryWeapon = NewPrimaryWeapon; }
void Mercenary::SetSecondaryWpName(string NewSecondaryWeapon) { mSecondaryWeapon = NewSecondaryWeapon; }
void Mercenary::SetMeleeWpName(string NewMeleeWeapon) { mMeleeWeapon = NewMeleeWeapon; }

void Mercenary::SetPrimaryDMG(int NewPrimaryDMG) { mPrimaryDMG = NewPrimaryDMG; }
void Mercenary::SetSecondaryDMG(int NewSecondaryDMG) { mSecondaryDMG = NewSecondaryDMG; }
void Mercenary::SetMeleeDMG(int NewMeleeDMG) { mMeleeDMG = NewMeleeDMG; }

bool Mercenary::IsEngineer()
{
	if (mIsEngineer == true) { return true; }
	else { return false; }
}

bool Mercenary::IsMedic()
{
	if (mIsMedic == true) { return true; }
	else { return false; }
}

// Mercenary Classes //
// These are going to be called by the switch case in order to set the required values. //
// Instead of doing it inside main like previously. //

void Mercenary::Scout()
{
	SetName("Scout");
	SetHP(125);
	SetPrimaryWpName("Scattergun");
	SetPrimaryDMG(27);
	SetSecondaryWpName("Pistol");
	SetSecondaryDMG(15);
	SetMeleeWpName("Bat");
	SetMeleeDMG(10);

	cout << "The player has chosen the Scout class!" << endl;
}

void Mercenary::Soldier()
{
	SetName("Soldier");
	SetHP(200);
	SetPrimaryWpName("Rocket Launcher");
	SetPrimaryDMG(35);
	SetSecondaryWpName("Shotgun");
	SetSecondaryDMG(20);
	SetMeleeWpName("Shovel");
	SetMeleeDMG(12);

	cout << "The player has chosen the Soldier class!" << endl;
}

void Mercenary::Pyro()
{
	SetName("Pyro");
	SetHP(175);
	SetPrimaryWpName("Flamethrower");
	SetPrimaryDMG(27);
	SetSecondaryWpName("Shotgun");
	SetSecondaryDMG(20);
	SetMeleeWpName("Fireaxe");
	SetMeleeDMG(10);

	cout << "The player has chosen the Pyro class!" << endl;
}

void Mercenary::Demoman()
{
	SetName("Demoman");
	SetHP(175);
	SetPrimaryWpName("Grenade Launcher");
	SetPrimaryDMG(25);
	SetSecondaryWpName("Stickybomb Laucnher");
	SetSecondaryDMG(20);
	SetMeleeWpName("Bottle");
	SetMeleeDMG(10);

	cout << "The player has chosen the Demoman class!" << endl;
}

void Mercenary::Heavy()
{
	SetName("Heavy");
	SetHP(300);
	SetPrimaryWpName("Minigun");
	SetPrimaryDMG(35);
	SetSecondaryWpName("Shotgun");
	SetSecondaryDMG(20);
	SetMeleeWpName("Fists");
	SetMeleeDMG(13);

	cout << "The player has chosen the Heavy class!" << endl;
}

void Mercenary::Engineer()
{
	SetName("Engineer");
	SetHP(125);
	SetPrimaryWpName("Shotgun");
	SetPrimaryDMG(25);

	// Secondary is replaced by the sentry
	//SetSecondaryWpName("Pistol");
	//SetSecondaryDMG(15);

	// These will be replaced by getters and setters.
	mIsEngineer = true;
	mSentryHP = 100;
	mSentryDMG = rand() % 40 + 10;

	SetMeleeWpName("Wrench");
	SetMeleeDMG(8);

	cout << "The player has chosen the Engineer class!" << endl;
}

void Mercenary::Medic()
{
	SetName("Medic");
	SetHP(150);
	SetPrimaryWpName("Syringe Gun");
	SetPrimaryDMG(20);
	SetSecondaryWpName("Medigun");							// Medigun should be used on himself
	SetSecondaryDMG(rand() % 10 + 10);						// To essentially regen HP in battle
	SetMeleeWpName("Bonesaw");
	SetMeleeDMG(10);

	// This will be replaced by getters and setters.
	mIsMedic = true;

	cout << "The player has chosen the Medic class!" << endl;
}

void Mercenary::Sniper()
{
	SetName("Sniper");
	SetHP(125);
	SetPrimaryWpName("Scattergun");
	SetPrimaryDMG(27);
	SetSecondaryWpName("Pistol");
	SetSecondaryDMG(15);
	SetMeleeWpName("Bat");
	SetMeleeDMG(10);

	cout << "The player has chosen the Sniper class!" << endl;
}

void Mercenary::Spy()
{
	SetName("Spy");
	SetHP(125);
	SetPrimaryWpName("Scattergun");
	SetPrimaryDMG(27);
	SetSecondaryWpName("Pistol");
	SetSecondaryDMG(15);
	SetMeleeWpName("Bat");
	SetMeleeDMG(10);

	cout << "The player has chosen the Spy class!" << endl;
}

void Mercenary::Dev()
{
	string RandomNameArray[3] = { "Lord X", "Uncle Dane", "Ersan"};								// Create an array of names to randomly pick
	srand(static_cast<unsigned int>(time(0)));													// This is done in order to get a random value everytime
	string ChosenName = RandomNameArray[rand() % 3];											// Pick a random name and store it (Wanted to make it modular but couldn't figure it out)
	SetName(ChosenName);
	SetHP(NULL);
	SetPrimaryWpName("Scattergun");
	SetPrimaryDMG(27);
	SetSecondaryWpName("Pistol");
	SetSecondaryDMG(15);
	SetMeleeWpName("Bat");
	SetMeleeDMG(10);

	cout << "The player has chosen the " << ChosenName <<  " class!" << endl;
}