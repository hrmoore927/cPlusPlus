//Lab13-1.cpp
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sales = "";
	string currentChar = "";
	int sub = 0;
	int numNumbers = 0;
	int numPeriods = 0;
	int numOtherChars = 0;

	cout << "Sales amount: ";
	getline(cin, sales);

	while (sub < sales.length())
	{
		currentChar = sales.substr(sub, 1);
		if (currentChar == ".")
			numPeriods += 1;
		else
			if (currentChar < "0" || currentChar > "9")
				numOtherChars += 1;
			else
				numNumbers += 1;
			//end if
		//end if
		sub += 1;
	}	//end while

	if (numPeriods > 1 || numOtherChars > 0)
		cout << "Invalid sales amount" << endl;
	else
		cout << "Valid sales amount" << endl;
	//end if
	cout << "Numbers: " << numNumbers << endl;
	cout << "Periods: " << numPeriods << endl;
	cout << "Other characters: " << numOtherChars << endl;

	return 0;
}	//end of main function