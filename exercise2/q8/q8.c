#include <stdio.h>
#include <stdbool.h> 

bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int row, column;
    for (row = 0; row < 6; row++)
    {
        for (column = 0; column < 7; column++)
        {
            if (isEven(row) && isEven(column))
            {
                printf("*");
            }
            else if (isEven(row) && (!isEven(column)))
            {
                printf("#");
            }
            else if ((!isEven(row)) && (isEven(column)))
            {
                printf("#");
            }
            else if ((!isEven(row)) && (!isEven(column)))
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}