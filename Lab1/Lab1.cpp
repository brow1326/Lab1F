﻿// Lab1.cpp : Defines the entry point for the application.
//

#include "Lab1.h"
#include <iostream>

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
			cout << "In constructor with 2 parameters" << endl;
		}

		Vehicle(int w)
		{
			Vehicle(w, 4);
			cout << "In constructor with 1 parameters, wheels = " << w << endl;
		}

		Vehicle()
		{
			Vehicle(4);
			cout << "In constructor with 0 parameters" << endl;
		}

		Vehicle::~Vehicle() 
		{ 
			cout << "In destructor" << endl;
		}
	};
}





using namespace CST8219;

int main(int argc, char** argv)
{
	Vehicle myVehicle();
	cout << "I made a vehicle!" << endl;



	return 0;
}