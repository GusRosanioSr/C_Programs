// FILE: Lock.cpp
// Gustave Rosanio
// Data Structures
// Professor Kevin Lux
//
// CLASS IMPLEMENTED: Lock(see Lock.h for documentation)

#include "stdafx.h"
#include "Lock.h"
#include <cassert>

namespace gus_rosanio_lock
{

	// deconstructor for the lock class
	lock::~lock()
	{
	}

	// constructor for the lock class (default)
	lock::lock()
	{
		locked = true;
	}

	// function to close the lock
	void lock::close_lock()
	{
		locked = true;
	}

	// function to create a new lock combination
	void lock::new_lock_combo(const int& a, const int& b, const int& c)
	{
		assert((a >=0 ) && (a <= 39)); // check to see if all three numbers are valid
		assert((b >= 0) && (b <= 39));
		assert((c >= 0) && (c <= 39));
		x = a; // if they are valid, assign them to the origrianl ones to replace them
		y = b;
		z = c;
	}

	// function to turn the lock to a given number per a direction
	int lock::turn(const char& direction, const int& amount)
	{
		assert((amount >= 0) && (amount <= 39));
		assert((direction == 'c') || (direction == 'C') || (direction == 'x') || (direction == 'X'));
		int t = 0;
		while (t >= 0)
		{
			// check to see if the user wants to turn clockwise
			if ((direction == 'c') || (direction == 'C'))
			{
				rotation++;
				top_number = amount;
				return top_number;
				t = -1;
			}
			// check to see if the user wants to turn counter clockwise
			else if ((direction == 'x') || (direction == 'X'))
			{
				rotation--;
				top_number = amount;
				if (top_number < 0)
				{
					top_number = top_number * -1;
				}
				else;
				{

					return top_number;
					t = -1;
				}
			}
		}
	}

	bool lock::open_lock(const int& first, const int& second, const int& third)
	{
		assert((first >= 0) && (first <= 39));
		assert((second >= 0) && (second <= 39));
		assert((third >= 0) && (third <= 39));
		if (first == x) // check to see if the first number is correct
		{
			rotation++;
			if (second == y) // checks to see if the second number is correct
			{
				rotation--;
				if (third == z) // checks to see if the thrid number is correct
				{
					// if correct, unlock the lock
					locked = false;
					top_number = z;
					return locked;
				}
				else
				{
					// if incorrect, keep it locked
					locked = true;
					top_number = third;
					return locked;
				}
			}

			else
			{
				// if incorrect, keep it locked
				locked = true;
				top_number = third;
				return locked;
			}
		}
		else
		{
			// if incorrect, keep it locked
			locked = true;
			top_number = third;
			return locked;
		}
}