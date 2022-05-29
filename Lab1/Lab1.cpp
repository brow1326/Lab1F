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
		}

		Vehicle(int w)
		{
			Vehicle(w, 4);
		}

		Vehicle()
		{
			Vehicle(4);
		}
	};
}







int main(int argc, char** argv)
{
	cout << "Hello World!" << endl;
	return 0;
}