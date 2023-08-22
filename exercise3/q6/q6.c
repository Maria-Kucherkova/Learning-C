#include <stdio.h>
#define false 0
#define true 1
typedef int bool;

bool isPrime(int num) {
	switch (num)
	{
		case 0:
		case 1:
		return false;

		case 2:
		case 3:
		case 5:
		case 7:
		return true;

		default:
		if (num > 2)
		{
			if ((num % 2 == 0) || (num % 3 == 0) || (num % 5 == 0) || (num % 7 == 0))
				return false;
		}
	}
	return true;
}

void printAllPrimes(int n) {
	for (int i = 0; i <= n; i++) {
		if (isPrime(i)) {
		printf("The number is prime %d\n", i);
	}
		else {
			printf("The number is not prime %d\n", i);
		}
	}
}

int main() {
	int num;
	printf("Please enter a range\n");
	scanf("%d", &num);
	printAllPrimes(num);
	return 0;
}