#include <iostream>
using namespace std;

int main()
{
    int numPeople = 0;
    int price = 0;
    cout << "Enter the number of people registered: ";
    cin >> numPeople;
    if (numPeople < 0)
        cout << "Invalid number of people" << endl;
    else if (numPeople > 20)
        price = 75;
    else if (numPeople > 5)
        price = 100;
    else
        price = 125;
    price = price * numPeople;
    cout << "Price: $" << price << endl;
}