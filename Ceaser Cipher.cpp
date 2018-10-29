/*
	Name: Ceaser Cipher
	Copyright: Version 1.0.1
	Author: Gustave Rosanio
	Date: 11/10/17
	Description: a program that uses a function to encrypt and decrypt
				 messages based on user input using a Ceaser Cipher (shifts standard alphabet to the left by one)
				 Version 1.0.1: (11/16/17) added comments to important sections
				 Version 1.1.1: (11/22/17) changed the cin method to getline fucntion of the string method
*/
#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

// function prototypes
void instructions();						// prints instructions for the user
void Encrypt(string&);						// function to encrypt message
void Decrypt(string&);						// function to decrypt message

// encryption method
const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";	// standard alphabet
const string CODE = "bcdefghijklmnopqrstuvwxyza";		// code, shifted standard alphabet by one letter to the left

// variable delcarations
string message;								// the message to encrypt/decrypt
char decision;								// either E or D

// start of main fucntion
int main()
{
	// print instructions
	instructions();
	int i = 0;
	while (i != -1)							// start while loop
	{
		cout << "Please enter E, D, or Q now: ";
		cin >> decision;
		decision = toupper(decision);
		if (decision == 'E')				// executes if user wants to encrypt
		{
			cout << "Enter your message to encrypt now edning with a period: ";
			getline(cin, message, '.');
			Encrypt(message);
			cout << "Encrypted message: " << message << endl;
			i++;
		}
		else if (decision == 'D')			// executes if user wants to decrypt
		{
			cout << "Enter your message to decrypt now ending with a period: ";
			getline(cin, message, '.');
			Decrypt(message);
			cout << "Decrypted message: " << message << endl;
			i++;
		}
		else if (decision == 'Q')			// executes if user wants to quit the program
		{
			cout << "Program will now exit." << endl;
			i = -1;
		}
	}
		
	system("PAUSE");						// pauses the program
	return EXIT_SUCCESS;
}

void instructions()
{
	cout << "This program will encrypt/decrypt a message based on user input" << endl;
	cout << "E = encrypt message" << endl;
	cout << "D = decrypt message" << endl;
	cout << "Q = quit program" << endl;
}

// Encryption function
void Encrypt(string& message)
{
	// local data
	char ch;								// next message charachter
	int pos;								// next message charachters position
	
	// encode message
	for (int i = 0; i < message.length(); i++)
	{
		ch = tolower(message.at(i));		// ch to lowercase
		pos = ALPHABET.find(ch);			// find position of ch
		if((pos >= 0) && (pos < 26))
		{
			message[i] = CODE.at(pos);
		}
	}
} // end  encryption function

void Decrypt(string& message)
{
	// local data
	char ch;								// next message charachter
	int pos;								// next message charachters position
	
	// encode message
	for (int i = 0; i < message.length(); i++)
	{
		ch = tolower(message.at(i));		// ch to lowercase
		pos = CODE.find(ch);			// find position of ch
		if((pos >= 0) && (pos < 26))
		{
			message[i] = ALPHABET.at(pos);
		}
	}
} // end decryption function
