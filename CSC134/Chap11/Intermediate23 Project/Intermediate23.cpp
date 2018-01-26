//Intermediate23.cpp
//Displays the total amount won, the average amount won, and 
//the day number of the highest amount won
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void getTotal();
double getAvg();
int getHighDay();

int main()
{
	int winnings[5] = {12500, 9000, 2400, 15600, 5400};
	int total = 0;
	double average = 0.0;
	int highDay = 0;


	cout << fixed << setprecision(2);
	cout << "Total amount won: $" << total << endl;
	cout << "Average daily amount won: $" << average << endl;
	cout << "The contestant's highest amount won was on day "
		<< highDay << "." << endl;
	return 0;
}	//end of main function

//*****function definitions*****
void getTotal()
{

}	//end of getTotal function

double getAvg()
{

}  //end of getAvg function

int getHighDay()
{

}  //end of getHighDay function
