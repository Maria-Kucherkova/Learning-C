#include <stdio.h>

void solution()
{
    int row, col;
    
    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 9; col++)
        {
            if (col == row)
            {
                printf("*");
            }
            else if (col == 0 || (row > 3 && col == 1 && row - col == 3))
            {
                printf("*");
            }
            else if (row > col && col > 0)
            {
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
		printf("\n");
    }
}

void solution2()
{
	int increment = 1;
	for (int row = 0; row >= 0; row += increment)
	{
		for (int col = 0; col < row+1; col++)
		{
			if (col == 0)
			{
				printf("*");
			}
			else if (row == col)
			{
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");

		if (row == 5)
		{
			increment = -1;
		}
	}
}

int main(void)
{
    // solution();
	solution2();
    return 0;
}
