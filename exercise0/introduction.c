#include <stdio.h>

int main()
{
	int number, right_digit;
	printf("Enter your number.\n"); //variable definition
	scanf("%i",&number); //input statement
	do
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number/10; /* code */
	} 
	while (number != 0);
	printf("\n");
		
	return 0;
}