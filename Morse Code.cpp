/*
	Name: Morse Code
	Copyright: Version 1.1.0
	Author: Gustave Rosanio
	Date: 11/22/17 
	Description: A program to translate normal english into morse code.
				 Version 1.0.1: added a sytem pause
				 Version 1.1.1: added a while loop to allow for multiple inputs.
*/

#include <iostream>
#include <string>
using namespace std;

// variable delcarations

const string MORSE[27] = { ".-", "-...", "-.-.", "-.." ," .", "..-", "----", "...." , "..", ".----", "-.-", ".-", "--", "-.", "---", ".--." ,"--.-", ".-.","...", "-" , "..- ", "...-" , ".--" , "-..-" , "-.--", "--..", " ",};
const string ALPHABET = "abcdefghijklmnopqrstuvwxyz ";
char letter;										// the letter being decoded
string userSentance;								// the sentance being ecoded
char decision;										// either starts or exits the program based on user input

// function prototypes
void readCode(string&, string[]);					// fucntion that translates the user input into Morse code
void writeCode(string[]);							// fucntion that outputs the Morse code that has been translated



int main()
{
	int i = 0;										// loop control variable
	while (i != -1)
	{
		cout << "Enter a S to start the progrm or a Q to quit: ";
		cin >> decision;
		decision = toupper(decision);
		if (decision == 'S')
		{
			cout << "Enter message to encode ending with a period : ";
			getline(cin, userSentance, '.');
			int MAX = userSentance.length();
			string codeArray[MAX];							// string array that holds the morse code
			readCode(userSentance, codeArray);
			cout << "Your Morse Code is: ";
			writeCode(codeArray);
			i++;
		}
		else if (decision == 'Q')
		{
			cout << "Program will now exit. Have a lovely day" << endl;
			i = -1;
		}
	}
	
	system("PAUSE");								// pauses the program
	
	return 0;
}


void readCode(string& userSentance,					// the sentance the user wished to encode
			  string codeArray[])					// the morse code array
{
	char ch; 
	int pos;
	for (int i = 0; i < userSentance.length(); i++)
	{
		ch = tolower(userSentance.at(i));
		pos = ALPHABET.find(ch);
		
		codeArray[i] = MORSE[pos];
	}
}

void writeCode(string codeArray[])
{
	for (int i = 0; i < userSentance.length(); i++)
	{
		cout << codeArray[i];
	}
}
