#include <stdio.h>

void solution()
{
    int row, col;
	for (row = 1; row < 5; row++) 
	{
		if (row == 1 || row == 4) 
		{
			for (col = 1; col <= 5; col++) 
			{
				printf("*");
			}
		}
		else 
		{
			printf("*");
			for (col = 1; col < 4; col++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}

int main(void) 
{
	solution();
	return 0;
}