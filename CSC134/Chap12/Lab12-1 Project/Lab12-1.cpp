//Lab12-1.cpp - calculates the total company sales
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{	
	int company[2][6] = {{75000, 30200, 67800,
						  45000, 60000, 67500},
						 {40000, 75000, 64000,
						  32600, 47800, 39000}};
	int companySales = 0;

	for (int location = 0; location < 2; location += 1)
		for (int month = 0; month < 6; month += 1)
			companySales += company[location][month];
		//end for
	//end for
	cout << "Company sales: $" << companySales << endl;
    return 0;
}   //end of main function