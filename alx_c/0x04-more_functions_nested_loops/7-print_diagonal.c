#include <stdio.h>

/**
 * print_diagonal - name of the function
 * 
 * @n: stores the length of the diagonal
*/

void print_diagonal(int n)
{
    int diagonal_length;
    int i;

    for (diagonal_length = 1; diagonal_length <= n; diagonal_length++)
    {
        if (n <= 0)
        {
            printf("\n");
        }
        for (i = 1; i <= diagonal_length; i++)
        {
            if (i <= diagonal_length -1)
            {
                printf(" ");
            }
            else
            {
                printf("\\");
                printf("\n");
            }
        }
        
    }
    
}
