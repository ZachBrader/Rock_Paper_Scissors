//	Created By:		Zachary Brader
//	Date:			April 10, 2019
//	Title:			Rock Paper Scissors
//	Description:	The most intense game ever that's totally going to take the world by storm. Three hand gestures to choose from, only one will win. 

#ifndef OPPONENT_H
#define OPPONENT_H

#include <stdlib.h> // rand()
#include <iostream>
#include <string>

using namespace std;

class Opponent
{
public:
	Opponent();
	~Opponent();

	int makeMove(); // Returns a random value between 1-3
	void printTurn(int, int); // Prints the data of the turn and updates the values
	int didPlayerWin(int, int) const; // Compares the moves
	string moveType(int) const; // Converts a number to a certain gesture
private:
	int numPlayerWins; // Keeps track of the number of times the player won
	int numEnemyWins; // Keeps track of how many times player lost
};

#endif // !OPPONENT_H