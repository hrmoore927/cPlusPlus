//TryThis16.cpp - displays the total sales
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sales[3][2] = {{3567.85, 2589.99},
						  {3239.67, 2785.55},
						  {1530.50, 1445.80}};
	double total = 0.0;	//accumulator

	//accumulate sales
	for (int store = 0; store < 3; store += 1)
		for (int book = 0; book < 2; book += 1)
			total += sales[store][book];
		//end for
	//end for
	
	cout << fixed << setprecision(2);
	cout << "Total sales: $" << total << endl;
	return 0;
}	//end of main function