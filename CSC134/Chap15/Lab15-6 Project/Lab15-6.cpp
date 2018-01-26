//Lab15-6.cpp - displays an item name and an inventory quantity
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
using namespace std;

int main()
{
	Inventory itemObj;
	string itemName = "";
	int amount = 0;

	cout << "Enter item name: ";
	getline(cin, itemName);
	cout << "Enter amount in inventory: ";
	cin >> amount;
	
	//assign and display item values
	itemObj.setItem(itemName, amount);
	cout << "Name: " << itemObj.getName() << endl;;
	cout << "Amount: " << itemObj.getQuantity() << endl;
	return 0;
}	//end of main function
