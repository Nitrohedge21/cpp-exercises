#include "Mercenary.h"

Mercenary::Mercenary() {/* This is the default constructor that just creates the Mercenary Object*/ }

Mercenary::Mercenary(string NewName, int NewLevel, float NewSpeed)
{
	SetName(NewName);
	SetHP(NewLevel);
	SetSpeed(NewSpeed);
}

string Mercenary::GetName()
{
	string returnValue;

	if (mName != "") 
	{ 
		returnValue = mName;
		cout << "The mercenary's name is " << returnValue << "!\n";
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
	return mLevel;
}

void Mercenary::SetHP(int NewLevel)
{
	mLevel = NewLevel;
}

float Mercenary::GetSpeed()
{
	return mSpeed;
}

void Mercenary::SetSpeed(float NewSpeed)
{
	mSpeed = NewSpeed;
}

// Mercenary Classes //
// These are going to be called by the switch case in order to set the required values. //
// Instead of doing it inside main like previously. //

void Mercenary::Scout(Mercenary PlayerReference)
{
	PlayerReference.SetName("Scout");
	PlayerReference.SetHP(125);
	PlayerReference.SetSpeed(10.0f);

	cout << "The player has chosen the Scout class!" << endl;
}

void Mercenary::Soldier(Mercenary PlayerReference)
{
	PlayerReference.SetName("Soldier");
	PlayerReference.SetHP(200);
	PlayerReference.SetSpeed(8.0f);

	cout << "The player has chosen the Soldier class!" << endl;
}

void Mercenary::Pyro(Mercenary PlayerReference)
{
	PlayerReference.SetName("Pyro");
	PlayerReference.SetHP(175);
	PlayerReference.SetSpeed(8.0f);

	cout << "The player has chosen the Pyro class!" << endl;
}

void Mercenary::Demoman(Mercenary PlayerReference)
{
	PlayerReference.SetName("Demonan");
	PlayerReference.SetHP(175);
	PlayerReference.SetSpeed(8.0f);

	cout << "The player has chosen the Demoman class!" << endl;
}

void Mercenary::Heavy(Mercenary PlayerReference)
{
	PlayerReference.SetName("Heavy");
	PlayerReference.SetHP(300);
	PlayerReference.SetSpeed(5.5f);

	cout << "The player has chosen the Heavy class!" << endl;
}

void Mercenary::Engineer(Mercenary PlayerReference)
{
	PlayerReference.SetName("Engineer");
	PlayerReference.SetHP(125);
	PlayerReference.SetSpeed(8.0f);

	cout << "The player has chosen the Engineer class!" << endl;
}

void Mercenary::Medic(Mercenary PlayerReference)
{
	PlayerReference.SetName("Medic");
	PlayerReference.SetHP(150);
	PlayerReference.SetSpeed(8.0f);

	cout << "The player has chosen the Medic class!" << endl;
}

void Mercenary::Sniper(Mercenary PlayerReference)
{
	PlayerReference.SetName("Sniper");
	PlayerReference.SetHP(125);
	PlayerReference.SetSpeed(8.0f);

	cout << "The player has chosen the Sniper class!" << endl;
}

void Mercenary::Spy(Mercenary PlayerReference)
{
	PlayerReference.SetName("Spy");
	PlayerReference.SetHP(125);
	PlayerReference.SetSpeed(8.0f);

	cout << "The player has chosen the Spy class!" << endl;
}