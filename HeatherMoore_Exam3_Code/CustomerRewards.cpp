//PLEASE RUN IN G++
//Program displays reward points earned by month for customer based on membership type and total monthly purchase amount
//Created by Heather Moore on 4/2/18

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double standardPoints(double total);
double plusPoints(double total);
double premiumPoints(double total);

int main()
{
    //variables defined and initialized
    char membership = ' ';
    double purchaseAmt = 0.0;
    
    //user enters total monthly purchase
    cout << "Please enter your total monthly amount of purchases (enter zero or negative to exit): $";
    cin >> purchaseAmt;
    
    //while purchase amount is greater than zero
    while (purchaseAmt > 0) {
        //user enters membership type
        cout << "Standard (enter S)" << endl;
        cout << "Plus (enter L)" << endl;
        cout << "Premium (enter R)" << endl;
        cout << "Please enter membership type (see above memberships): ";
        cin >> membership;
        
        //if membership is standarad
        if (toupper(membership) == 'S') {
            cout << fixed << setprecision(0);
            cout << "Total reward points for this month: " << standardPoints(purchaseAmt) << endl;
        } 
        //if membership is plus
        else if (toupper(membership) == 'L') {
            cout << fixed << setprecision(0);
            cout << "Total reward points for this month: " << plusPoints(purchaseAmt) << endl;
        } 
        //if membership is premium
        else if (toupper(membership) == 'R') {
            cout << fixed << setprecision(0);
            cout << "Total reward points for this month: " << premiumPoints(purchaseAmt) << endl;
        } 
        //if user entered anything other than S, L, or R
        else {
            cout << "Invalid membership type" << endl;
        }
        
        //user enters total montly purchase
        cout << "Please enter you total monthly amount of purchases (enter zero to exit): $";
        cin >> purchaseAmt;
    }
    return 0;
}


//functions defined
double standardPoints(double total)
{
    double points = 0.0;
    if (total < 75) {
        points = total * .05;
    } else if (total >= 75 && total <= 149.99) {
        points = total * .075;
    } else if (total >= 150) {
        points = total * .1;
    } 
    return points;
}

double plusPoints(double total)
{
    double points = 0.0;
    if (total < 150) {
        points = total * .06;
    } else if (total >= 150) {
        points = total * .13;
    }
    return points;
}

double premiumPoints(double total)
{
    double points = 0.0;
    if (total < 200) {
        points = total * .04;
    } else if (total >= 200) {
        points = total * .15;
    }
    return points;
}