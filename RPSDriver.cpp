//	Created By:		Zachary Brader
//	Date:			April 10, 2019
//	Title:			Rock Paper Scissors
//	Description:	The most intense game ever that's totally going to take the world by storm. Three hand gestures to choose from, only one will win. 

#include <iostream>
#include "opponent.h"

using namespace std;

int main()
{
	cout << "Hello! My name is Zach Brader, thanks for checking out my game!" << endl;
	cout << "Enter in 1, 2, or 3 to choose either rock paper scissors." << endl;
	cout << "Remember: Rock beats scissors, scissors beat paper, and paper beats rock." << endl;
	cout << "----------------------------------------------------------------------------------" << endl;

	int userInput = 0, ranChoice = 1, roundNum = 1; // User Input and the AI's input
	Opponent enemy; 

	while (userInput != -1)
	{
		cout << "\n\n";
		cout << "ROUND: " << roundNum << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "Enter 1 for rock\nEnter 2 for scissors\nEnter 3 for paper\nEnter -1 to quit" << endl;
		cout << "Enter number here: ";
		if (!(cin >> userInput))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nWhoa, hold up. Please enter in a number." << endl;
			cout << "----------------------------------------------------------------------------------" << endl;
			continue;
		}
		cout << endl;
		if (userInput == -1) // Checks to see if the user wants to quit
		{
			cout << endl << "Thank you for using this program! Please contact me with any improvements or suggestions!\n-Zach" << endl;
			break;
		}
		else if (userInput > 3 || userInput < 1) // Makes sure that the user puts in the correct information
		{
			cout << "Input must be between 1 and 3. Please Try again." << endl;
			cout << "----------------------------------------------------------------------------------" << endl;
			continue;
		}
		roundNum++;
		enemy.printTurn(userInput, enemy.makeMove()); // Reads in the user's and AI's moves and prints out values
		//cout << "----------------------------------------------------------------------------------" << endl;
	}

	return 0;
}