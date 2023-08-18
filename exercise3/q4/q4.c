#include <stdio.h>

void readRange()
{

}

void sortNums()
{

}

int isOneNegative(int number1, int number2)
{
	if ((number1 < 0 && number2 > 0) || (number1 > 0 || number2 < 0))
		return -1;
	return 0;

}

int recursiveCalculation(int number1, int number2, int result)
{
	if (number2 < number1)
	{
		return result;
	}
	return recursiveCalculation(number1, ((number2)-1), result * number2);
}

int main() {
	int number1, number2;

	// Your work goes here
	readRange();
	sortNums();
	// Your work goes here

	if (isOneNegative(number1, number2) == 0)
	{
		printf("Result is zero");
	}
	else
	{
		printf("%d", recursiveCalculation(number1, number2, 1));
	}
	
    return 0;
}
