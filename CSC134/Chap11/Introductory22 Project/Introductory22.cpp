//Introductory22.cpp - displays the average number of pounds ordered
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double getAvg();

int main()
{
	double pounds[6] = {10, 15.5, 17, 18.5, 11, 12.5};
	double average = 0.0;

	average = getAvg();
	cout << fixed << setprecision(2);
	cout << "Average number of pounds ordered: " << average << endl;
	return 0;
}	//end of main function

//*****function definitions*****
double getAvg()
{

}	//end of getAvg function