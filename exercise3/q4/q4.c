#include <stdio.h>

void readRange(int *number1, int *number2)
{
	printf("Enter a range: ");
    scanf("%d %d", number1, number2);
}

void sortNums(int *number1, int *number2)
{
	if (*number2 < *number1) {
		int temp = *number1;
		*number1 = *number2;
		*number2 = temp;
	}
}

int isOneNegative(int number1, int number2)
{
	if ((number1 < 0 && number2 > 0) || (number1 > 0 && number2 < 0))
		return -1;
	return 0;
}

int loopCalculation(int number1, int number2, int result) {
    while (number1 <= number2) {  
        result = result * number2;
        number2--;
    }
    return result;
}

int main() {
	int number1, number2;

	readRange(&number1, &number2);
	sortNums(&number1, &number2);

	printf("number1: %d\n", number1);
	printf("number2: %d\n", number2);

	if (isOneNegative(number1, number2) == -1) {
		printf("Result is zero");
	}
	else {
		printf("%d", loopCalculation(number1, number2, 1));
	}
	
    return 0;
}
