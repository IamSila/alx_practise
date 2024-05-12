#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * 
 * Return - is always 0
*/

int main(void)
{
    /*fizz buzz program*/
    int number;
    for (number = 1; number <= 100; number++)
    {
        if (number % 3 == 0 && number % 5 != 0)
        {
            printf(" Fizz");
        }
        else if (number % 5 == 0 && number % 3 != 0)
        {
            printf(" Buzz");
        }
        else if (number % 3 == 0 && number % 5 == 0)
        {
            printf(" FizzBuzz");
        }
        else
        {
            printf(" %d", number);
        }
    }
    printf("\n");
    return (0);
}