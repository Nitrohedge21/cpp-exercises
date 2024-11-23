#include "GameFunctionLibrary.h"

void GameFunctionLibrary::PlayerHUD(Mercenary PlayerRef)
{
	cout << "Name: " << PlayerRef.GetName() << endl;
	cout << "HP: " << PlayerRef.GetHP() << endl;
	cout << "Speed: " << PlayerRef.GetSpeed() << endl;
}