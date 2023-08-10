#include <stdio.h>

void solution()
{
    int row, col;
    for (row = 1; row <= 6; row++)
    {
        for (int space = 1; space < row; space++)
        {
            printf(" ");
        }
        for (col = 6; col >= row; col--)
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
