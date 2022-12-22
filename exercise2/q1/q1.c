#include <stdio.h>

int main(void)
{
	int mult = 1;
	while (mult < 13)
	{
		printf("%i * 13 = %i\n", mult, mult * 13);
		mult++;
	}
		
	return 0;
}