#include "MovementState.h"

MovementState::MovementState() 
{

}

void MovementState::InitializeState(Mercenary& PlayerRef)
{
	if (_getch() != NULL)
	{
		keyInput = _getch();
		asciiValue = keyInput;
		switch (asciiValue)
		{
		case 87://integer value of "W"
			PlayerRef.SetPos('X', (PlayerRef.GetPos('X') - 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;
		case 119://integer value of "w"
			PlayerRef.SetPos('X', (PlayerRef.GetPos('X') - 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;
		case 83://integer value of "S"
			PlayerRef.SetPos('X', (PlayerRef.GetPos('X') + 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;
		case 115://integer value of "s"
			PlayerRef.SetPos('X', (PlayerRef.GetPos('X') + 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;
		case 68:// integer value of "D"
			PlayerRef.SetPos('Y', (PlayerRef.GetPos('Y') + 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;
		case 100://integer value of "d"
			PlayerRef.SetPos('Y', (PlayerRef.GetPos('Y') + 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;
		case 65:// integer value of "A"
			PlayerRef.SetPos('Y', (PlayerRef.GetPos('Y') - 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;
		case 97:// integer value of "a"
			PlayerRef.SetPos('Y', (PlayerRef.GetPos('Y') - 1));
			PlayerRef.SetMovementCount(PlayerRef.GetMovementCount() + 1);
			break;

		}
	}
}

void MovementState::ProgressCheck(Mercenary& PlayerRef, GameState& GameStateRef)
{
	if (PlayerRef.GetMovementCount() == 10)
	{
		system("CLS");
		cout << "The player has moved 10 times..." << endl;
		Sleep(3000);
		cout << "The games over or some shit idk" << endl;
		Sleep(3000);
		GameStateRef.isOver = true;
	}
}