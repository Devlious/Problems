/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  Remove First and Last Character
 *
 *        Version:  1.0
 *        Created:  05/19/2018 07:01:25
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

std::string sliceString(std::string str) {

	return str.substr(1, str.size()-2);
}

int main() {

	std::string str;

	getline(std::cin, str);

	str = sliceString(str);

	printf("%s\n", str.c_str());

	return 0;
}


