// water.cpp displays the current reading, the previous reading, the gallons used, and calculates the total water charge
//Created by Heather Moore on 2/21/18

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declare and initialize current and previous meter readings, gallons used, and total price
    double current = 0.0;
    double previous = 0.0;
    double gallons = 0.0;
    double price = 0.0;
    
    // input values for current and previous readings
    cout << "Please enter the current meter reading: ";
    cin >> current;
    cout << "Please enter the previous meter reading: ";
    cin >> previous;
    cout << fixed << setprecision(2) << endl;
    
    // calculate gallons used and price, price is a minium of 16.67
    gallons = current - previous;
    price = gallons * .007;
    if(price < 16.67)
    {
        price = 16.67;
    }
    
    // display current and previous readings, gallons used, and total price
    cout << "Current reading: " << current << endl;
    cout << "Previous reading: " << previous << endl;
    cout << "Gallons used: " << gallons << endl;
    cout << "Total water charge: $" << price << endl;
    
    return 0;
    // end of main function
}