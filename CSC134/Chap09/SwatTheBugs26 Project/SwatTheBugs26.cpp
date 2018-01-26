//SwatTheBugs26.cpp - displays the miles per gallon
//Created/revised by <your name> on <current date>

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
	
	cout << "Enter the number of miles: ";
	cin >> miles;
	cout << "Enter number of gallons: ";
	cin >> gallons;

	milesPerGal = calcMpg(gallons, miles);
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