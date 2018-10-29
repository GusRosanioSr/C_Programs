/*
	Name: Calulator.cpp
	Copyright: version 2.0.1
	Author: Gustave Rosanio
	Date: 10/27/17 17:45
	Description: A basic calulator for two numbers. Performs addition, subtraction,
				 multiplicatin, division, and modulo operations.
				Version 2.0.0: (11/16/17) added power function
				Version 2.0.1: (11/16/17) moved varable declarations to global and added more comments
*/
#include <iostream>
#include <cassert>
using namespace std;

// functions used

// Pre-Condition - none
// Post-Condition - prints out instructions for the program
void printInstructions();											// function to print instructions to the user
// Pre-Condition - num1 and num2 must be real numbers
// Post-Condition - num1 and num2 are added and returned by sum 
void addition(int, int, int&);										// function to add two numbers
// Pre-Condition - num1 and num2 must be real numbers
// Post-Condition - subtracts num2 from num1
void subtraction(int, int, int&);									// function to subtract two numbers
// Pre-Condition - num1 and num2 must be real numbers
// Post-Conditions - multiplies num1 by num2
void multiplication(int, int, int&);								// function to multiply two numbers
// Pre-Condition - num1 and num2 must be real numbers
// Post-Condition - divides num1 by num2
void divide(int, int, int&);										// function to divide two numbers
// Pre-Condition - num1 and num2 must be real numbers
// Pre-Condition - gives the remainder for the division of num1 by num2
void modulo(int, int, int&);										// function to modulo two numbers
// Pre-Condition - num1 and num2 must be real numbers
// Post-Condition - brings num1 to the power of num2
void power(int, int, int&);											// funciton to bring num1 to the power of num2

// varable declarations
char op;									// the operation to be performed	
int num1;									// the first numer
int num2;									// the second number
int sum;									// the sum of either addition of subtraction
int product;								// the product of either multipication or division
int mod;									// the remainder from modulo

// start of main function
int main()
{
	printInstructions();					// prints instructions for user
	
	int i = 0;						   		 // flag for the program to stop 						
	while (i != -1)	// start while loop
	{
		
		cout << "Enter operation (enter Q to quit the program): ";
		cin >> op;
		if (op == '+') // executes if addition
		{
			cout << "Enter two numbers to add: ";
			cin >> num1 >> num2;
			addition(num1, num2, sum);
			cout << "Sum: " << sum << endl;
			i++;
		}
		else if (op == '-') // executes if subtraction
		{
			cout << "Enter two numbers to subtract: ";
			cin >> num1 >> num2;
			subtraction(num1, num2, sum);
			cout << "Sum: " << sum << endl;
			i++;
		}
		else if (op == '*') // executes if multiplcation
		{
			cout << "Enter two numbers to multiply: ";
			cin >> num1 >> num2;
			multiplication(num1, num2, product);
			cout << "Product: " << product << endl;
			i++;
		}
		else if (op == '/') // executes if division
		{
			cout << "Enter two numbers to divide: ";
			cin >> num1 >> num2;
			divide(num1, num2, product);
			cout << "Poduct: " << product << endl;
			i++;
		}
		else if (op == '%') // executes if modulo
		{
			cout << "Enter two numbers to find the reminder: ";
			cin >> num1 >> num2;
			modulo(num1, num2, mod);
			cout << "Remainder: " << mod << endl;
			i++;
		}
		else if(op == '^') // executes if power function
		{
			cout << "Enter the base: ";
			cin >> num1;
			cout << "Enter the power: ";
			cin >> num2;
			power(num1, num2, product);
			cout << num1 << " to the " << num2 << " power is " << product << endl;
			i++;
		}
		else if (op == 'Q' || op == 'q') // executes if user wishes to quit program
		{
			i = -1;
		}
	}
	
	system("PAUSE");						// pauses the program
	
	return 0;
} // exit main

void printInstructions()
{
	cout << "Basic calulator" << endl;
	cout << "+ for addition" << endl;
	cout << "- for subtraction" << endl;
	cout << "* for multiplication" << endl;
	cout << "/ for division" << endl;
	cout << "% for modulo" << endl;
	cout << "^ for power function" << endl;
}

void addition(int num1,						// IN - first number
			  int num2, 					// IN - second number
			  int& sum)						// OUT - sum of num1 and num2
{
	assert(((num1 >= 0) || (num1 <=0)) && ((num2 >=0) || (num2 <= 0)));
	sum = num1 + num2;
}

void subtraction(int num1,					// IN - first number
				 int num2, 					// IN - second number
				 int& sum)					// OUT - sum of num1 and num2
{
	sum = num1 - num2;
}

void multiplication(int num1,				// IN - first number
					int num2,				// IN - second number
					int& product)			// OUT - product of num1 and num2
{
	product = num1 * num2;
}

void divide(int num1,						// IN - first number
			int num2,						// IN - second number
			int& product)					// OUT - product of num1 and num2
{
	product = num1 / num2;
}

void modulo(int num1,						// IN - first number
			int num2,						// IN - second nunber
			int& mod)						// OUT - remainder of num1 and num2
{
	mod = num1 % num2;
}

void power(int num1,						// IN - base
		   int num2,							// IN - power
		   int& product)						// OUT - product
{
	int base;								// base of the power function
	int pow;								// power that base will go to
	base = num1;
	pow = num2;
	product = base;
	
	// select proper decision path
	if(pow > 0)						// executes if power is positive
	{
		while(pow > 1)
		{
			product = product * base;
			pow--;
		}
	}
	else if(pow < 0)				// executes if power is negative
	{
		while(pow != 1)
		{
			product = product / base;
			pow++;
		}
	}
	else if(pow == 0)				// executes if power is zero
	{
		product = 0;
	}
	// exit decision
}
