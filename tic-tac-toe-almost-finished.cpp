// ConsoleAlication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


///// global declaration /////
char answer, x, o;
int i = 0;
char a = 'A';
char b = 'B';
char c = 'C';
char LineA[3] = { '1', '2', '3' };
char LineB[3] = { '4', '5', '6' };
char LineC[3] = { '7', '8', '9' };


void table()
{
	cout << '\t' << LineA << endl;
	cout << '\t' << LineB << endl;
	cout << '\t' << LineC << endl;
}

void picker()
{
	//replaces the chosen number with x
	if (x == LineA[0]) LineA[0] = 'x';
	if (x == LineA[1]) LineA[1] = 'x';
	if (x == LineA[2]) LineA[2] = 'x';
	if (x == LineB[0]) LineB[0] = 'x';
	if (x == LineB[1]) LineB[1] = 'x';
	if (x == LineB[2]) LineB[2] = 'x';
	if (x == LineC[0]) LineC[0] = 'x';
	if (x == LineC[1]) LineC[1] = 'x';
	if (x == LineC[2]) LineC[2] = 'x';
}

void pickerB()
{
	//replaces the chosen number with o
	if (o == LineA[0]) LineA[0] = 'o';
	if (o == LineA[1]) LineA[1] = 'o';
	if (o == LineA[2]) LineA[2] = 'o';
	if (o == LineB[0]) LineB[0] = 'o';
	if (o == LineB[1]) LineB[1] = 'o';
	if (o == LineB[2]) LineB[2] = 'o';
	if (o == LineC[0]) LineC[0] = 'o';
	if (o == LineC[1]) LineC[1] = 'o';
	if (o == LineC[2]) LineC[2] = 'o';
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

		do {
			i = 0;

			// Checks 'x' winner horizontal
			if (((LineA[0] == 'x') && (LineA[1] == 'x') && (LineA[2] == 'x')) ||
				((LineB[0] == 'x') && (LineB[1] == 'x') && (LineB[2] == 'x')) ||
				((LineC[0] == 'x') && (LineC[1] == 'x') && (LineC[2] == 'x'))) {
				break;
			}

			// Checks 'o' winner horizontal
			if (((LineA[0] == 'o') && (LineA[1] == 'o') && (LineA[2] == 'o')) ||
				((LineB[0] == 'o') && (LineB[1] == 'o') && (LineB[2] == 'o')) ||
				((LineC[0] == 'o') && (LineC[1] == 'o') && (LineC[2] == 'o'))) {
				break;
			}

			// Checks 'x' winner vertical
			if (((LineA[0] == 'x') && (LineB[0] == 'x') && (LineC[0] == 'x')) ||
				((LineA[1] == 'x') && (LineB[1] == 'x') && (LineC[1] == 'x')) ||
				((LineA[2] == 'x') && (LineB[2] == 'x') && (LineC[2] == 'x'))) {
				break;
			}

			// Checks 'o' winner vertical
			if (((LineA[0] == 'o') && (LineB[0] == 'o') && (LineC[0] == 'o')) ||
				((LineA[1] == 'o') && (LineB[1] == 'o') && (LineC[1] == 'o')) ||
				((LineA[2] == 'o') && (LineB[2] == 'o') && (LineC[2] == 'o'))) {
				break;
			}

			// Checks 'x' winner diagonal
			if (((LineA[0] == 'x') && (LineB[1] == 'x') && (LineC[2] == 'x')) ||
				((LineA[2] == 'x') && (LineB[1] =='x') && (LineC[0] == 'x'))) {
				break;
			}

			// Checks 'o' winner diagonal
			if (((LineA[0] == 'o') && (LineB[1] == 'o') && (LineC[2] == 'o')) ||
				((LineA[2] == 'o') && (LineB[1] == 'o') && (LineC[0] == 'o'))) {
				break;
			}

			cin >> x;
			i++;

			picker();

			table();
			// Checks 'x' winner horizontal
			if (((LineA[0] == 'x') && (LineA[1] == 'x') && (LineA[2] == 'x')) ||
				((LineB[0] == 'x') && (LineB[1] == 'x') && (LineB[2] == 'x')) ||
				((LineC[0] == 'x') && (LineC[1] == 'x') && (LineC[2] == 'x'))) {
				break;
			}

			// Checks 'o' winner horizontal
			if (((LineA[0] == 'o') && (LineA[1] == 'o') && (LineA[2] == 'o')) ||
				((LineB[0] == 'o') && (LineB[1] == 'o') && (LineB[2] == 'o')) ||
				((LineC[0] == 'o') && (LineC[1] == 'o') && (LineC[2] == 'o'))) {
				break;
			}

			// Checks 'x' winner vertical
			if (((LineA[0] == 'x') && (LineB[0] == 'x') && (LineC[0] == 'x')) ||
				((LineA[1] == 'x') && (LineB[1] == 'x') && (LineC[1] == 'x')) ||
				((LineA[2] == 'x') && (LineB[2] == 'x') && (LineC[2] == 'x'))) {
				break;
			}
			
			// Checks 'o' winner vertical
			if (((LineA[0] == 'o') && (LineB[0] == 'o') && (LineC[0] == 'o')) ||
				((LineA[1] == 'o') && (LineB[1] == 'o') && (LineC[1] == 'o')) ||
				((LineA[2] == 'o') && (LineB[2] == 'o') && (LineC[2] == 'o'))) {
				break;
			}

			// Checks 'x' winner horizontal
			if (((LineA[0] == 'x') && (LineB[1] == 'x') && (LineC[2] == 'x')) ||
				((LineA[2] == 'x') && (LineB[1] == 'x') && (LineC[0] == 'x'))) {
				break;
			}

			// Checks 'o' winner horizontal
			if (((LineA[0] == 'o') && (LineB[1] == 'o') && (LineC[2] == 'o')) ||
				((LineA[2] == 'o') && (LineB[1] == 'o') && (LineC[0] == 'o'))) {
				break;
			}

			cin >> o;
			i++;

			pickerB();

			table();

			// Checks 'x' winner horizontal
			if (((LineA[0] == 'x') && (LineA[1] == 'x') && (LineA[2] == 'x')) ||
				((LineB[0] == 'x') && (LineB[1] == 'x') && (LineB[2] == 'x')) ||
				((LineC[0] == 'x') && (LineC[1] == 'x') && (LineC[2] == 'x'))) {
				break;
			}

			// Checks 'o' winner horizontal
			if (((LineA[0] == 'o') && (LineA[1] == 'o') && (LineA[2] == 'o')) ||
				((LineB[0] == 'o') && (LineB[1] == 'o') && (LineB[2] == 'o')) ||
				((LineC[0] == 'o') && (LineC[1] == 'o') && (LineC[2] == 'o'))) {
				break;
			}

			// Checks 'x' winner vertical
			if (((LineA[0] == 'x') && (LineB[0] == 'x') && (LineC[0] == 'x')) ||
				((LineA[1] == 'x') && (LineB[1] == 'x') && (LineC[1] == 'x')) ||
				((LineA[2] == 'x') && (LineB[2] == 'x') && (LineC[2] == 'x'))) {
				break;
			}

			// Checks 'o' winner vertical
			if (((LineA[0] == 'o') && (LineB[0] == 'o') && (LineC[0] == 'o')) ||
				((LineA[1] == 'o') && (LineB[1] == 'o') && (LineC[1] == 'o')) ||
				((LineA[2] == 'o') && (LineB[2] == 'o') && (LineC[2] == 'o'))) {
				break;
			}

			// Checks 'x' winner horizontal
			if (((LineA[0] == 'x') && (LineB[1] == 'x') && (LineC[2] == 'x')) ||
				((LineA[2] == 'x') && (LineB[1] == 'x') && (LineC[0] == 'x'))) {
				break;
			}

			// Checks 'o' winner horizontal
			if (((LineA[0] == 'o') && (LineB[1] == 'o') && (LineC[2] == 'o')) ||
				((LineA[2] == 'o') && (LineB[1] == 'o') && (LineC[0] == 'o'))) {
				break;
			}
		} while (true);

		// TO DO: Check for draw *** not working ***
		if (i == 9)
		{
			cout << "\nDRAW! Play again?\nY/N";
		}
		else {
			cout << "You win! Play again?\nY/N";
		}

		cin >> answer;

		// Reset the table
		if (answer == 'y')
		{
			LineA[0] = '1';
			LineA[1] = '2';
			LineA[2] = '3';

			LineB[0] = '4';
			LineB[1] = '5';
			LineB[2] = '6';

			LineC[0] = '7';
			LineC[1] = '8';
			LineC[2] = '9';
		}
	} while (answer == 'y');
	return 0;
}

