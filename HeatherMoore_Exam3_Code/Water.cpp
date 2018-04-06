//PLEASE RUN IN G++
//Program displays the current reading, the previous reading, the gallons used, and calculates the total water charge
//Created by Heather Moore on 4/3/18

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double calcGallons(double curReading, double prevReading);
double calcPrice(double gallonsUsed);

int main()
{
    // declare and initialize current and previous meter readings, gallons used, and total price
    double current = 0.0;
    double previous = 0.0;
    double gallons = 0.0;
    double price = 0.0;
    
    // input values for current and previous readings
    cout << "Please enter the current meter reading (enter zero to exit): ";
    cin >> current;
    while (current > 0) {
        cout << "Please enter the previous meter reading: ";
        cin >> previous;
        cout << fixed << setprecision(2) << endl;

        gallons = calcGallons(current, previous);
        //while gallons are greater than or equal to zero
        while (gallons >= 0 && current > 0) {
            //price is calculated
            price = calcPrice(gallons);
            //if price is less than 16.67, minimum price of 16.67 is set
            if(price < 16.67)
            {
                price = 16.67;
            }

            // display current and previous readings, gallons used, and total price
            cout << "Current reading: " << current << endl;
            cout << "Previous reading: " << previous << endl;
            cout << "Gallons used: " << gallons << endl;
            cout << "Total water charge: $" << price << endl;

            //user can enter readings for another bill
            cout << endl << "Please enter the current meter reading (enter zero to exit): ";
            cin >> current;
            if (current > 0) {
                cout << "Please enter the previous meter reading: ";
                cin >> previous;
                cout << fixed << setprecision(2) << endl;
                gallons = calcGallons(current, previous);
            } else {
                return 0;
            }
        }

        //Error message if invalid reading is entered
        cout << "Invalid meter reading entries." << endl;
        cout << endl << "Please enter the current meter reading (enter zero to exit): ";
        cin >> current;
    }
    
    return 0;
    // end of main function
}

//functions
double calcGallons(double curReading, double prevReading) {
    double gallonsUsed = 0.0;
    gallonsUsed = curReading - prevReading;
    return gallonsUsed;
}

double calcPrice(double gallonsUsed) {
    double pricePerGallon = 0.0;
    pricePerGallon = gallonsUsed * .007;
    return pricePerGallon;
}