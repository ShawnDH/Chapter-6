/*Guessing game with levels
04/19/2018
Author:ShawnD Herrick */

#include <iostream>
#include <time.h>
//#include <random>
#include <stdio.h>
#include <stdlib.h>
void level1();
void level2();
void level3();
int main()
{

	for ()
	{
		switch ()
		{
		default:
			break;
		}
	}
	system("pause");
	return 0;
}
//Level 1
void level1()
{
	int numChoice;
	int secret;
	int count = 1;
	using namespace std;
	//initialize random seed
	srand(time(NULL));
	//generate secret number between 1 and 10
	secret = rand() % 10 + 1;
	do{
		cout << "Please pick a number between 1-10 \n >";
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
	main();
}
//Level 2
void level2()
{
	int numChoice;
	int secret;
	int count = 1;
	using namespace std;
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
	main();
}
//Level 3
void level3()
{
	int numChoice;
	int secret;
	int count = 1;
	using namespace std;
	//initialize random seed
	srand(time(NULL));
	//generate secret number between 1 and 1000
	secret = rand() % 10 + 1;
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
	main();
}