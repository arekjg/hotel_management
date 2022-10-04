#include <iostream>
#include <string>
#include <map>
using namespace std;
const int NUM_OF_ITEMS = 6;

// Based on the tutorial from: https://www.youtube.com/watch?v=m2xt5KIEHvc
// My changes:
//		replaced all variables with arrays
//		used for loops to store data in variables
//		used for loops to prompt text in terminal instead of writing everything in file
//		added sum function which calculates final price of purchased goods
//		

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
	int quant;
	int choice;
	// Quantity
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	// Food items sold
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
	// Total price of items
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
	int Total_foods = Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;

	// arrays: available items, their quantity and sold amount
	string items[NUM_OF_ITEMS] = { "Rooms", "Pasta", "Burger", "Noodles", "Shake", "Chicken" };
	int quantity[NUM_OF_ITEMS] = { };
	int sold[NUM_OF_ITEMS] = { };
	int unit_prices[NUM_OF_ITEMS] = { };
	int total_prices[NUM_OF_ITEMS] = { };

	// prompt the user to insert starting amounts of items
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
	
	// show inserted amounts
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
		cout << "\n" << NUM_OF_ITEMS + 1 << ") Information regarding sales and collection";
		cout << "\n" << NUM_OF_ITEMS + 2 << ") Exit";

		cout << "\n\n Please enter your choice: ";
		cin >> choice;


		// THIS FOR LOOP NEEDS CORRECTION
		for (int i = 0; i < NUM_OF_ITEMS; i++)
		{
			if (choice = i + 1)
			{
				cout << "\nEnter the number/amount of " << items[i] << " you want: ";
				cin >> quant;
				if (quantity[i] - sold[i] >= quant)
				{
					sold[i] = sold[i] + quant;
					total_prices[i] = total_prices[i] + (quant * unit_prices[i]);
					cout << "\n\nYou purchased " << quant << " " << items[i] << " for $" << quant * unit_prices[i];
				}
				else
				{
					cout << "\nOnly " << quantity[i] - sold[i] << " " << items[i] << " remaining in the hotel.";
				}
			}
		}


		
		//switch (choice)
		//{
		//	case 1:
		//		cout << "\nEnter the number of rooms you want: ";
		//		cin >> quant;
		//		if (Qrooms - Srooms >= quant)
		//		{
		//			Srooms = Srooms + quant;
		//			Total_rooms = Total_rooms + quant * 1200;
		//			cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you";
		//		}
		//		else
		//		
		//			cout << "\n\tOnly " << Qrooms - Srooms << " rooms remaining in hotel";
		//			break;
		//		
		//	case 2:
		//		cout << "\nEnter the pasta quantity you want: ";
		//		cin >> quant;
		//		if (Qpasta - Spasta >= quant)
		//		{
		//			Spasta = Spasta + quant;
		//			Total_pasta = Total_pasta + quant * 250;
		//			cout << "\n\n\t\t" << quant << " pasta is the order";
		//		}
		//		else
		//		
		//			cout << "\n\tOnly " << Qpasta - Spasta << " pasta remaining in hotel";
		//			break;
		//		
		//	case 3:
		//		cout << "\nEnter the burger quantity you want: ";
		//		cin >> quant;
		//		if (Qburger - Sburger >= quant)
		//		{
		//			Sburger = Sburger + quant;
		//			Total_burger = Total_burger + quant * 120;
		//			cout << "\n\n\t\t" << quant << " burger is the order";
		//		}
		//		else
		//		
		//			cout << "\n\tOnly " << Qburger - Sburger << " burger remaining in hotel";
		//			break;
		//		
		//	case 4:
		//		cout << "\nEnter the noodles quantity you want: ";
		//		cin >> quant;
		//		if (Qnoodles - Snoodles >= quant)
		//		{
		//			Snoodles = Snoodles + quant;
		//			Total_noodles = Total_noodles + quant * 140;
		//			cout << "\n\n\t\t" << quant << " noodles is the order";
		//		}
		//		else
		//		
		//			cout << "\n\tOnly " << Qnoodles - Snoodles << " noodles remaining in hotel";
		//			break;
		//		
		//	case 5:
		//		cout << "\nEnter the shake quantity you want: ";
		//		cin >> quant;
		//		if (Qshake - Sshake >= quant)
		//		{
		//			Sshake = Sshake + quant;
		//			Total_shake = Total_shake + quant * 120;
		//			cout << "\n\n\t\t" << quant << " shake is the order";
		//		}
		//		else
		//		
		//			cout << "\n\tOnly " << Qshake - Sshake << " shake remaining in hotel";
		//			break;
		//		
		//	case 6:
		//		cout << "\nEnter the chicken quantity you want: ";
		//		cin >> quant;
		//		if (Qchicken - Schicken >= quant)
		//		{
		//			Schicken = Schicken + quant;
		//			Total_chicken = Total_chicken + quant * 180;
		//			cout << "\n\n\t\t" << quant << " chicken is the order";
		//		}
		//		else
		//		
		//			cout << "\n\tOnly " << Qchicken - Schicken << " chicken remaining in hotel";
		//			break;
		//		
		//	case 7:
		//		cout << "\n\t\tDetails of sales and collection ";
		//		cout << "\n\nNumber of rooms we had: " << Qrooms;
		//		cout << "\n\nNumber of rooms we gave for rent: " << Srooms;
		//		cout << "\n\nRemaining rooms: " << Qrooms - Srooms;
		//		cout << "\n\nTotal rooms collection for the day: " << Total_rooms;
		//		cout << "\n\nTotal food colletion for the day: " << Total_foods;

		//	case 8:
		//		exit(0);
		//default:
		//	cout << "\nPlease select the numbers mentioned above";
		//	break;
		//}
	goto menu;

	return 0;
}