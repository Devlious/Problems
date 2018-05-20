/*
 * =====================================================================================
 *
 *       Filename:  vectorSort.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/19/2018 18:59:36
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
	std::vector<int> V;

	scanf("%d", &N);

	for(int i = 0; i < N; i++){
		scanf("%d", &num);
		V.push_back(num);
	}

	sort(V.begin(), V.end());

	for(int i : V)
		printf("%d ", i);

	return 0;
}
