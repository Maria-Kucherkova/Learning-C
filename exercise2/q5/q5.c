#include <stdio.h>
int main(void)
{
	int row, column;
	for (row = 0 ; row < 6 ; row++)
	{
		for (column = 0 ; column < row ; column++) 
		{ 
			printf(" ");
		}
		
		for (column = 0 ; column < 6 - row ; column++) 
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}