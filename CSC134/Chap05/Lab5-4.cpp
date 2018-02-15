//Lab5-4.cpp - displays the total due for tickets
//Created/revised by <your name> on <current date>

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const int TICKET_PRICE = 75;
	int tickets = 0;
	int total = 0;
	cout << "Number of tickets you want to purchase (the maximum is 10): ";
	cin >> tickets;
	if (tickets < 1 || tickets > 10) {
		cout << "Invalid number of tickets." << endl;
	}
	else {
		total = tickets * TICKET_PRICE;
		cout << fixed << setprecision(0);
		cout << "Price: $" << total << endl;
	}
//end if
return 0;
} //end of main function












