//ModifyThis12.cpp - displays the value of new car
//at the end of each of five years, using 
//depreciation rates of 15%, 20%, and 25%
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double originalValue = 0.0;
	double depreciation = 0.0;
	double currentValue = 0.0;

	cout << "Original value: ";
	cin >> originalValue;
	cout << endl << fixed << setprecision(0);

	for (double rate = 0.15; rate < 0.26; rate += 0.05)
	{
		cout << "Depreciation rate: " << rate * 100 << "%" << endl;
		cout << "Value after year: " << endl;

		currentValue = originalValue;
		for (int year = 1; year < 6; year += 1)
		{
			depreciation = currentValue * rate;
			currentValue -= depreciation;
			cout << year << "  $" << currentValue << endl;
		}  //end for
		cout << endl;
	}  //end for

	return 0;
}	//end of main function