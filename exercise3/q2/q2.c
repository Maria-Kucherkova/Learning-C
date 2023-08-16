#include <stdio.h>

int power (int n, int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++) {
		result = result * n;
	}
	return result;
}

int main () {
	printf("%d\n", power(3, 4));
	return 0;
}