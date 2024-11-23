#include "Mercenary.h"

Mercenary::Mercenary() {/* This is the default constructor that just creates the Mercenary Object*/ }

Mercenary::Mercenary(string NewName, int NewHP, float NewSpeed)
{
	SetName(NewName);
	SetHP(NewHP);
	SetSpeed(NewSpeed);
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

int Mercenary::GetHP()
{
	return mHP;
}

void Mercenary::SetHP(int NewHP)
{
	mHP = NewHP;
}

float Mercenary::GetSpeed()
{
	return mSpeed;
}

void Mercenary::SetSpeed(float NewSpeed)
{
	mSpeed = NewSpeed;
}

void Mercenary::SetPlayerClass()
{
	int UserInput;
	
	cout << "Please choose a mercenary class from the following options!" << endl;
	cout << "Scout (1), Soldier (2), Pyro (3), Demoman (4),";
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
	default:
		cout << "Invalid input. Please choose a valid mercenary class!" << endl;
		Sleep(2000);
		system("CLS");
		SetPlayerClass();
		break;
	}
}

// Mercenary Classes //
// These are going to be called by the switch case in order to set the required values. //
// Instead of doing it inside main like previously. //

void Mercenary::Scout()
{
	SetName("Scout");
	SetHP(125);
	SetSpeed(10.0f);

	cout << "The player has chosen the Scout class!" << endl;
}

void Mercenary::Soldier()
{
	SetName("Soldier");
	SetHP(200);
	SetSpeed(8.0f);

	cout << "The player has chosen the Soldier class!" << endl;
}

void Mercenary::Pyro()
{
	SetName("Pyro");
	SetHP(175);
	SetSpeed(8.0f);

	cout << "The player has chosen the Pyro class!" << endl;
}

void Mercenary::Demoman()
{
	SetName("Demonan");
	SetHP(175);
	SetSpeed(8.0f);

	cout << "The player has chosen the Demoman class!" << endl;
}

void Mercenary::Heavy()
{
	SetName("Heavy");
	SetHP(300);
	SetSpeed(5.5f);

	cout << "The player has chosen the Heavy class!" << endl;
}

void Mercenary::Engineer()
{
	SetName("Engineer");
	SetHP(125);
	SetSpeed(8.0f);

	cout << "The player has chosen the Engineer class!" << endl;
}

void Mercenary::Medic()
{
	SetName("Medic");
	SetHP(150);
	SetSpeed(8.0f);

	cout << "The player has chosen the Medic class!" << endl;
}

void Mercenary::Sniper()
{
	SetName("Sniper");
	SetHP(125);
	SetSpeed(8.0f);

	cout << "The player has chosen the Sniper class!" << endl;
}

void Mercenary::Spy()
{
	SetName("Spy");
	SetHP(125);
	SetSpeed(8.0f);

	cout << "The player has chosen the Spy class!" << endl;
}