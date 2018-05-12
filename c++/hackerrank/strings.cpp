/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/12/2018 00:39:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */
/*  
Input Format

You are given two strings, and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of and respectively.
In the second line print the string produced by concatenating and ().
In the third line print two strings separated by a space, and . and are the same as and , respectively, except that their first characters are swapped. 
*/
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string A;
	string B;

	getline(cin, A);
	getline(cin, B);

	printf("%lu %lu\n", A.length(), B.length() );
	printf("%s\n", (A+B).c_str() );
	printf("%s %s", (B[0]+A.substr(1, A.length()) ).c_str(), (A.substr(0,1) + B.substr(1,B.length())).c_str());

	return 0;
}
