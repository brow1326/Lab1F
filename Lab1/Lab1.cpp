// Lab1.cpp : Defines the entry point for the application.
//

#include "Lab1.h"
#include <iostream>
#include <limits>

using namespace std;

namespace CST8219
{
	class Vehicle
	{
	private:
		int numWheels;
		int numDoors;

	public:
		Vehicle(int w, int d)
		{
			numWheels = w;
			numDoors = d;
			
		}

		Vehicle(int w)
		{
			Vehicle(w, 2);
			
		}

		Vehicle()
		{
			Vehicle(4);
			
		}

		Vehicle::~Vehicle() 
		{
			
			cout << "Destroyed" << endl;
		}
	};
}





using namespace CST8219;

int main(int argc, char** argv)
{

	Vehicle veh1;
	Vehicle veh2(4);
	Vehicle veh3(4, 2);


	Vehicle *pVehicle;


	int w, d;
	char select;
	do
	{
		while (1)
		{
			cout << "Enter number of wheels: ";
			cin >> w;

			if (cin.fail() || w < 0)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << ">Not a valid number." << endl << endl;
			}

			else
			{
				break;
			}
		}

		while (1)
		{
			cout << "Enter number of doors: ";
			cin >> d;

			if (cin.fail() || d < 0)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << ">Not a valid number." << endl << endl;
			}

			else
			{
				break;
			}
		}

		/* create the vehicle*/
		pVehicle = new Vehicle(w, d);


		cout << "Enter 'q' to quit: ";
		cin >> select;


	} while (select != 'q');


	delete pVehicle;
	return 0;
	
}