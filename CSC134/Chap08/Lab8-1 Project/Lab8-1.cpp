//Lab8-1.cpp
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int maxRows = 0;

	cout << "Maximum number of rows: ";
	cin >> maxRows;

	for (int row = 0; row < maxRows; row += 1)
	{
		for (int space = 0; space < maxRows - row; space += 1)
			cout << " ";
		//end for

		for (int asterisk = 0; asterisk <= row; asterisk += 1)
			cout << "* ";
		//end for

		cout << endl;
	}  //end for
	return 0;
}	//end of main function