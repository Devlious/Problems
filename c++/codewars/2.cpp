/*
 * =====================================================================================
 *
 *       Filename:  2.cpp
 *
 *    Description:  Reversed Strings
 *
 *        Version:  1.0
 *        Created:  05/19/2018 07:09:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string>
#include <iostream>

std::string reverseString(std::string str) {

	for(int i = 0; i < str.size()/2; i++ )
		std::swap(str[i], str[str.size()-1 - i]);

	return str;
}

int main() {

	std::string str;

	getline(std::cin, str);

	str = reverseString(str);

	printf("%s\n", str.c_str());

	return 0;
}
