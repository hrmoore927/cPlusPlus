//SwatTheBugs28.cpp - displays the number of positive integers
//and the number of negative integers entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int positive = 0;	//counter
	int negative = 0;	//counter

	cout << "Enter a positive or negative integer (enter 0 to end): ";
	cin >> number;

	while (number != 0)
	{
		//update counters
		if (number > 0)
			positive =+ 1;
		else
			negative =+ 1;
		//end if

		cout << "Enter another positive or negative integer (enter 0 to end): ";
		cin >> number;
	}//end while
	
	cout << endl;
	cout << "Total positive integers: " << positive << endl;
	cout << "Total negative integers: " << negative << endl;
	return 0;
}	//end of main function
