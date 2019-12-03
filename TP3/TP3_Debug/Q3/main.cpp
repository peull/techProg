#include <iostream> // cout, cin
#include <ctime>	// time
#include <cstdlib>	// srand, rand
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/// <summary>
/// This is a Rock-Paper-Scissor game. Ask the player a choice and the cpu get a random choice.
/// After 3 wins, the game stop and show who won. (3 of 5)
/// </summary>
/// <returns></returns>
int main()
{
	const int MAX_WIN_OR_LOSE = 3;

	srand(time(NULL));

	int round = 0;
	int count = 0;
	int won = 0;

	string choices[] = { "", "Rock", "Paper", "Scissor" };

	round++;
	cout << "Welcome to rock-paper-scissor game. It'll be a 3 of 5." << endl;
	cout << "Instruction: Rock = 1, Paper = 2, Scissor = 3" << endl;
	
	while (true)
	{
		cout << endl;
		cout << "ROUND " << round << endl;

		// Generate a random number between 1 and 3 inclusive.
		int cpuChoice = rand() % 3 + 1;
		int myChoice = 0;

		do 
		{
			cout << "Enter your choice (Rock = 1; Paper = 2, Scissor = 3): ";
			cin >> myChoice;
		} while (myChoice < 1 || myChoice > 3);

		cout << "-----------------------------" << endl;
		cout << "Your choice: " << choices[myChoice] << endl;
		cout << "Cpu choice: " << choices[cpuChoice] << endl;
		cout << "-----------------------------" << endl << endl;

		// not a null game
		if (myChoice != cpuChoice)
		{
			// If I beat the cpu
			if ((myChoice == 1 && cpuChoice == 3) || (myChoice == 2 && cpuChoice == 1) || (myChoice == 3 && cpuChoice == 2))
			{
				cout << "You win this round!" << endl;
				won++;
			}
			else
			{
				cout << "You lose this round!" << endl;
			}
			count++;
			
			cout << "Your score is: " << won << " wins and " << (count - won) << " loses" << endl;

			// If I won or lose 3 times, no need for a 4rd game.
			if (won == MAX_WIN_OR_LOSE || count - won == MAX_WIN_OR_LOSE)
			{
				break;
			}			
		}
		else
		{
			cout << "This round is equal." << endl;
		}

		round++;
	}

	(won >= MAX_WIN_OR_LOSE) ? cout << "You won!" << endl : cout << "You lose!" << endl;

	system("pause");

	return 0;
}

