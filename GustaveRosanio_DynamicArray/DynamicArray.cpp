// FILE: DynamicArray.cpp
// Gustave Rosanio
// Data Structures
// Professor Kevin Lux
//
// CLASS IMPLEMENTED: DynamicArray(see DynamicArray.h for documentation)
#include "stdafx.h"
#include "DynamicArray.h"
#include <iostream>

using namespace std;
namespace gus_rosanio_array
{

	DynamicArray::DynamicArray()
	{
		my_array = new char[size];
		my_array[0] = '1';
		next++;
		my_array[1] = '2';
		next++;
		my_array[2] = '3';
		next++;
		my_array[3] = '4';
		next++;
		sign = true;
	}

	DynamicArray::DynamicArray(const char * user_input)
	{
		size_t s = 0;
		while (*user_input != '\0')
		{
			user_input++;
			s++;
		}

		size = s;
		next = s + 1;
		my_array = new char[s];
		
		for (int i = 0; i < s; i++)
		{
			my_array[i] = user_input[i];

			my_array++;
			user_input++;
		}

		sign = true;
	}

	DynamicArray::~DynamicArray()
	{
		delete[] my_array;
		my_array = NULL;
	}

	char & DynamicArray::operator[](char index)
	{
		char *temp_array;
		if (index >= size)
		{
			{
				temp_array = new char[size + increment];
				for (int i = 0; i < next; i++)
				{
					temp_array[i] = my_array[i];
				}
				for (int k = next; k < index + increment; k++)
				{
					temp_array[k] = 0;
				}
				size = index + 10;
				delete [] temp_array;
				my_array = temp_array;
			}
		}
		if (index > next)
		{
			next = index + 1;
		}
		return *(my_array + index);
	}

	void DynamicArray::add_element(char element)
	{
		char *temp_array;
		if (next == size)
		{
			size = size + increment;
			temp_array = new char[size];
			for (int i = 0; i < next; i++)
			{
				temp_array[i] = my_array[i];
			}
			for (int k = next; k < size; k++)
			{
				temp_array[k] = 0;
			}

			delete[] my_array;
			*my_array = *temp_array;
		}
		my_array[next++] = element;
	}
}