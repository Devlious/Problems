/*
 * =====================================================================================
 *
 *       Filename:  vectorErase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/19/2018 19:05:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <vector>

int main() {

	int N;
	int num;
	int x;
	int a, b;
	std::vector<int> V;

	scanf("%d", &N);

	for(int i = 0; i < N; i++){
		scanf("%d", &num);
		V.push_back(num);
	}

	scanf("%d", &x);
	scanf("%d %d", &a, &b);

	V.erase(V.begin()+x-1);
	V.erase(V.begin()+a-1, V.begin()+b-1);

	printf("%d\n", V.size());

	for(int i : V)
		printf("%d ", i);

	return 0;
}
