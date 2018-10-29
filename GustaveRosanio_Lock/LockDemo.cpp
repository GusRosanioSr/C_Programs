#include "stdafx.h"
#include "Lock.h"
#include <iostream>

using namespace std;
using namespace gus_rosanio_lock;


int main()
{
	lock myLock;
	myLock.close_lock();

	int first = 0;
	int second = 0;
	int third = 0;
	cout << "This program will sinulate a cobination lock" << endl;
	cout << "There are three numbers to the combination" << endl;
	cout << "The Numbers on the lock are 0 - 39" << endl;
	cout << "Try once. Then I will give you the correct combination" << endl;
	int i = 0;
	while (i != -1)
	{
		cout << "Please input your numbers now: " << endl;
		cout << "First number: " << endl;
		cin >> first;
		cout << "Second number: " << endl;
		cin >> second;
		cout << "Third number: " << endl;
		cin >> third;
		myLock.open_lock(first, second, third);
		if (myLock.lock_status() == false)
		{
			cout << "The lock opens!" << endl;
			i = -1;
		}
		else
		{
			cout << "The lock does not open, " << endl;
			cout << "For the purposes of this demo, the correct combination is 25, 3, 32" << endl;
			cout << "Please try again" << endl;
			i++;
		}
	}

	myLock.close_lock();

	cout << "" << endl;
	cout << "Time to make your own new lock combination" << endl;

	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Please input your new combination now" << endl;
	cout << "First number: " << endl;
	cin >> a;
	cout << "Second number: " << endl;
	cin >> b;
	cout << "Third number: " << endl;
	cin >> c;
	myLock.new_lock_combo(a, b, c);

	int k = 0;
	while (k != -1)
	{
		cout << "Try to unlock it now!" << endl;
		cout << "First number: " << endl;
		cin >> first;
		cout << "Second number: " << endl;
		cin >> second;
		cout << "Third number: " << endl;
		cin >> third;
		myLock.open_lock(first, second, third);
		if (myLock.lock_status() == false)
		{
			cout << "The lock opens!" << endl;
			k = -1;
		}
		else
		{
			cout << "The lock does not open, " << endl;
			k++;
		}
	}

	cout << "The number at the top of the lock is: " << endl;
	cout << myLock.display_number() << endl;

	char direction;
	int amount;
	cout << "Enter a direction (c for clockwise, x for counter clockwise) to turn the knob:";
	cin >> direction;
	cout << "Enter a number to turn it to: ";
	cin >> amount;
	myLock.turn(direction, amount);

	cout << "The number at the top if the lock is now: " << endl;
	cout << myLock.display_number() << endl;
	cout << "This demo is now complete" << endl;
	system("pause");

	return 0;
}