//song.cpp - displays the names of the gifts in the 
//song "The Twelve Days of Christmas"
//Created/revised by Heather Moore on 2/21/18

#include <iostream>
using namespace std;

int main()
{
    // declare and initialize day
	int day = 0;

    // input day number
	cout << "Enter the day (1 through 12): ";
	cin >> day;
    
    // begin switch statement for day entered
	switch (day)
	{
    // output for day 1
	case 1:
		cout << "1 partridge in a pear tree" << endl;
        break; // break statement exits the switch statement after the selected output
    // output for day 2
	case 2:
		cout << "2 turtle doves" << endl;
        break;
    // output for day 3
	case 3:
		cout << "3 french hens" << endl;
        break;
    // output for day 4
	case 4:
		cout << "4 calling birds" << endl;
        break;
    // output for day 5
	case 5:
		cout << "5 golden rings" << endl;
        break;
	// output for day 6	
	case 6:
		cout << "6 geese a laying" << endl;
        break;
	// output for day 7	
	case 7:
		cout << "7 swans a swimming" << endl;
        break;
	// output for day 8	
	case 8:
		cout << "8 maids a milking" << endl;
        break;
	// output for day 9	
	case 9:
		cout << "9 ladies dancing" << endl;
        break;
	// output for day 10	
	case 10:
		cout << "10 lords a leaping" << endl;
        break;
    // output for day 11
	case 11:
		cout << "11 pipers piping" << endl;
        break;
	// output for day 12	
	case 12:
		cout << "12 drummers drumming" << endl;
		break;
    // default for any number outside of the 1-12 range
	default:
		cout << "Error in day number." << endl;
	} //end switch
	return 0;
}	//end of main function
