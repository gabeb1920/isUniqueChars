/*
Name: Gabriel Beedles
Filename: isUniqueChars1.cpp
Date: 2/4/2015
Purpose: Contains 2 functions to determine if the characters of a string are all unique as well as a main function to run these 
functions.
*/

#include <string>
#include <iostream>
using namespace std;

// The first solution I came up with
// Uses no additional data structures and runs with O(n^2) time
#ifndef _isUniqueChars1_
#define _isUniqueChars1_
bool isUniqueChars1(string str) {
	for (unsigned int i = 0; i < str.length(); ++i) {
		char val = str.at(i);
		for (unsigned int x = i + 1; x < str.length(); ++x) {
			if (val == str.at(x))
				return false;
		}
	}
	return true;
}
#endif

// The second solution I came up with
// Uses a structure to hold boolean values to the size of the alphabet in use
// Runs in O(n) time and uses O(n) space
#ifndef _isUniqueChars2_
#define _isUniqueChars2_
bool isUniqueChars2(std::string str) {
	bool char_set[128] = { false };
	for (unsigned int i = 0; i < str.length(); ++i) {
		int val = str.at(i);
		if (char_set[val])
			return false;
		else
			char_set[val] = true;
	}
	return true;
}
#endif

// main function to test the above functions
int main() {
	string str;
	char option = '\0';

	cout << "Welcome\nThis program will take a string as input and tell you wether all the characters are unique\n" << endl;
	cout << "Would you like to use an additional data structure in order for the program to run faster? Enter Y or N: ";
	cin >> option;
	cout << "\nEnter the string to check: ";
	cin.ignore();
	getline(cin, str);

	if (option == 'Y') {
		cout << "Checking the string using an additional data structure..." << endl;
		if (isUniqueChars2(str)) {
			cout << "Results: The string contains all unique characters. isUniqueChars2 returned true." << endl;
		}
		else {
			cout << "Results: The string contains multiples of some characters. isUniqueChars2 returned false." << endl;
		}
	}
	else if (option == 'N') {
		cout << "Checking the string with no additional data structure..." << endl;
		if (isUniqueChars1(str)) {
			cout << "Results: The string contains all unique characters. isUniqueChars1 returned true." << endl;
		}
		else {
			cout << "Results: The string contains multiples of some characters. isUniqueChars1 returned false." << endl;
		}
	}
	else {
		cout << "I'm sorry that option is not recognised. Please restart the program and try again." << endl;
	}

	cin >> option;

	return 0;
}