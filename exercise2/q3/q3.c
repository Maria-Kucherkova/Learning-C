#include <stdio.h>

int main(void)
{
	int mult = 1;
	do
	{
		printf("%i * 13 = %i\n", mult, mult * 13);
	}
	while (++mult<=13);
	
	return 0;
}