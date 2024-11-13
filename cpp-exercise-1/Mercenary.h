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

	Mercenary(string MercName, int MercLevel, float MercSpeed);
	string GetName();
	void SetName(string NewName);
	int GetLVL();
	void SetLVL(int NewLevel);
	float GetSpeed();
	void SetSpeed(float NewSpeed);


};

