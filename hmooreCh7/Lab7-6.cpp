//Lab7-6.cpp - calculates and displays the average price
//Created/revised by Heather Moore on 2/28/18

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declare and initialize numPrices, price, totalPrice, and avgPrice
	int numPrices     = 0;    //counter
	double price      = 0.0;
	double totalPrice = 0.0;  //accumulator
	double avgPrice   = 0.0;

	// user enters first price
	cout << "Price (negative number to end): ";
	cin >> price;

	// while price is greater than or equal to 0, numPrices increases by 1, totalPrice increases by price amount, and user enters next price
	while (price >= 0.0)
	{    
		numPrices += 1;    
		totalPrice += price;    
		cout << "Next price: ";  
		cin >> price;
	} //end while

	// if numPrices is greater than 0, avgPrice is calculated
	if (numPrices > 0) 
		avgPrice = totalPrice / numPrices;
	// else avgPrice equals 0
	else    
		avgPrice = 0.0;
	// end if
	// set precision to 2 and display average price
	cout << fixed << setprecision(2) << endl;
	cout << "Average price: " << avgPrice << endl;
	return 0;
}	//end of main function