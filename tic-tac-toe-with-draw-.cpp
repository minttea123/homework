// ConsoleAlication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


///// global declaration /////
char answer, o, x;
bool isWinner = false;
int i = 0;
char a = 'A';
char b = 'B';
char c = 'C';
char Line[3][3] = { { '1', '2', '3' },
{ '4', '5', '6' },
{ '7', '8', '9' } };

void table()
{
	cout << '\t' << Line[0][0] << Line[0][1] << Line[0][2] << endl;
	cout << '\t' << Line[1][0] << Line[1][1] << Line[1][2] << endl;
	cout << '\t' << Line[2][0] << Line[2][1] << Line[2][2] << endl;
}

bool picker()
{
	//replaces the chosen number with x
	if (x == Line[0][0]) {
		Line[0][0] = 'x';

		return true;
	}

	if (x == Line[0][1]) {
		Line[0][1] = 'x';

		return true;
	}

	if (x == Line[0][2]) {
		Line[0][2] = 'x';

		return true;
	}

	if (x == Line[1][0]) {
		Line[1][0] = 'x';

		return true;
	}

	if (x == Line[1][1]) {
		Line[1][1] = 'x';

		return true;
	}

	if (x == Line[1][2]) {
		Line[1][2] = 'x';

		return true;
	}

	if (x == Line[2][0]) {
		Line[2][0] = 'x';

		return true;
	}

	if (x == Line[2][1]) {
		Line[2][1] = 'x';

		return true;
	}
	if (x == Line[2][2]) {
		Line[2][2] = 'x';

		return true;
	}

	return false;
}

bool pickerB()
{
	//replaces the chosen number with o
	if (o == Line[0][0]) {
		Line[0][0] = 'o';

		return true;
	}

	if (o == Line[0][1]) {
		Line[0][1] = 'o';

		return true;
	}
	if (o == Line[0][2]) {
		Line[0][2] = 'o';

		return true;
	}

	if (o == Line[1][0]) {
		Line[1][0] = 'o';

		return true;
	}

	if (o == Line[1][1]) {
		Line[1][1] = 'o';

		return true;
	}

	if (o == Line[1][2]) {
		Line[1][2] = 'o';

		return true;
	}

	if (o == Line[2][0]) {
		Line[2][0] = 'o';

		return true;
	}

	if (o == Line[2][1]) {
		Line[2][1] = 'o';

		return true;
	}

	if (o == Line[2][2]) {
		Line[2][2] = 'o';

		return true;
	}

	return false;
}

void play() {
	do {
		cin >> x;
		while (picker() == false) {
			cout << "Sorry, that number is taken... try again.\n";

			cin >> x;
		}

		++i;

		if (i == 9) {
			return;
		}

		table();

		// Checks 'x' winner horizontal
		if (((Line[0][0] == 'x') && (Line[1][0] == 'x') && (Line[2][0] == 'x')) ||
			((Line[0][1] == 'x') && (Line[1][1] == 'x') && (Line[2][1] == 'x')) ||
			((Line[0][2] == 'x') && (Line[1][2] == 'x') && (Line[2][2] == 'x'))) {
			isWinner = true;

			break;
		}
		// Checks 'x' winner vertical
		if (((Line[0][0] == 'x') && (Line[0][1] == 'x') && (Line[0][2] == 'x')) ||
			((Line[1][0] == 'x') && (Line[1][1] == 'x') && (Line[1][2] == 'x')) ||
			((Line[2][0] == 'x') && (Line[2][1] == 'x') && (Line[2][2] == 'x'))) {
			isWinner = true;

			break;
		}
		// Checks 'x' winner diagonal
		if (((Line[0][0] == 'x') && (Line[1][1] == 'x') && (Line[2][2] == 'x')) ||
			((Line[0][2] == 'x') && (Line[1][1] == 'x') && (Line[2][0] == 'x'))) {
			isWinner = true;

			break;
		}

		cin >> o;
		while (pickerB() == false) {
			cout << "Sorry, that number is taken... try again.\n";

			cin >> o;
		}

		++i;
		table();

		// Checks 'o' winner horizontal
		if (((Line[0][0] == 'o') && (Line[1][0] == 'o') && (Line[2][0] == 'o')) ||
			((Line[0][1] == 'o') && (Line[1][1] == 'o') && (Line[2][1] == 'o')) ||
			((Line[0][2] == 'o') && (Line[1][2] == 'o') && (Line[2][2] == 'o'))) {
			isWinner = true;

			break;
		}
		// Checks 'o' winner vertical
		if (((Line[0][0] == 'o') && (Line[0][1] == 'o') && (Line[0][2] == 'o')) ||
			((Line[1][0] == 'o') && (Line[1][1] == 'o') && (Line[1][2] == 'o')) ||
			((Line[2][0] == 'o') && (Line[2][1] == 'o') && (Line[2][2] == 'o'))) {
			isWinner = true;

			break;
		}
		// Checks 'o' winner diagonal
		if (((Line[0][0] == 'o') && (Line[1][1] == 'o') && (Line[2][2] == 'o')) ||
			((Line[0][2] == 'o') && (Line[1][1] == 'o') && (Line[2][0] == 'o'))) {
			isWinner = true;

			break;
		}
	} while (true);
}

int main()
{
	//saw refrence
	cout << "Would you like to play a game? \nY/N" << endl;
	cin >> answer;

	/// main loop
	do {
		cout << "IT'S TIC TAC TOE" << endl;

		table();

		cout << "Which would you like to change? Enter number of space, ex 1" << endl;

		play();
		if (isWinner == true) {
			cout << "You win! Play again?\nY/N";
		}
		else {
			cout << "Draw! Play again?\nY/N";
		}

		cin >> answer;

		// Reset all settings
		if (answer == 'y')
		{
			Line[0][0] = '1';
			Line[0][1] = '2';
			Line[0][2] = '3';

			Line[1][0] = '4';
			Line[1][1] = '5';
			Line[1][2] = '6';

			Line[2][0] = '7';
			Line[2][1] = '8';
			Line[2][2] = '9';

			isWinner = false;
			i = 0;
		}
	} while (answer == 'y');
	return 0;
}
