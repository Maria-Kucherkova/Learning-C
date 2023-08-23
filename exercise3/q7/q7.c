#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n == 1)
		return false;
	else if (n == 2)
		return true;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}	
	}
	return true;
}

int main () {
	int first = 1;
	int last = 100;
	int previousPrime = -1;

	for (int i = first; i <= last; i++) {
		if (isPrime(i) == true) {
			// printf("The number %d is prime\n", i);
			if (i - previousPrime <= 2) {
				printf("The numbers %d and %d are twin primes\n", previousPrime, i);
			}
			previousPrime = i;
		}
	}
	return 0;
}