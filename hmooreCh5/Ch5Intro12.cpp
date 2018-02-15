#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price1 = 0.0;
	double price2 = 0.0;
	double total = 0.0;
	
	cout << "Enter the first price: $";
	cin >> price1;
	cout << "Enter the second price: $";
	cin >> price2;
	
	if (price1 > price2) {
		price2 /= 2;
	}
	else {
		price1 /= 2;
	}
	
	total = price1 + price2;
	
	cout << fixed << setprecision(2);
	cout << "Total amount owed: " << total << endl;
	return 0;
}