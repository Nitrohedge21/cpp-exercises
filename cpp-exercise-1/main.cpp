#include <iostream>
#include <format>
#include <Windows.h>
#include "Mercenary.h"
#include "GameState.h"
#include "GameFunctionLibrary.h"
#include "GlobalFunctions.h"

using namespace std;

// Main needs to be kept as clean as possible.

int main()
{
    // This is where all the functions need to be called.
    // This is the main "game loop"

    //Mercenary TestMerc("", 10, 52.69f);
    //cout << "Merc name: " << TestMerc.GetName() << "\n";

    //cout << "Merc HP: " << TestMerc.GetHP() << "\n";
    //cout << "Merc speed: " << TestMerc.GetSpeed() << "\n";

    Mercenary TestMercenary;
    // Game Begins, a blank mercenary class gets created.
    // User is welcomed by a message and asked for input to choose a class
    TestMercenary.SetPlayerClass();
    Sleep(1000);
    cout << "The game shall begin now!" << endl;
    Sleep(1000);

    // The GameState object gets created AFTER the player has
    // succesfully chosen a mercenary class.
    GameState Game;
    GameFunctionLibrary FunctionLibraryRef;

    while (!Game.isOver)    // While the game isn't over, do the following.
    {
        for (int i = 0; i <= 5; i++)
        {
            system("CLS");
            FunctionLibraryRef.PlayerHUD(TestMercenary);
            cout << "Player gets hurt for no reason" << endl;
            TestMercenary.SetHP(TestMercenary.GetHP() - 1);
            Sleep(3000);
            system("CLS");

            if (i == 3) 
            { 
                cout << "the game is over!!!" << endl;
                Sleep(2000);
                Game.isOver = true;
                break;
            }
        }
    }

    return 0;
}


