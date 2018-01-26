//Lab14-6.cpp - writes records to a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{	
	string name = "";
	int num1 = 0;
	int num2 = 0;
	ofstream outFile;
	outFile.open("records.txt", ios::out);

	if (outFile.is_open())
	{
		cout << "Enter a name. Enter X to end. ";
		getline(cin, name);
		while (name != "X" && name != "x")
		{
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;

			outFile << name << "," << num1 << "," << num2 << endl;
			cout << "Enter a name. Enter X to end. ";
			getline(cin, name);
		} //end while
		outFile.close();
	}
	else
		cout << "Can't open the records.txt file." << endl;
	//end if
    return 0;
}   //end of main function