/*
	Name: LengthConverter.cpp
	Copyright: version 1.2.1
	Author: Gustave Rosanio
	Date: 10/19/17 19:30
	Description: Program to convert a user given length into other common length measurements
				 Version 1.0.1: (11/16/17) fixed some formating and added comments to crucial sections 
				 Version 1.1.1: (11/16/17) added a function to print instruction (moved it from main function)
				 Version 1.2.1: (11/16/17) added a loop to the main function and a quit decision
*/

#include<iostream>
#include<string>
using namespace std;

// This program will convert input from the user into different length mesaurements
// User must input the starting length measurment in order to get appropriate outputs

// functions used
void printInstructions();					// prints user instructions
void toMeter(float, string);				// converts unit to meter
void toKilo(float, string);					// converts unit to kilometer
void toMili(float, string);					// converts unit to milimeter
void toCenti(float,string);					// converts unit to centimeter
void toFeet(float, string);					// converts unit to feet
void toMile(float, string);					// converts unit to mile
void toYard(float, string);					// converts unit to yard

// varable declarations
string unit;				// input: the unit to be converted
float value;				// input: The value of the unit


// Start of the main function
int main()
{
	printInstructions();					// prints instuctions for user
	int i = 0;								// loop control variable
	while (i != -1)
	{
		// get inputs
		cout << "Please input your unit from the options above: " << endl;
		cin >> unit;
		cout << " " << endl;
	
		// determine which group of functions to run
		if (unit == "m")					// executes if unit entered is meter
		{
			cout << "Please input the value: " << endl;   
		 	cin >> value;
			toKilo(value, unit);
			toMili(value, unit);
			toCenti(value, unit);
			toFeet(value, unit);
			toMile(value, unit);
			toYard(value, unit);
			cout << endl;
			i++;
		}
		else if (unit == "km")				// executes if unit entered is kilometer
		{
			cout << "Please input the value: " << endl;   
			cin >> value;
			toMeter(value, unit);
			toMili(value, unit);
			toCenti(value, unit);
			toFeet(value, unit);
			toMile(value, unit);
			toYard(value, unit);
			cout << endl;
			i++;
		}
		else if (unit == "mm")				// executes if unit entered is milimeter
		{
			cout << "Please input the value: " << endl;   
		  	cin >> value;
			toMeter(value, unit);
			toKilo(value, unit);
			toCenti(value, unit);
			toFeet(value, unit);
			toMile(value, unit);
			toYard(value, unit);
			cout << endl;
			i++;
		}
		else if (unit == "cm")				// executes if unit entered is centimeter
		{
			cout << "Please input the value: " << endl;   
			cin >> value;
			toMeter(value, unit);
			toKilo(value, unit);
			toMili(value, unit);
			toFeet(value, unit);
			toMile(value, unit);
			toYard(value, unit);
			cout << endl;
			i++;
		}
		else if (unit == "ft")				// executes if unit entered is feet
		{
			cout << "Please input the value: " << endl;   
			cin >> value;
			toMeter(value, unit);
			toKilo(value, unit);
			toMili(value, unit);
			toCenti(value, unit);
			toMile(value, unit);
			toYard(value, unit);
			cout << endl;
			i++;
		}
		else if (unit == "ml")				// executes if unit entered is mile
		{
			cout << "Please input the value: " << endl;   
			cin >> value;
			toMeter(value, unit);
			toKilo(value, unit);
			toCenti(value, unit);
			toFeet(value, unit);
			toMili(value, unit);
			toYard(value, unit);
			cout << endl;
			i++;
		}
		else if (unit == "yd")				// executes if unit entered is yard
		{
			cout << "Please input the value: " << endl;   
			cin >> value;
			toMeter(value, unit);
			toKilo(value, unit);
			toCenti(value, unit);
			toFeet(value, unit);
			toMile(value, unit);
			toMili(value, unit);
			cout << endl;
			i++;
		}
		else if ((unit == "Q") || (unit == "q"))
		{
			i = -1;
			cout << "Progam will now exit" << endl;
		}
		else
		{
			cout << "ERROR INVALID INPUTS PLEASE TRY AGAIN" << endl;
		}
	}
	
	system("PAUSE"); 								// pauses the program before termination
	
	return 0;
} // end main function

// function to print instructions for user
void printInstructions()
{
	cout << "This program will convert a unit of distance to others of equal value" << endl;
	cout << "Please input a valid entry" << endl;
	cout << "m = meter" << endl;
	cout << "km = kilometer" << endl;
	cout << "mm = milimeter" << endl;
	cout << "cm = centimeter" << endl;
	cout << "ft = feet" << endl;
	cout << "ml = mile" << endl;
	cout << "yd = yard" << endl;
	cout << "Enter 'q' or 'Q' to quit the program" << endl;
}
// Start of conversion functions
void toMeter(float value,
			  string unit)
{
	{
		if (unit == "km")
		{
			value = value / 1000;
			cout << value << " Meters" << endl;
		}
		else if (unit == "mm")
		{
			value = value / 1000;
			cout << value << " Meters" << endl;
		}
		else if( unit == "cm")
		{
			value = value / 100;
			cout << value << " Meters" << endl;
		}
		else if (unit == "ft")
		{
			value = value / 3.28084;
			cout << value << " Meters" << endl;
		}
		else if (unit == "ml")
		{
			value = value * 0.000621;
			cout << value << " Meters" << endl;
		}
		else if (unit == "yd")
		{
			value = value / 1.094;
			cout << value << " Meters" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
}

void toKilo(float value,
			string unit)
{
	{
		if (unit == "m")
		{
			value = value / 1000;
			cout << value << " Kilometers" << endl;
		}
		else if (unit == "mm")
		{
			value = value / 1000000;
			cout << value << " Kilometers" << endl;
		}
		else if( unit == "cm")
		{
			value = value / 100000;
			cout << value << " Kilometers" << endl;
		}
		else if (unit == "ft")
		{
			value = value / 3280.84;
			cout << value << " Kilometers" << endl;
		}
		else if (unit == "ml")
		{
			value = value * 0.621;
			cout << value << " Kilometers" << endl;
		}
		else if (unit == "yd")
		{
			value = value / 1093.613;
			cout << value << " Kilometers" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
}

void toMili(float value,
			string unit)
{
	{
		if (unit == "km")
		{
			value = value * 0.0000001;
			cout << value << " Milimeters" << endl;
		}
		else if (unit == "m")
		{
			value = value / 1000;
			cout << value << " Milimeters" << endl;
		}
		else if( unit == "cm")
		{
			value = value * 0.1;
			cout << value << " Milimeters" << endl;
		}
		else if (unit == "ft")
		{
			value = value * 0.0394;
			cout << value << " Milimeters" << endl;
		}
		else if (unit == "ml")
		{
			value = value * 0.00000006214;
			cout << value << " Milimeters" << endl;
		}
		else if (unit == "yd")
		{
			value = value * 0.001094;
			cout << value << " Milimeters" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
}

void toCenti(float value,
			 string unit)
{
	{
		if (unit == "km")
		{
			value = value * 0.000001 ;
			cout << value << " Centimeters" << endl;
		}
		else if (unit == "m")
		{
			value = value * 0.01;
			cout << value << " Centimeters" << endl;
		}
		else if( unit == "mm")
		{
			value = value / 10;
			cout << value << " Centimeters" << endl;
		}
		else if (unit == "ft")
		{
			value = value * 0.394;
			cout << value << " Centimeters" << endl;
		}
		else if (unit == "ml")
		{
			value = value * 0.0000006214;
			cout << value << " Centimeters" << endl;
		}
		else if (unit == "yd")
		{
			value = value * 0.0109;
			cout << value << " Centimeters" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
}

void toFeet(float value,
			string unit)
{
	{
		if (unit == "km")
		{
			value = value * 0.000305;
			cout << value << " Feet" << endl;
		}
		else if (unit == "m")
		{
			value = value * 0.305;
			cout << value << " Feet" << endl;
		}
		else if( unit == "cm")
		{
			value = value / 30.48;
			cout << value << " Feet" << endl;
		}
		else if (unit == "mm")
		{
			value = value / 304.8;
			cout << value << " Feet" << endl;
		}
		else if (unit == "ml")
		{
			value = value * 0.000189;
			cout << value << " Feet" << endl;
		}
		else if (unit == "yd")
		{
			value = value * 0.333;
			cout << value << " Feet" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
}

void toMile(float value,
			string unit)
{
	{
		if (unit == "km")
		{
			value = value / 1.609;
			cout << value << " Miles" << endl;
		}
		else if (unit == "m")
		{
			value = value / 1609.344;
			cout << value << " Miles" << endl;
		}
		else if( unit == "cm")
		{
			value = value / 160934.4;
			cout << value << " Miles" << endl;
		}
		else if (unit == "mm")
		{
			value = value / 1609344;
			cout << value << " Miles" << endl;
		}
		else if (unit == "ft")
		{
			value = value / 5280;
			cout << value << " Miles" << endl;
		}
		else if (unit == "yd")
		{
			value = value / 1790;
			cout << value << " Miles" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
}

void toYard(float value,
			string unit)
{
	{
		if (unit == "km")
		{
			value = value * 0.000914;
			cout << value << " Yards" << endl;
		}
		else if (unit == "m")
		{
			value = value * 0.914;
			cout << value << " Yards" << endl;
		}
		else if( unit == "cm")
		{
			value = value / 91.44;
			cout << value << " Yards" << endl;
		}
		else if (unit == "mm")
		{
			value = value / 914.4;
			cout << value << " Yards" << endl;
		}
		else if (unit == "ml")
		{
			value = value * 0.000568;
			cout << value << " Yards" << endl;
		}
		else if (unit == "ft")
		{
			value = value / 3;
			cout << value << " Yards" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
}
