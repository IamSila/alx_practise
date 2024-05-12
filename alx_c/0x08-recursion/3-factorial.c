#include <stdio.h>
#include "main.h"

/**
 * factorial - function to calculate the factorial
 * 
 * Return: integer value of the factorial of a number
*/

/*Write a function that returns the factorial of a given number.

    Prototype: int factorial(int n);
    If n is lower than 0, the function should return -1 to indicate an error
    Factorial of 0 is 1
*/

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}
