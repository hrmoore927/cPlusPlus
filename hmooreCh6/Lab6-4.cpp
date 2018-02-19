//Lab6-4.cpp - displays the price of a ticket 
//Created/revised by Heather Moore on 2/19/18

#include <iostream>
using namespace std;

int main()
{
    int price = 0;
    int age = 0;
    cout << "Age (years): ";
    cin >> age;
    if (age < 0)
        cout << "Invalid age" << endl;
    else if (age > 64)
        price = 6;
    else if (age > 3)
        price = 9;
    else
        price = 0;
    //end if

cout << "Price: $" << price << endl;
}//end of main function