#pragma once
#include <iostream>
#include <format>

using namespace std;

class Mercenary
{
private:
	string mName;
	int mLevel;
	float mSpeed;

public:

	// This one will be used for the class selector logic (switch case)
	Mercenary();
	// This one was used for testing purposes

	Mercenary(string MercName, int MercLevel, float MercSpeed);

	string GetName();
	void SetName(string NewName);
	int GetHP();
	void SetHP(int NewHP);
	float GetSpeed();
	void SetSpeed(float NewSpeed);

	void Scout(Mercenary PlayerReference);
	void Soldier(Mercenary PlayerReference);
	void Pyro(Mercenary PlayerReference);
	void Demoman(Mercenary PlayerReference);
	void Heavy(Mercenary PlayerReference);
	void Engineer(Mercenary PlayerReference);
	void Medic(Mercenary PlayerReference);
	void Sniper(Mercenary PlayerReference);
	void Spy(Mercenary PlayerReference);


};

