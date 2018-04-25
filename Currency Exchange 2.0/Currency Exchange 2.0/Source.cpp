//Currency Exchange
//04/03/2018
//Author: ShawnD Herrick

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
	int i = 0;
	int a = 0;					//American Dollars
	double ca = .9813;			//Canadian Dollar
	double e = .757;			//Euro
	double in = 52.53;			//Indian Rupee
	double j = 80.92;			//Japanese Yen
	double m = 13.1544;			//Mexican Pessos
	double s = 7.7522;			//South African Rand
	double b = .6178;			//British Pound
	//string currencyExchange;
	char currencyExchange;

	cout << "+=======|Exchange Calculator|=======+" << endl;
	cout << " Canadian Dollars  ||  Euro        " << endl;
	cout << " Indian Ruppee     ||  Japanese Yen" << endl;
	cout << " Mexican Pessos    ||  African Rand" << endl;
	cout << " British Pounds    ||  Hyrule Rupees" << endl;
	cout << "+===================================+" << endl;
	cout << "\nWhich currency would you like to exchange to? \n >";
	cin >> currencyExchange;
	char str[] = "";
	while (str[i])
	{
		currencyExchange = str[i];
		putchar(tolower(currencyExchange));
		cout << currencyExchange << endl;
	}

	system("pause");
	return 0;
}
