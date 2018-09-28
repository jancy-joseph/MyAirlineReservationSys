// MyAirlineReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<string>
#include <sstream>
#include<iostream>

#include "Passenger.h"
#include "FlightManager.h"
#include "Helper.h"

using namespace std;
using namespace MyAirlineReservationApp;


int displayMenu();

int main()
{
	FlightManager FM_Db;
	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			{

			cout << "Enter Flight Number: " << endl;
				// clean stream when we begin our program
				cin.clear();
				cin.ignore(256, '\n');
				int Flightno = Helper::getIntegerInput();
				if (!FM_Db.ValidateIfFlightExists(Flightno)) {
					FM_Db.addFlightDetails(Flightno);
				}
				else {
					cout << Flightno <<" Flight Number already exists !" << endl;
				}
			}
			break;
		case 2:
		{
			FM_Db.DisplayFlightsSchedule();
		}
			break;
		case 3:

			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			cerr << "Unknown Command.Try again" << endl;
			break;
		}
	}
	

	return 0;
}

int displayMenu()
{
	int selection;

	cout << "-----------------------------------------------";

	cout << "\n\t AIRLINE RESERVATION SYSTEM \n\n";
	cout << "Please pick an option from the menu below. \n";
	cout << "1. Add new flights \n";
	cout << "2. Display flight schedule \n";
	cout << "3. Display flight details \n";
	cout << "4. Display passenger personal info \n";
	cout << "5. Book reservation \n";
	cout << "6.Display User ticket information \n";
	cout << "7. Cancel reservation \n";
	cout << "0. Exit \n\n";

	cout << "-----------------------------------------------" << endl;
	cout << "Enter the number of a menu option: ";
	cin >> selection;



	return selection;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
