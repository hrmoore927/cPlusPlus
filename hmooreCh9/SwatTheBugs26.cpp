//SwatTheBugs26.cpp - displays the miles per gallon
//Created/revised by Heather Moore on 3/28/18

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double calcMpg(double, double);

int main()
{
	double miles = 0.0;
	double gallons = 0.0;
	double milesPerGal = 0.0;
	
    //user enters number of miles
	cout << "Enter the number of miles: ";
	cin >> miles;
    //user enters number of gallons
	cout << "Enter number of gallons: ";
	cin >> gallons;

    //function is used to calculate miles per gallon
	milesPerGal = calcMpg(miles, gallons);
	cout << fixed << setprecision(1);
	cout << "Miles per gallon: " << milesPerGal << endl;
	return 0;
}	//end of main function

//*****function definitions*****
double calcMpg(double distance, double galUsed)
{
	double mpg = 0.0;
	mpg = distance / galUsed;
	return mpg;
}	//end of calcMpg function