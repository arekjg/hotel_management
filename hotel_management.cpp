﻿#include <iostream>
#include <string>
#include <map>
using namespace std;

// Based on the tutorial from: https://www.youtube.com/watch?v=m2xt5KIEHvc
// My changes:
//		replaced all variables to arrays
//		used for loops to store data in variables
//		used for loops to prompt some texts in terminal instead of writing everything in file

int sum(int prices[])
{
	int size = sizeof(prices);
	int total_sum = 0;

	for (int i = 0; i < (size / 4); i++)
	{
		total_sum += prices[i];
	}

	return total_sum;
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
	string items[6] = { "Rooms", "Pasta", "Burger", "Noodles", "Shake", "Chicken" };
	int quantity[6] = { };
	int sold[6] = { };
	int total_prices[6] = { };

	// prompt the user to insert starting amounts of items
	for (int i = 0; i < 6; i++)
	{
		cout << "Insert number of " << items[i] << ": " << endl;
		cin >> quantity[i];
	}
	
	// show inserted amounts
	cout << "\nQuantity of items we have: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << items[i] << ": " << quantity[i] << endl;
	}


	//cout << "\n\n";
	//int total = sum(quantity);
	//cout << total << endl;

	// show menu
	menu:
		cout << "\nPlease select from the menu options: ";
		for (int i = 0; i < 6; i++)
		{
			cout << "\n" << i + 1 << ") " << items[i];
		}
		cout << "\n7) Information regarding sales and collection";
		cout << "\n8) Exit";

		cout << "\n\n Please enter your choice: ";
		cin >> choice;

		
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