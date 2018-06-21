/*
 * =====================================================================================
 *
 *       Filename:  inheritedCode.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/20/2018 19:15:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <exception>

struct BadLengthException : std::exception {
	std::string s;

	BadLengthException(int len) : s(std::to_string(len)) {}
	const char *what() const noexcept override {
		return s.c_str();
	}
};


bool check(std::string username) {
	bool isValid = true;
	int len = username.length();
	if(len < 5)
		throw BadLengthException(len);

	for(int i = 0; i < len-1; i++)
		if(username[i] == 'w' && username[i+1] == 'w')
			isValid = false;

	return isValid;
}

int main() {

	int T;
	std::string username;

	scanf("%d", &T);

	while(T--) {
		std::cin >> username;

		try {
			printf("%s\n", check(username) ? "Valid" : "Invalid");
		} catch(BadLengthException ex) {
			printf("Too Short: %s\n", ex.what());
		}
	}

	return 0;
}
