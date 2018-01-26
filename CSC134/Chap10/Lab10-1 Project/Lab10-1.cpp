//Lab10-1.cpp - circle calculations
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
using namespace std;

//function prototypes
void displayChoices();
void getArea(double rad, double &area);
void getDiameter(double rad, double &diameter);

int main()
{
	int choice = 0;
	double radius = 0.0;
	double circleArea = 0.0;
	double circleDiameter = 0.0;

	displayChoices();
	cout << "Enter your choice (1 or 2): ";
	cin >> choice;

	if (choice < 1 || choice > 2)
		cout << "Invalid choice" << endl;
	else
	{
		cout << "Radius: ";
		cin >> radius;
		if (choice == 1)
		{
			getArea(radius, circleArea);
			cout << "Area: " << circleArea;
		}
		else
		{
			getDiameter(radius, circleDiameter);
			cout << "Diameter: " << circleDiameter;
		} //end if
		cout << endl;
	}  //end if
	return 0;
}   //end of main function

	//*****function definitions*****
void displayChoices()
{
	cout << "1   Circle area" << endl;
	cout << "2   Circle diameter" << endl;
}  //end displayChoices

void getArea(double rad, double &area)
{
	const double PI = 3.141593;
	area = PI * pow(rad, 2);
}  //end getArea function

void getDiameter(double rad, double &diameter)
{
	diameter = 2 * rad;
}  //end getDiameter function
