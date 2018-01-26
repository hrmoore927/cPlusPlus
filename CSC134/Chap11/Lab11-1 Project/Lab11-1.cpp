//Lab11-1.cpp - calculates the total sales
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{	
    int domestic[6] = {75000, 30200, 67800, 
					   45000, 60000, 67500};
	int international[6] = {40000, 75000, 64000, 
							32600, 47800, 39000};
	int totalSales = 0;

	for (int x = 0; x < 6; x += 1)
		totalSales += domestic[x] + international[x];
	//end for
	cout << "Total sales: $" << totalSales << endl;
    return 0;
}   //end of main function