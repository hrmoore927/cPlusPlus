// Program displays shipping costs based on membership status
// Created by Heather Moore on 3/28/18

#include <iostream>

using namespace std;

// function prototypes
double standardShip(double &total, double shipping);
double premiumShip(double &total, double shipping);

int main()
{
    double total = 0.0;
    double shipping = 0.0;
    string membership = "";
    double grandTotal = 0.0;
    
    //user enters the total owed
    cout << "Please enter the total owed: ";
    cin >> total;
    //user enters membership type
    cout << "Please enter your membership type (standard or premium): ";
    cin >> membership;
    
    //if membership is standard
    if (membership == "standard") {
        cout << "Total shipping: $" << standardShip(total, shipping) << endl;
        cout << "Grand total: $" << standardShip(total, shipping) + total << endl;
    } 
    //else if membership is premium
    else if (membership == "premium") {
        cout << "Total shipping: $" << premiumShip(total, shipping) << endl;
        cout << "Grand total: $" << premiumShip(total, shipping) + total << endl;
    } 
    //else if membership is anything else
    else {
        cout << "Invalid membership type" << endl;
    }
}

//functions
double standardShip(double &total, double shipping) {
    if (total <= 100) {
        shipping = 12.99;
        return shipping;
    } else {
        shipping = 4.99;
        return shipping;
    }
}

double premiumShip(double &total, double shipping) {
    if (total <= 100) {
        shipping = 4.99;
        return shipping;
    } else {
        shipping = 0;
        return shipping;
    }
}