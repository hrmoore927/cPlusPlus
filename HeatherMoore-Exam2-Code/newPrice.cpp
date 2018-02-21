//newPrice.cpp - calculates and displays an item's new price based on the item code
//Created/revised by Heather Moore on 2/21/18

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declare and initialize code, old price, and new price
	int code = 0;
	double oldPrice = 0.0;
	double newPrice = 0.0;

    // input code and old price
	cout << "Item code (1, 2, or 3 only): ";
	cin >> code;
	cout << "Old price: ";
	cin >> oldPrice;

    // set decimal place to 2
	cout << fixed << setprecision(2) << endl;

    // select statement with output and calulation determined by code entered
	if (code == 1)
		cout << "New price: $" << oldPrice * 1.1 << endl;
	else if (code == 2)
		cout << "New price: $" << oldPrice * 1.5 << endl;
	else if (code == 3)
		cout << "New price: $" << oldPrice * 0.9 << endl;
	else // if code outside of 1-3 is entered, price will stay the same and error message will show
    {
        cout << "Old price: $" << oldPrice << endl;
        cout << "The item's price was not updated because the item code is not valid." << endl;
    }
	//end if

	return 0;
}	//end of main function