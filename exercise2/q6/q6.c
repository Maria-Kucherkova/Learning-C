#include <stdio.h>

void solution()
{
    int row, col;
    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < row; col++)
        {
            printf(" ");
        }
        
        for (col = 0; col < 5; col++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    for (row = 3; row >= 0; row--)
    {
        for (col = 0; col < row; col++)
        {
            printf(" ");
        }
        
        for (col = 0; col < 5; col++)
        {
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
