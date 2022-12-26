#include <stdio.h>

int main(void)
{
	int mult;
	for (mult = 1 ; mult < 13 ; mult++)
	{
		printf("%i * 13 = %i\n", mult, mult * 13);
	}
	
	return 0;
}
