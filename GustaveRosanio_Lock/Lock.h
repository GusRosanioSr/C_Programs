// FILE: Lock.h
// Gustave Rosanio
// Data Structures
// Professor Kevin Lux
//
// This is a header file for the lock class
// 
// CONSTRUCTOR for the lock class
//	lock()
//		post-condition: a lock has been created with a correct combination as specified in x, y, & z.
//						it has also been locked by deafult.
//
// MODIFICATION MEMBER FUNCTIONS
//	void new_lock_combo(const int& a, const int& b, const int& c)
//		pre-condition: int a, b, and c must all be in the range 0 - 39 inclusive
//		post-condition:  a new lock combination has been set with x = a, y = b, and z = c.
//	int turn(const char& direction, const int& amount)
//		pre-condition: direction is either c (for clockwise) or cc (for counter clockwise)
//					   will automatically be converted to lowercase upon input
//		post-conditions: will have turned the lock so that the number (amount) will be located at the top of the lock
//	void close_lock()
//		pre-condition: none
//		post-condition: the variable locked will be set to true, locking the lock
//	bool open_lock(const int& x, const int& y, const int& z)
//		pre-condition: int x, y, and z all must be in the range 0 - 39 inclusive
//		post-condition: the lock will be unlocked
//
// CONSTANT MEMBER FUNCTIONS
//	bool lock_status() const
//		pre-condition: none
//		post-condition: the status of the variable locked will be returned, being either true or false
//	int display_number() const
//		pre-condition: none
//		post-condition: the number at the top of the lock will be returned
#pragma once
#ifndef GUS_ROSANIO_LOCK
#define GUS_ROSANIO_LOCK

namespace gus_rosanio_lock
{
	class lock
	{
	public:
		// Constructor
		lock();
		// Deconstructor
		~lock();
		// Modification Member functions
		void new_lock_combo(const int& a, const int& b, const int& c);
		int turn(const char& direction, const int& amount);
		void close_lock();
		bool open_lock(const int& first, const int& second, const int& thrird);
		// Constant Member functions
		bool lock_status() const { return locked; }
		int display_number() const { return top_number; }
	private:
		// Variable declarations
		int x = 25;
		int y = 3;
		int z = 32;
		int top_number = 0;
		bool locked;
		int rotation = 0;
	};
}
#endif // !GUS_ROSANIO_LOCK