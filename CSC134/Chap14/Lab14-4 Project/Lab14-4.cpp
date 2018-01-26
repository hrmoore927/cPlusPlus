//Lab14-4.cpp - saves records to and reads records from a file
//Created/revised by <your name> on <current date>

#include <fstream>
#include <iostream>
#include <string>
//end if
{
{
{
{
}
}  //end for
}  //end for
}//end of main function
cin >> firstName;
cin >> lastName;
cout << "Can't locate the Lab14-4.txt file.";
cout << "First name: ";
cout << "Last name: ";
cout << lastName << ", " << firstName << endl;
else
for (int num = 1; num < 6; num += 1)
for (int num = 1; num < 6; num += 1)
getline(inFile, lastName, '\n');
if (inFile.is_open())
ifstream inFile;
inFile.close();
inFile.open("Lab14-4.txt", ios::in);
int main()
ofstream outFile;
outFile << firstName << '#' << lastName << endl;
outFile.open("Lab14-4.txt", ios::out);
return 0;
string firstName = "";
string lastName = "";
using namespace std;
