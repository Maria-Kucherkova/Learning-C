#include <stdio.h>

int main() {
    int multiplier = 1;

    while (multiplier <= 10) {
        int result = multiplier * 13;
        printf("%d * 13 = %d\n", multiplier, result);
        multiplier++;
    }

    return 0;
}
