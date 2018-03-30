// Program displays the gross pay for one or more employees
// Created by Heather Moore on 3/27/18

#include <iostream>

using namespace std;

// function prototypes
double regPay(int hours, double rate, double &gross);
double overtimePay(int hours, double rate, double &gross);
double doubletimePay(int hours, double rate, double &gross);

int main()
{
    int hours = 0;
    int overtimeHours = 0;
    int doubletimeHours = 0;
    double rate = 0.0;
    double gross = 0.0;
    
    //user enters hours worked
    
    cout << "Please enter the hours worked this week (enter a negative number to exit): ";
    cin >> hours;
    //while hours is greater than 0 user enters pay rate
    while (hours >= 0) {
        cout << "Please enter the hourly pay rate: ";
        cin >> rate;
        
        //if hours are less than or equal to 37
        if (hours <= 37) {
            cout << "Gross pay: $" << regPay(hours, rate, gross) << endl;
        } 
        //else if hours are greater than 37 and less than or equal to 50
        else if (hours > 37 & hours <= 50) {
            overtimeHours = hours - 37;
            cout << "Gross pay: $" << regPay(37, rate, gross) + overtimePay(overtimeHours, rate, gross) << endl;
        } 
        //else if hours are greater than 50
        else if (hours > 50) {
            doubletimeHours = hours - 50;
            cout << "Gross pay: $" << regPay(37, rate, gross) + overtimePay(13, rate, gross) + doubletimePay(doubletimeHours, rate, gross) << endl;
        } 
        
        //user can repeat process or enter a negative to exit
        cout << "Please enter the hours worked this week (enter a negative number to exit): ";
        cin >> hours;
    }
    return 0;
    
}

//functions
double regPay(int hours, double rate, double &gross) {
    gross = hours * rate;
    return gross;
}

double overtimePay(int hours, double rate, double &gross) {
    gross = hours * (rate + (rate / 2));
    return gross;
}

double doubletimePay(int hours, double rate, double &gross) {
    gross = hours * (rate * 2);
    return gross;
}