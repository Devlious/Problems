#include <stdio.h>

int main() {

	int r, c;

	printf("Introduce Row & Column: \n");
	scanf("%d %d", &r, &c);

	for(int i = 1; i <= r; i++) {
		for(int j = 1; j <= c; j++)
			printf("%3d ", i * j);
		printf("\n");
	}

	return 0;
}