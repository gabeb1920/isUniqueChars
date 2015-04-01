/* 
 Name: Gabriel Beedles
 Filename: isUniqueChars1.cpp
 Date: 2/4/2015
 Purpose: Contains a function to determine if the characters of a string are all unique using no additional structures.
 Uses O(n^2) time.
 */

#include <string>

#ifndef _isUniqueChars1_
#define _isUniqueChars1_
bool isUniqueChars1(std::string str) {
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