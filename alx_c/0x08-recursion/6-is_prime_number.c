#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime
 * 
 * Return: 1 if number is prime, 0 if number is not prime
*/


int is_prime_number(int n)
{
    int i = 2;
    if (n < 2)
    {
        return 0;
    }
    if ((i <= n / 2) && (n % i == 0))
    {
        return 0;
    }
    return 1;
    i++;
    is_prime_number(n);
    
}