#include <iostream>
#include <string>
#include <map>
using namespace std;

// Based on the tutorial from: https://www.youtube.com/watch?v=m2xt5KIEHvc

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

	map<string, int> quantity;
	quantity["rooms"] = 0;
	quantity["pasta"] = 0;
	quantity["burger"] = 0;
	quantity["noodles"] = 0;
	quantity["shake"] = 0;
	quantity["chicken"] = 0;

	map<string, int> sold;
	sold["rooms"] = 0;
	sold["pasta"] = 0;
	sold["burger"] = 0;
	sold["noodles"] = 0;
	sold["shake"] = 0;
	sold["chicken"] = 0;




	/*cout << "\n Insert a number ";
	cin >> hotel["Rooms"];
	cout << hotel["Rooms"];*/

	//map<string, int> ::iterator iter;
	//cout << "keys" << " & " << "values" << endl;
	//for (iter = hotel.begin(); iter != hotel.end(); iter++)
	//{
	//	cout << (*iter).first << "    " << (*iter).second << "\n";
	//}

	for (auto it = quantity.begin(); it != quantity.end(); it++)
	{
		cout << "Insert number of " << it->first << endl;
		cin >> it->second;
	}


	cout << "\n Quantity of items we have: " << endl;
	for (auto it = quantity.begin(); it != quantity.end(); it++)
	{
		cout << it->first << "    " << it->second << endl;
	}


	//cout << "\n Rooms available: ";
	//cin >> Qrooms;
	//cout << "\n Quantity of pasta: ";
	//cin >> Qpasta;
	//cout << "\n Quantity of burger: ";
	//cin >> Qburger;
	//cout << "\n Quantity of noodles: ";
	//cin >> Qnoodles;
	//cout << "\n Quantity of shake: ";
	//cin >> Qshake;
	//cout << "\n Quantity of chicken: ";
	//cin >> Qchicken;

	menu:
		cout << "\n\ Please select from the menu options: ";
		cout << "\n\n1) Rooms";
		cout << "\n2) Pasta";
		cout << "\n3) Burger";
		cout << "\n4) Noodles";
		cout << "\n5) Shake";
		cout << "\n6) Chicken";
		cout << "\n7) Information regarding sales and collection";
		cout << "\n8) Exit";

		cout << "\n Please enter your choice";
		cin >> choice;

	//	switch (choice)
	//	{
	//		case 1:
	//			cout << "\nEnter the number of rooms you want: ";
	//			cin >> quant;
	//			if (Qrooms - Srooms >= quant)
	//			{
	//				Srooms = Srooms + quant;
	//				Total_rooms = Total_rooms + quant * 1200;
	//				cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you";
	//			}
	//			else
	//			
	//				cout << "\n\tOnly " << Qrooms - Srooms << " rooms remaining in hotel";
	//				break;
	//			
	//		case 2:
	//			cout << "\nEnter the pasta quantity you want: ";
	//			cin >> quant;
	//			if (Qpasta - Spasta >= quant)
	//			{
	//				Spasta = Spasta + quant;
	//				Total_pasta = Total_pasta + quant * 250;
	//				cout << "\n\n\t\t" << quant << " pasta is the order";
	//			}
	//			else
	//			
	//				cout << "\n\tOnly " << Qpasta - Spasta << " pasta remaining in hotel";
	//				break;
	//			
	//		case 3:
	//			cout << "\nEnter the burger quantity you want: ";
	//			cin >> quant;
	//			if (Qburger - Sburger >= quant)
	//			{
	//				Sburger = Sburger + quant;
	//				Total_burger = Total_burger + quant * 120;
	//				cout << "\n\n\t\t" << quant << " burger is the order";
	//			}
	//			else
	//			
	//				cout << "\n\tOnly " << Qburger - Sburger << " burger remaining in hotel";
	//				break;
	//			
	//		case 4:
	//			cout << "\nEnter the noodles quantity you want: ";
	//			cin >> quant;
	//			if (Qnoodles - Snoodles >= quant)
	//			{
	//				Snoodles = Snoodles + quant;
	//				Total_noodles = Total_noodles + quant * 140;
	//				cout << "\n\n\t\t" << quant << " noodles is the order";
	//			}
	//			else
	//			
	//				cout << "\n\tOnly " << Qnoodles - Snoodles << " noodles remaining in hotel";
	//				break;
	//			
	//		case 5:
	//			cout << "\nEnter the shake quantity you want: ";
	//			cin >> quant;
	//			if (Qshake - Sshake >= quant)
	//			{
	//				Sshake = Sshake + quant;
	//				Total_shake = Total_shake + quant * 120;
	//				cout << "\n\n\t\t" << quant << " shake is the order";
	//			}
	//			else
	//			
	//				cout << "\n\tOnly " << Qshake - Sshake << " shake remaining in hotel";
	//				break;
	//			
	//		case 6:
	//			cout << "\nEnter the chicken quantity you want: ";
	//			cin >> quant;
	//			if (Qchicken - Schicken >= quant)
	//			{
	//				Schicken = Schicken + quant;
	//				Total_chicken = Total_chicken + quant * 180;
	//				cout << "\n\n\t\t" << quant << " chicken is the order";
	//			}
	//			else
	//			
	//				cout << "\n\tOnly " << Qchicken - Schicken << " chicken remaining in hotel";
	//				break;
	//			
	//		case 7:
	//			cout << "\n\t\tDetails of sales and collection ";
	//			cout << "\n\nNumber of rooms we had: " << Qrooms;
	//			cout << "\n\nNumber of rooms we gave for rent: " << Srooms;
	//			cout << "\n\nRemaining rooms: " << Qrooms - Srooms;
	//			cout << "\n\nTotal rooms collection for the day: " << Total_rooms;
	//			cout << "\n\nTotal food colletion for the day: " << Total_foods;

	//		case 8:
	//			exit(0);
	//	default:
	//		cout << "\nPlease select the numbers mentioned above";
	//		break;
	//	}
	goto menu;



	return 0;
}