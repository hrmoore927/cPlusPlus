//SwatTheBugs37.cpp - calculates and displays
//the total of the prices entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string item = "";
	double price = 0.0;
	double total = 0.0; 

	cout << "Item name (X to end): ";
	getline(cin, item);

	while (item != "X" && item != "x")
	{
		cout << "Item price: ";
		cin >> price;
		total += price;
		cout << "Item name (X to end): ";
		getline(cin, item);
	}	//end while

	cout << fixed << setprecision(2);
	cout << "Total: $" << total << endl;
	return 0;
}	//end of main function