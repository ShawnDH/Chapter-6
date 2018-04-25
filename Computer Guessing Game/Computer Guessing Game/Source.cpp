/*Computer Guessing Game
04/24/2018
Author:ShawnD Herrick */

#include <iostream>
#include <string>
#include <time.h>
//#include <random>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int secret;
	int numChoice;
	int count;
	std::string cntinue;
	//initialize random seed
	srand(time(NULL));
	//generate secret number between 1 and 100
	numChoice = rand() % 100 + 1;
	do{
		std::cout << "Please choose a number that is between 1 - 100. \n >";
		std::cin >> secret;
		do{
			if (secret <= 0 || secret > 100)
			{
				std::cout << "That isn't a number that is between 1 and 100." << std::endl;
				main();
			}
			else if (secret <= 25)
			{
				numChoice = 1 + (std::rand() % (25 - 1 + 1));
				count = count + 1;
			}
			else if (secret <= 50 && secret >= 26)
			{
				numChoice = 26 + (std::rand() % (50 - 26 + 1));
				count = count + 1;
			}
			else if (secret >= 51 && secret <= 74)
			{
				numChoice = 51 + (std::rand() % (74 - 51 + 1));
				count = count + 1;
			}
			else if (secret >= 75)
			{
				numChoice = 75 + (std::rand() % (100 - 75 + 1));
				count = count + 1;
			}
		} while (numChoice != secret);
		std::cout << "It took the computer " << count << " guesses to guess the number " << secret << "." << std::endl;
		std::cout << "Continue? \n >";
		std::cin >> cntinue;
	} while (cntinue != "No" || cntinue != "NO" || cntinue != "no" || cntinue != "no");
	system("pause");
	return 0;
}