#include <iostream>
#include <string>
using namespace std;
const int NUM_OF_ITEMS = 7;

// Based on the tutorial from: https://www.youtube.com/watch?v=m2xt5KIEHvc
// My changes:
//		replaced all variables with arrays
//		used for loops to store data in variables
//		used for loops to prompt text in terminal instead of writing everything in file
//		added sum function which calculates final price of purchased goods
//		made the app universal, so it's possible to change freely number of items and their names without changing anything in later code

int sum(int prices[])
{
	// sum all items in array
	int total = 0;
	for (int i = 0; i < NUM_OF_ITEMS; i++)
	{
		total += prices[i];
	}
	return total;
}

int main()
{
	int quant;		// desired quantity (user's input)
	int choice;		// user's choice

	// arrays: names of available items, quantities of items, quantities of sold items, unit prices, total prices of sold items
	string items[NUM_OF_ITEMS] = { "Room", "Pasta", "Burger", "Noodles", "Shake", "Chicken", "Pizza"};
	int quantity[NUM_OF_ITEMS] = { };
	int sold[NUM_OF_ITEMS] = { };
	int unit_prices[NUM_OF_ITEMS] = { };
	int total_prices[NUM_OF_ITEMS] = { };

	// prompt the user to insert starting quantities of items
	for (int i = 0; i < NUM_OF_ITEMS; i++)
	{
		cout << "Insert number of " << items[i] << ": " << endl;
		cin >> quantity[i];
	}

	// prompt the user to insert prices of each items
	for (int i = 0; i < NUM_OF_ITEMS; i++)
	{
		cout << "Insert price of one " << items[i] << ": " << endl;
		cin >> unit_prices[i];
	}
	
	// show inserted quantities
	cout << "\nQuantity of items we have: " << endl;
	for (int i = 0; i < NUM_OF_ITEMS; i++)
	{
		cout << items[i] << ": " << quantity[i] << " for $" << unit_prices[i] << " each." << endl;
	}

	// show menu
	menu:
		cout << "\nPlease select from the menu options: ";
		for (int i = 0; i < NUM_OF_ITEMS; i++)
		{
			cout << "\n" << i + 1 << ") " << items[i];
		}
		cout << "\n" << NUM_OF_ITEMS + 1 << ") Details of sales and collection";
		cout << "\n" << NUM_OF_ITEMS + 2 << ") Exit";
		cout << "\n\nPlease enter your choice: ";
		cin >> choice;

		// details of sales and collection
		if (choice == NUM_OF_ITEMS + 1)
		{
			cout << "\n.....Details of your order.....";
			cout << "\n\nYou purchased:\n";
			for (int i = 0; i < NUM_OF_ITEMS; i++)
			{
				if (sold[i] != 0)
				{
					cout << items[i] << ": " << sold[i] << " x $" << unit_prices[i] << " = " << total_prices[i] << "\n";
				}
			}
			int total = sum(total_prices);
			cout << "\n\nTotal price: $" << total << "\n\n";
			goto menu;
		}
		// exit app
		else if (choice == NUM_OF_ITEMS + 2)
		{
			exit(0);
		}

		// iterate through menu, find user's choice, sell an item or inform about lack of chosen item
		for (int i = 0; i < NUM_OF_ITEMS; i++)
		{
			if (choice == i + 1)
			{
				cout << "\nEnter the number/amount of " << items[i] << " you want: ";
				cin >> quant;
				if (quantity[i] - sold[i] >= quant)
				{
					sold[i] = sold[i] + quant;
					total_prices[i] = total_prices[i] + (quant * unit_prices[i]);
					cout << "\n\nYou purchased " << quant << " " << items[i] << " for $" << quant * unit_prices[i] << "\n\n";
				}
				else
				{
					cout << "\nOnly " << quantity[i] - sold[i] << " " << items[i] << " remaining in the hotel.\n\n";
				}
			}
		}

	goto menu;		// jump to menu

	return 0;
}