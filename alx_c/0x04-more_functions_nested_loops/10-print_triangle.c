#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function to print the triangle shape 
*/

void print_triangle(int size)
{
    if (size <= 0)
    {
        printf("\n");
    }
    else
    {
        int i, j;

        for (i = 1; i <= size; i++)
        {
            for (j=i; j<size; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }

    
         
}