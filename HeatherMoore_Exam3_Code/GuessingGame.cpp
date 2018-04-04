//PLEASE RUN IN G++
//Program allows the user to pick the range to generate a random number for the user to guess
//Created by Heather Moore on 4/3/18

#include <iostream>
#include <ctime>
using namespace std;

//function prototype
void randomNum(int &upper, int &lower, int &number);

int main()
{
    //variables defined and initialized
	int randomNumber = 0;
	int numberGuess = 0;
    int minNum = 0;
    int maxNum = 0;

    //user enters minimum number
    cout << "Please enter the minimum random number (enter zero or negative to exit): ";
    cin >> minNum;
    while (minNum > 0) {
        //user enters maximum number
        cout << "Please enter the maximum random number: ";
        cin >> maxNum;
        
        //while the minimum number is less than the maximum number
        while (minNum < maxNum) {
            //random number is generated
            randomNum(maxNum, minNum, randomNumber);
            //user enters first guess from range that they specified
            cout << "Guess a number from " << minNum << " through " << maxNum << ": ";
            cin >> numberGuess;

            //while guess is wrong
            while (numberGuess != randomNumber)
            {
                //if the guess if less than the random number
                if (numberGuess < randomNumber) {
                    cout << "Sorry, guess higher: ";
                    cin >> numberGuess;
                } 
                //if the guess if greater than the random number
                else {
                    cout << "Sorry, guess lower: ";
                    cin >> numberGuess;
                } //end if else
            }	//end while

            //if guess if right
            cout << endl << "Yes, the number is "
                << randomNumber << "." << endl; 

            //user can play again
            cout << "Please enter the minimum random number (enter zero or negative to exit): ";
            cin >> minNum;
            //if the minimum number is greater than zero
            if (minNum > 0) {
                cout << "Please enter the maximum random number: ";
                cin >> maxNum;
            } 
            //else program will end
            else {
                cout << "Thanks for playing!" << endl;
                return 0;
            }
        }
        cout << "Minimum number was greater than maximum number. Please try again." << endl;
        cout << "Please enter the minimum random number (enter zero or negative to exit): ";
        cin >> minNum;
    }
    cout << "Thanks for playing!" << endl;
	return 0;
}   //end of main function


//function
void randomNum(int &upper, int &lower, int &number) {
    srand(static_cast<int>(time(0)));
	number = lower + rand() % (upper - lower + 1);
}