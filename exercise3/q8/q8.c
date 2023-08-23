#include <stdio.h>
#include <stdbool.h>

int factorial(int n) {
	if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}

int getLastDigit (int n) {
	return n % 10;
}

int dropLastDigit(int n) {
	return n / 10;
}

int splitSum(int n) {
	int sum = 0;
	while (n > 0) {
		sum = sum + factorial(getLastDigit(n));
		n = dropLastDigit(n);
	}
	return sum;
}

bool isStrong(int n) {
	if (splitSum(n) == n) 
		return true;
	return false;
}

int main () {
	int first = 1;
	int last = 500000;

	for (int i = first; i <= last; i++) {
		if (isStrong(i)) {
			printf("%d is a strong number!\n", i);
		}
	}
	return 0;
}