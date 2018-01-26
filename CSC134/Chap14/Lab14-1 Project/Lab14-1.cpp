//Lab14-1.cpp - saves movie titles and release
//years in a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string title = "";
	string year = "";
	ofstream outFile;

	outFile.open("movies.txt", ios::out);

	if (outFile.is_open())
	{
		cout << "Movie title (-1 to stop): ";
		getline(cin, title);
		while (title != "-1")
		{
			cout << "Year released: ";
			getline(cin, year);
			outFile << title << '#' << year << endl;

			cout << "Movie title (-1 to stop): ";
			getline(cin, title);
		}  //end while
		outFile.close();
	}
	else
		cout << "The movies.txt file could not be opened." 
		     << endl;
	//end if
	return 0;
}	//end of main function