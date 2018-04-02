//SwatTheBugs24.cpp - displays a bonus 
//Created/revised by Heather Moore on 4/1/18

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void calcBonus(double &salesAmt, double &bonusRate, double &bonusAmt);

int main()
{	
	double sales = 0.0;
	double rate = 0.0;
	double bonus = 0.0;

	cout << "Enter sales: ";
	cin >> sales;
	cout << "Enter bonus rate (in decimal form): ";
	cin >> rate;

	cout << fixed << setprecision(2);
	calcBonus(sales, rate, bonus);
	cout << "Bonus: $" << bonus << endl;
    return 0;
}   //end of main function

//*****function definitions*****
void calcBonus(double &salesAmt, double &bonusRate, double &bonusAmt)
{
	bonusAmt = salesAmt * bonusRate;
} //end of calcAndDisplayBonus function
