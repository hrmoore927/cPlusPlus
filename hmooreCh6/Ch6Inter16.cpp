#include <iostream>
using namespace std;

int main()
{
    int first = 0;
    int second = 0;
    int third = 0;
    int smallest = 0;
    int largest = 0;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third;
    if (first > second && first > third)
    {
        largest = first;
        if (second > third)
            smallest = third;
        else
            smallest = second;
            
    }        
    else if (second > first && second > third)
    {
        largest = second;
        if (first > third)
            smallest = third;
        else
            smallest = first;
    } 
    else if (third > first && third > second)
    {
        largest = third;
        if (first > second)
            smallest = second;
        else
            smallest = first;
    }
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;
}