//	Created By:		Zachary Brader
//	Date:			April 10, 2019
//	Title:			Rock Paper Scissors
//	Description:	The most intense game ever that's totally going to take the world by storm. Three hand gestures to choose from, only one will win. 

#include "opponent.h"

Opponent::Opponent()
{
	numEnemyWins = 0;
	numPlayerWins = 0;
}


Opponent::~Opponent()
{
}

int Opponent::makeMove()
{
	return rand() % 3 + 1;
}

void Opponent::printTurn(int playerMove, int aiMove)
{
	cout << "Player Choose:\t" << this->moveType(playerMove) << endl;
	cout << "Enemy Choose:\t" << this->moveType(aiMove) << endl;
	int victoryStatus = didPlayerWin(playerMove, aiMove);
	if (victoryStatus == 1)
	{
		cout << "The player won the round!" << endl;
		this->numPlayerWins += 1;
	}
	else if (victoryStatus == -1)
	{
		cout << "The enemy has bested the player." << endl;
		this->numEnemyWins += 1;
	}
	else
	{
		cout << "The round was a draw." << endl;
	}

	cout << "Player Wins: " << numPlayerWins << endl;
	cout << "Enemy Wins: " << numEnemyWins << endl;
}

int Opponent::didPlayerWin(int play, int ai) const
{
	if (play == ai) // Player and AI choose same move
		return 0;
	if ((play == 3 && ai == 2) || (play == 2 && ai == 1) || (play == 1 && ai == 3))
		return -1;
	else
		return 1;
	return -1;
}

string Opponent::moveType(int move) const
{
	if (move == 1)
	{
		return "Rock";
	}
	if (move == 2)
	{
		return "Scissors";
	}
	if (move == 3)
	{
		return "Paper";
	}
	else
		return "Undefined";
}