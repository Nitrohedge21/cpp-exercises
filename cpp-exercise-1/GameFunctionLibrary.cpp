#include "GameFunctionLibrary.h"

void GameFunctionLibrary::PlayerHUD(Mercenary& PlayerRef)
{
	cout << "=======================================" << endl;
	cout << "Name: " << PlayerRef.GetName() << endl;
	cout << "HP: " << PlayerRef.GetHP() << endl;
	cout << "Speed: " << PlayerRef.GetSpeed() << endl;
	cout << "=======================================" << endl;
	cout << "Player Position X = " << PlayerRef.GetPos('X') << " and Y = " << PlayerRef.GetPos('Y') << endl;
}