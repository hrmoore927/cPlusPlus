//TryThis17.cpp - gets and displays order amounts
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//function prototype
void displayArray(int nums[4][3]);

int main()
{
	int orders[4][3] = {0};

	//store data in the array
	for (int region = 0; region < 4; region += 1)
		for (int month = 0; month < 3; month += 1)
		{
			cout << "Region " << region + 1 
				<< ", Month " << month + 1
				<< " orders: ";
			cin >> orders[region][month];
		} //end for
	  //end for

	//display the contents of the array
	displayArray(orders);
	return 0;
} //end of main function

//*****function definitions*****
void displayArray(int nums[4][3])
{
	cout << endl << "Array contents:" << endl;
	for (int region = 0; region < 4; region += 1)
	{
		cout << "Region " << region + 1
			<< ": " << endl;
		for (int month = 0; month < 3; month += 1)
			cout << "     Month " << month + 1
			<< ": " << nums[region][month]
			<< endl;
		//end for
	} //end for
}  //end of displayArray function
