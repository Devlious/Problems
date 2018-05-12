#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map>
#include <time.h>
#include <string>

#define LEN 3000
#define A 500
#define B 500
#define C 500

bool isPrime(int num) {

	for(int i = 2; i < num/2; i++)
		if ( num % i == 0)
			return false;
	return true;
}

long isPyt(){
	// Pythagorean Triplet

	for( int a = 0; a < A; a++)
		for( int b = 0; b < B; b++)
			for( int c = 0; c < C; c++)
				if ( (a*a) + (b*b) == (c*c) && a + b + c == 1000)
					return (long)a*b*c;
}

int main() {

	srand(time(NULL));

	int rnum;
	std::vector<int> arr;
	std::map<int, std::string> numbers;

	numbers.insert(std::make_pair(1, "uno"));
	numbers.insert(std::make_pair(2, "dos"));
	numbers.insert(std::make_pair(3, "tres"));
	numbers.insert(std::make_pair(4, "cuatro"));
	numbers.insert(std::make_pair(5, "cinco"));

	for(int i = 0; i < LEN; i++) {
		rnum = rand() % 1000000 + 1;
		arr.push_back(rnum);
	}

	//sort_heap(arr.begin(), arr.end());
	sort(arr.begin(), arr.end());

	// for (int i : arr) 
	// 	printf("%d |", i);

	printf("\nBS: %s\n", binary_search(arr.begin(), arr.end(), 231423) ? "Si se encontro" : "No se encontro");

	printf("Prime? %s\n", isPrime(9) ? "Si" : "No");


	// Swap numbers

	int a = 5;
	int b = 10;

	a ^= b;
	b ^= a;
	a ^= b;

	printf("A: %d & B: %d\n", a, b);

	// Fast multiplication by 2

	int n = 8;

	printf("N: %d\n", n << 2);

	printf("N: %d\n", n >> 2);

	printf("Is it pyt? %ld", isPyt());

	return 0;
}