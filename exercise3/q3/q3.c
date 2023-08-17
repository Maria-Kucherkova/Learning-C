#include <stdio.h>

int isPalindrome(long int num) {
    long int originalNum = num;
    long int reversedNum = 0;

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    long int num;
    printf("Enter a long integer: ");
    scanf("%ld", &num);

    if (isPalindrome(num)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
