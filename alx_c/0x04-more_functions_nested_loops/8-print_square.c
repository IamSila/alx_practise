#include <stdio.h>

/**
 * print_square - name of our function
*/
void print_square(int size)
{
    int i = 1;
    int j;
    while (i <= size)
    {
        if (size <= 0)
        {
            printf("\n");
        }
        else
        {
            for (j = 1; j <= size; j++)
            {
                printf("#");
            }
        }
        printf("\n");
        i++;
    }
}
