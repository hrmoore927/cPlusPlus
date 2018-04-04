// Program displays shipping costs based on membership status
// Created by Heather Moore on 4/1/18

#include <iostream>

using namespace std;

// function prototypes
void standardShip(double &total, double &shipping);
void premiumShip(double &total, double &shipping);

int main()
{
    double totalOwed = 0.0;
    double ship = 0.0;
    string membership = "";
    double grandTotal = 0.0;
    
    //user enters the total owed
    cout << "Please enter the total owed: ";
    cin >> totalOwed;
    //user enters membership type
    cout << "Please enter your membership type (standard or premium): ";
    cin >> membership;
    
    //if membership is standard
    if (membership == "standard") {
        standardShip(totalOwed, ship);
        cout << "Total shipping: $" << ship << endl;
        cout << "Grand total: $" << ship + totalOwed << endl;
    } 
    //else if membership is premium
    else if (membership == "premium") {
        premiumShip(totalOwed, ship);
        cout << "Total shipping: $" << ship << endl;
        cout << "Grand total: $" << ship + totalOwed << endl;
    } 
    //else if membership is anything else
    else {
        cout << "Invalid membership type" << endl;
    }
}

//functions
void standardShip(double &total, double &shipping) {
    if (total <= 100) {
        shipping = 12.99;
    } else {
        shipping = 4.99;
    }
}

void premiumShip(double &total, double &shipping) {
    if (total <= 49.99) {
        shipping = 4.99;
    } else {
        shipping = 0;
    }
}