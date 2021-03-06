//SwatTheBugs30.cpp - displays bonus amounts
//Created/revised by Heather Moore on 2/28/18

#include <iostream>
using namespace std;

int main()
{
	const double COMM_RATE = 0.1;
	double sales = 0.0;
	double commission = 0.0;

	cout << "Enter a sales amount (negative number or 0 to end): ";
	cin >> sales;
	while (sales > 0.0)
	{
		commission = sales * COMM_RATE;
		cout << "Commission: $" << commission << endl;
        cout << "Enter a sales amount (negative number or 0 to end): ";
        cin >> sales;
	} //end while
    
    cout << "Thank you."
	return 0;
}	//end of main function
