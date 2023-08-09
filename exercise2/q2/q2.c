#include <stdio.h>

int main() {
    int multiplier;
	for (multiplier = 1; multiplier <=10; multiplier++) {
		int result = multiplier * 13;
        printf("%d * 13 = %d\n", multiplier, result);
	}
    return 0;
}