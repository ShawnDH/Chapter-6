/*Guessing game with levels
04/19/2018
Author:ShawnD Herrick */

#include <iostream>
#include <time.h>
//#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
//Level 1
int level1(int& count)
{
	int numChoice;
	int secret;
	int r;
	count = 1;
	//initialize random seed
	srand(time(NULL));
	for (int c = 0; c <= 5; c++)
	{
		//generate secret number between 1 and 10
		secret = rand() % 10 + 1;
		cout << "Please pick a number between 1-10" << endl;
		do{
			cout << ">";
			cin >> numChoice;
			if (numChoice > secret)
			{
				cout << "The number you picked is too high, guess again." << endl;
				count = count + 1;
			}
			else if (numChoice < secret)
			{
				cout << "The number you picked is too low, guess again." << endl;
				count = count + 1;
			}
			else if (numChoice == secret)
			{
				cout << "Correct! " << secret << " is the correct number!" << endl;
			}
		} while (numChoice != secret);
	}
	r = count;
	return  r;
}
//Level 2
int level2(int& count)
{
	int numChoice;
	int secret;
	int r;
	count = 1;
	//initialize random seed
	srand(time(NULL));
	//generate secret number between 1 and 100
	secret = rand() % 100 + 1;
	do{
		cout << "Please pick a number between 1-100 \n >";
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "The number you picked is too high, guess again." << endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			cout << "The number you picked is too low, guess again." << endl;
			count = count + 1;
		}
	} while (numChoice != secret);
	r = count;
	return  r;
}
//Level 3
int level3(int& count)
{
	int numChoice;
	int secret;
	int r;
	count = 1;
	//initialize random seed
	srand(time(NULL));
	//generate secret number between 1 and 1000
	secret = rand() % 1000 + 1;
	do{
		cout << "Please pick a number between 1-1000 \n >";
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "The number you picked is too high, guess again." << endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			cout << "The number you picked is too low, guess again." << endl;
			count = count + 1;
		}
	} while (numChoice != secret);
	r = count;
	return  r;
}
int main()
{
	int x = 0;
	int levelChoice;
	cout << "Please choose a level \n >Level ";
	cin >> levelChoice;
	
	switch (levelChoice)
	{
	case 1:
		level1(x);
		break;
	case 2:
		level2(x);
		break;
	case 3:
		level3(x);
		break;
	default:
		break;
	}
	if (levelChoice >= 4 || levelChoice <= 0)
	{
		cout << "That isn't a level. Please try again. \n";
		main();
	}
	cout << "You took " << x << " tries on level " << levelChoice << " five times! \n Conga-Rats!" << endl;
	system("pause");
	return 0;
}