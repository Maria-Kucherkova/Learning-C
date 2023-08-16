#include <stdio.h>

/*int isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return -1;
	}
	return 0;
}
*/
void printSquare() {
	printf("Printing squares: \n");
	for (int i = 1; i <= 100; i++) {
		printf("%d ", i * i);
	}
	printf("\n");
}

int isEven(int x) {
	if (x % 2 == 0)
		return 0;
	return -1;
}

void printEvenSquare() {
	printf("Printing even squares: \n");
	for (int x = 1; x <= 100; x++) {
		if (isEven(x) == 0) {
			printf("%d ", x * x);
		}
	}
	printf("\n");
}

int isPrimeBetter(int n) {
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return -1;
	return 0;
}

void printBool(int n) {
	if (n == 0) {
		printf("True");
	}
	else if (n == -1) {
		printf("False");
	}
	printf("\n");
}

void printPrime() {
	printf("Printing primes: \n");
	for (int n = 1; n <= 100; n++) {
        if (isPrimeBetter(n) == 0) {
            printf("%d ", n);
        }
    }
    printf("\n");
}

int main() {
	printSquare();
	printEvenSquare();
	printPrime();
	return 0;
}