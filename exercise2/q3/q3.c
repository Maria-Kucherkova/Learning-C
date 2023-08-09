#include <stdio.h>

int main(void)
{
	int multiplier = 1;
	do
	{
		int result = multiplier * 13;
		printf("%i * 13 = %i\n", multiplier, result);
	}
	while (++multiplier<=10);
	
	return 0;
}