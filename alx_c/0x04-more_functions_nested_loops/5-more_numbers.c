#include <stdio.h>

/**
 * more_numbers - name of the function
*/

void more_numbers(void)
{
    int i;
    int j;
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <=14; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}