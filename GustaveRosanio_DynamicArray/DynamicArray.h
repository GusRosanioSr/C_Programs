// FILE: DynamicArray.h
// Gustave Rosanio
// Data Structures
// Professor Kevin Lux
//
// This is a header file for the DynamicArray class
// 
// CONSTRUCTOR for the DynamicArray class
//	DynamicArray()
//		post-condition: a dynamic array has been created wiht the default array storing the value 1234.
//	DynamicArray(char user_input)
//		pre-condition: user inputs a number to store into the array
//		post-condition: the user input number is stored into the array
//
// MODIFICATION MEMBER FUNCTIONS
//	void add_element(char element)
//		pre-condition: element must be a number character
//		post-condition: element has been added to the next spot in the array
//	char& operator[] (char index)
//		pre-condition: index must be a positive number
//		post-condition: the element at the index is returned
//
// CONSTANT MEMBER FUNCTIONS
//	size_t get_size() const
//		post-conditions: returns the size of the array
//	size_t get_next() const
//		post-conditions: return the next avaible spot in the array
//	bool get_sign() const
//		post-condition: return the sign of the array (true for positive, false for negative)

#pragma once
#ifndef GUS_ROSANIO_ARRAY
#define GUS_ROSANIO_ARRAY

namespace gus_rosanio_array
{
	class DynamicArray
	{
	public:
		// DEFAULT CONSTRUCTOR
		DynamicArray();
		// CONSTRUCTOR WITH USER PARAMETERS
		DynamicArray(const char * user_input);
		// DECONSTRUCTOR
		~DynamicArray();
		// MODIFIICATON MEMBER FUNCTIONS
		void add_element(char element);
		char& operator[] (char index); // overloaded operator for indexing
		// CONSTANT MEMBER FUNCTIONS
		size_t get_size() const { return size; } // rerurn the size of the array
		size_t get_next() const { return next; } // return the next spot in the array
		bool get_sign() const { return sign; } // returns the sign of the array


	private:
		bool sign; // true is positive, false is negative
		char *my_array = NULL;
		size_t size = 10;
		size_t next = 0;
		size_t increment = 10;

	};
}
#endif // !GUS_ROSANIO_ARRAY