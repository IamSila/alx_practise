#include <stdio.h>

/**
 * print_most_numbers - function name
 * 
*/

void print_most_numbers(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        if (number != 2 && number != 4)
        {
            printf("%d", number);
        }

    }
    printf("\n");
}