/*Switch Statements
04/19/2018
Author:ShawnD Herrick*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int bookScanID = 0;
	string end;
	string bookOwner;
	do
	{
		cout << "Please enter Book ID Number here. \n >";
		cin >> bookScanID;
		switch (bookScanID)
		{
		case 277364:
			bookOwner = "Mr. Brosius";
			break;
		case 277343:
			bookOwner = "Aaron";
			break;
		case 277362:
			bookOwner = "Brady";
			break;
		case 277346:
			bookOwner = "ShawnD";
			break;
		case 277357:
			bookOwner = "Kain";
		default:
			bookOwner = "Invalid";
			break;
		}
		if (bookOwner == "Invalid")
		{
			cout << "Invalid" << endl;
		}
		else
		{
			cout << bookOwner << endl;
		}
		cout << "END? \n >";
		cin >> end;
	} while (end != "END");
	system("pause");
	return 0;
}