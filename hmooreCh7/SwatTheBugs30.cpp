//SwatTheBugs30.cpp - displays bonus amounts
//Created/revised by Heather Moore on 3/5/18

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declare and initialize comm_rate, sales, and commission
	const double COMM_RATE = 0.1;
	double sales = 0.0;
	double commission = 0.0;

	// user enters sales amount
	cout << "Enter a sales amount (negative number or 0 to end): ";
	cin >> sales;

	// while sales is greater than 0
	while (sales > 0.0)
	{
		// calculate commission, display commission, allow user to enter next sales amount
		commission = sales * COMM_RATE;
		cout << fixed << setprecision(2);
		cout << "Commission: $" << commission << endl;
		cout << "Enter next sales amount: ";
		cin >> sales;
	} //end while
	return 0;
}	//end of main function
