//ModifyThis13.cpp - displays the length of a right 
//triangle's hypotenuse
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double sideA = 0.0;
	double sideB = 0.0;
	double sumSqrs = 0.0;
	double hypotenuse = 0.0;

	//get lengths of two sides
	cout << "Side a length: ";
	cin >> sideA;
	cout << "Side b length: ";
	cin >> sideB;

	//calculate the hypotenuse length
	sumSqrs = pow(sideA, 2) + pow(sideB, 2);
	hypotenuse = sqrt(sumSqrs);

	//display the hypotenuse length
	cout << fixed << setprecision(1);
	cout << "Hypotenuse length: " << hypotenuse << endl;
	return 0;
}	//end of main function