#include <stdio.h>

void solution()
{
    int row, col;
    for (row = 0; row < 7; row++)
    {
        for (col = 0; col < 8; col++)
        {
            if (row == 0 || row == 6 || col == 0 || col == 7)
            {
                printf("*");
            }
            else if ((row == 2 || row == 4) && (col == 2 || col == 5))
            {
                printf("#");
            }
            else if (row == 3 && (col == 2 || col == 5))
            {
                printf("#");
            }
            else if (row == 3 && (col == 3 || col == 4))
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

int main(void)
{
    solution();
    return 0;
}
