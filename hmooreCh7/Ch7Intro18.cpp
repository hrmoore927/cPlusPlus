// Ch7Intro18.cpp : Calculates gross pay for employees and displays total hours, regular hours, overtime hours, regular pay, overtime pay, and gross pay.
// Created by Heather Moore on 3/5/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// declare and initialize hours, regHours, pay, gross, overtimePayRate, overtimePayAmount, and overtimeHours
	int hours = 0;
	int regHours = 40;
	double pay = 0.0;
	double gross = 0.0;
	double overtimePayRate = 0.0;
	double overtimePayAmount = 0.0;
	double overtimeHours = 0.0;

	// user enters total hours the employee worked
	cout << "Please enter the total hours the employee worked (enter 0 to end): ";
	cin >> hours;
	
	// while the hours are greater than 0, user enters hourly rate
	while (hours > 0) 
	{
		cout << "Please enter the employee's hourly rate: ";
		cin >> pay;
		// if the hours are greated than 40, find overtime hours, overtime pay rate, overtime pay amount, regular pay, and gross pay
		if (hours > 40) 
		{
			overtimeHours = hours - 40;
			overtimePayRate = pay * 1.5;
			overtimePayAmount = overtimePayRate * overtimeHours;
			pay = regHours * pay;
			cout << fixed << setprecision(2);
			gross = pay + overtimePayAmount;
		}
		// else calculate gross pay for regular pay and hours
		else
		{
			cout << fixed << setprecision(2);
			gross = pay * hours;
		} // end if
		
		// display number of hours employee worked and their gross pay
		cout << "Total hours: " << hours << endl;
		cout << "Regular hours: " << regHours << endl;
		cout << "Overtime hours: " << overtimeHours << endl;
		cout << "Regular pay: " << pay << endl;
		cout << "Overtime pay: " << overtimePayAmount << endl;
		cout << "Gross pay: " << gross << endl;
		
		// user can enter another employee's hours or enter an negative to end program
		cout << "Please enter the hours the employee worked (enter negative number to end): ";
		cin >> hours;
	} // end while

	// if hours are less than 0, display message
	cout << "Employee did not work." << endl;

	return 0;
}

