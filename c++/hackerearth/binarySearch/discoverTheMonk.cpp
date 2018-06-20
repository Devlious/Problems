/*
 * =====================================================================================
 *
 *       Filename:  discoverTheMonk.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/19/2018 12:23:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <algorithm>
#include <vector>

int main() {

	std::vector<int> arr;
	int N, Q;
	int num;

	scanf("%d %d", &N, &Q);

	while(N--) {
		scanf("%d", &num);
		arr.push_back(num);
	}


	std::sort(arr.begin(), arr.end());

	while(Q--) {
		scanf("%d", &num);
		printf("%s\n", std::binary_search(arr.begin(), arr.end(), num) ? "YES" : "NO");
	}

	return 0;
}
