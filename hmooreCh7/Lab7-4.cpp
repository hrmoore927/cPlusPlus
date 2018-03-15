//Lab7-4.cpp - displays the average electric bill
//Created/revised by Heather Moore on 2/28/18

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// declare and initialize months, avgBill, bill, and totalBills
	int months = 0;
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;

	// user enters amount of bill for month 1
	cout << "Bill for month 1 (enter negative to end): ";
	cin >> bill;
	
	// while loop cycles to process bills greater than or equal to 0
	while (bill >= 0.0)
	{
		// totalBills increases by bill amount
		totalBills += bill;
		// months increases by 1
		months += 1;
		// user enters next bill amount
		cout << "Bill for month " << months + 1 << " (enter negative to end): ";
		cin >> bill;
	} // end while

	// if months is greater than 0, find and display avgBill
	if (months > 0)
	{
		avgBill = totalBills / months;
		cout << fixed << setprecision(2);
		cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
	}
	// else display message
	else
		cout << "No bill amount entered." << endl;
	//end if
	return 0;
}	//end of main function