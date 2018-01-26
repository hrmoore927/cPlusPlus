//SwatTheBugs30.cpp - displays the contents of a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string name = "";
	int num1 = 0;
	int num2 = 0;
	
	ifstream inFile;
	inFile.open("SwatTheBugs30.txt");
	if (inFile.is_open())
	{
		//read a record
		getline(inFile, name);
		inFile >> num1;
		inFile >> num2;
	
		while (inFile.eof())
		{
			//display the record
			cout << name << ", " << num1 << ", " << num2 << endl;
			//read another record
			getline(inFile, name);
			inFile >> num1;
			inFile >> num2;
		} //end while
		inFile.close();
	}
	else
		cout << "The SwatTheBugs30.txt file could not be opened." << endl;
	//end if
	return 0;
}	//end of main function