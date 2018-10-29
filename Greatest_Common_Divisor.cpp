/*
	Name: Greatest_Common_Divisor.cpp
	Copyright: Version 1.0.0
	Author: Gustave Rosanio
	Date: 10/24/17 10:04
	Description: This program will take two inputs from the user: the divisor and the dividend.
				 it will then calculate the greatest common divisor between them and output that to the user.
*/

#include <iostream>
using namespace std;

// variables
int dividend;				// the number to be divided
int divisor;				// the number used to divide by
int remainder;				// the reminder of the division
int i;						// number used to flag loop cancelation

int main()
{
	cout << "Please input the nunber to be divded (dividend): ";
	cin >> dividend;
	cout << "Please input the number to divide by (diviisor): ";
	cin >> divisor;
	i = -1;
	while(i != 0)
	{
		remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
		i = remainder;
	}
	
	cout << "The greates common divisor is: " << dividend << endl;
	
	system("PAUSE");
	
	return 0;
}
