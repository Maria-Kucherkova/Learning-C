#include <stdio.h>

int main(void)
{
	int row, column;
	for (row = 0; row < 7; row++)
	{
		printf("*");
		switch(row)
		{
			case 0:
			case 6:
			for (column = 1; column < 7; column++) 
			{
				printf("*");
			}
			break;

			case 1:
			case 5:
			for (column = 1; column < 7; column++)
			{
				printf(" ");
			}
			break;

			case 2:
			case 4:
			printf(" ");
			for (column = 2; column < 6; column++) 
			{
				printf("#");
			}
			printf(" ");
			break;
			
			case 3:
			for (column = 0; column < 7; column++)
            {
                if (column == 2 || column == 5)
                    printf("#");
                else if (column == 7 || column == 0)
                    continue;
                else
                    printf(" ");
            }
            break;
        }
        printf("*");
        printf("\n");
	}
	return 0;
}