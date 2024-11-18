#include "Mercenary.h"

Mercenary::Mercenary(string NewName, int NewLevel, float NewSpeed)
{
	SetName(NewName);
	SetLVL(NewLevel);
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

int Mercenary::GetLVL()
{
	return mLevel;
}

void Mercenary::SetLVL(int NewLevel)
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