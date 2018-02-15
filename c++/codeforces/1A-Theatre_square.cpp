#include <iostream>
#include <math.h>

int main(){
	double n,m,a;

	std::cin >> n >> m >> a;

	std::cout <<  (long long) ceil(n/a)* (long long) ceil(m/a);

	return 0;
}
