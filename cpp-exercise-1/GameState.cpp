#include "GameState.h"

GameState::GameState()
{

}

void GameState::InitializeState(Mercenary& PlayerRef, GameFunctionLibrary FunctionLibraryRef)
{
    
    // This is a testing state that I had created to utilize the InitializeState function.
    // This is not meant to be used in the final code.

    for (int i = 0; i <= 5; i++)
    {
        system("CLS");
        FunctionLibraryRef.PlayerHUD(PlayerRef);
        cout << "Player gets hurt for no reason" << endl;
        PlayerRef.SetHP(PlayerRef.GetHP() - 1);
        Sleep(3000);
        system("CLS");

        if (i == 3)
        {
            cout << "the game is over!!!" << endl;
            Sleep(2000);
            isOver = true;
            break;
        }
    }
}
