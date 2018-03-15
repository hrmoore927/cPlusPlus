//SwatTheBugs28.cpp - displays the number of positive integers
//and the number of negative integers entered by the user
//Created/revised by Heather Moore on 3/5/18

#include <iostream>
using namespace std;

int main()
{
	// declare and initialize number, positive, and negative
	int number = 0;
	int positive = 0;	//counter
	int negative = 0;	//counter

	// user enters a number other than 0, or enters 0 to end
	cout << "Enter a positive or negative integer (enter 0 to end): ";
	cin >> number;

	// while the number is not 0
	while (number != 0)
	{
		//update counters
		if (number > 0)
			positive += 1;
		else
			negative += 1;
		//end if

		// user can enter another number, 0 will end program
		cout << "Enter another positive or negative integer (enter 0 to end): ";
		cin >> number;
	}//end while
	
	cout << endl;
	// display number of positive and negative numbers
	cout << "Total positive integers: " << positive << endl;
	cout << "Total negative integers: " << negative << endl;
	return 0;
}	//end of main function
