#include <stdio.h>

void solution()
{
    int row, col;
    
    for (row = 0; row < 7; row++)
    {
        for (col = 0; col < 7; col++)
        {
            if ((row + col) % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("#");
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
