#include <stdio.h>

void solution()
{
    int row, col, firstRow, lastRow;
	for (firstRow = 0; firstRow < 7; firstRow++)
	{
		printf("*");
	}
	
	printf("\n");

	for (row = 0; row < 6; row++)
	{
		for (col = 0; col < 7; col++)
		{
			if (col == row+1 || col == 6)
			{
				printf("*");
			}
			else if (col == 0 && row > 0 || col == row)
			{
				printf("#");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for (lastRow = 0; lastRow < 7; lastRow++)
	{
		printf("#");
	}
	printf("\n");
}	

int main(void)	
{
	solution();
    return 0;
}
