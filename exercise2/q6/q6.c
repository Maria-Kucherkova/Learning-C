#include <stdio.h>
int main(void)
{
	int spaces = 0;
	int step;
	int row, column;

	for (row = 0 ; row < 9 ; row++)
	{
		for (column = 0 ; column < spaces ; column++) 
		{
			printf(" ");
		}

		for (column = 0 ; column < 5 ; column++)
		{
			printf("*");
		}
		
		printf("\n");

		if (row == 0 || row == 7)
		{
			int step = 2;
		}

		else
		{
			int step = 1;
		}
		
		if (row < 4)
		{
			spaces = spaces + step;
		}
		
		else
		{
			spaces = spaces - step;
		}
		
		
	}

	return 0;
}