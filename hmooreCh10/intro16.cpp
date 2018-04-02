// Program displays the gross pay for one or more employees
// Created by Heather Moore on 4/1/18

#include <iostream>

using namespace std;

// function prototypes
void regPay(int hours, double rate, double &gross);
void overtimePay(int hours, double rate, double &gross);
void doubletimePay(int hours, double rate, double &gross);

int main()
{
    int hours = 0;
    int overtimeHours = 0;
    int doubletimeHours = 0;
    double overtimeGross = 0.0;
    double doubletimeGross = 0.0;
    double rate = 0.0;
    double total = 0.0;
    
    //user enters hours worked
    
    cout << "Please enter the hours worked this week (enter a negative number to exit): ";
    cin >> hours;
    //while hours is greater than 0 user enters pay rate
    while (hours >= 0) {
        cout << "Please enter the hourly pay rate: ";
        cin >> rate;
        
        //if hours are less than or equal to 37
        if (hours <= 37) {
            regPay(hours, rate, total);
            cout << "Gross pay: $" << total << endl;
        } 
        //else if hours are greater than 37 and less than or equal to 50
        else if (hours > 37 & hours <= 50) {
            overtimePay(hours, rate, total);
            cout << "Gross pay: $" << total << endl;
        } 
        //else if hours are greater than 50
        else if (hours > 50) {
            doubletimePay(hours, rate, total);
            cout << "Gross pay: $" << total << endl;
        } 
        
        //user can repeat process or enter a negative to exit
        cout << "Please enter the hours worked this week (enter a negative number to exit): ";
        cin >> hours;
    }
    return 0;
    
}

//functions
void regPay(int hours, double rate, double &gross) {
    gross = hours * rate;
}

void overtimePay(int hours, double rate, double &overtimeTotal) {
    int overtimeHours = hours - 37;
    double gross = 37 * rate;
    overtimeTotal = (overtimeHours * (rate + (rate / 2))) + gross;
}

void doubletimePay(int hours, double rate, double &doubletimeTotal) {
    int doubletimeHours = hours - 50;
    doubletimeTotal = (37 * rate) + (13 * (rate + (rate / 2))) + (doubletimeHours * (rate * 2));
}