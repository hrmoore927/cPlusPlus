//Advanced28.cpp - displays the pay rate 
//corresponding to the pay code entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int codesAndRates[7][2] = {{1, 8}, 
							   {2, 14}, 
							   {5, 10}, 
							   {6, 20},
							   {7, 15}, 
							   {9, 16}, 
							   {11, 20}};
	int payCode = 0;

	cout << "Pay code (1, 2, 5, 6, 7, 9, or 11). " << endl;
	cout << "Enter a negative number or 0 to end: ";
	cin >> payCode;
	

	return 0;
}	//end of main function
