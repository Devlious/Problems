/*
 * =====================================================================================
 *
 *       Filename:  pointers.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/18/2018 20:42:04
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {

	int *dir1, *dir2;

	// Assign 5 to dir1
	*dir1 = 5;
	printf("Dir1: %d\n", *dir1);

	// dir1 gives the memory section to dir2
	dir2 = dir1;
	printf("Dir2: %d\n", *dir2);

	/// dir2 increment to 5 and also dir1 change
	*dir2 += 5;
	printf("Dir1: %d -- Dir2: %d\n", *dir1, *dir2); // Print the value
	printf("MemorySection -- Dir1: {%lld} ~~ Dir2: {%lld}", &dir1, &dir2); // Print the memory section

	return 0;
}
