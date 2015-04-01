/*
Name: Gabriel Beedles
Filename: isUniqueChars2.cpp
Date: 2/4/2015
Purpose: Contains a function to determine if the characters of a string are all unique.
Uses O(n) time and O(n) size;
*/

#include <string>

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