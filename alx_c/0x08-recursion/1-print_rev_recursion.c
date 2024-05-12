#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * 
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
   if (*s)
   {
        _print_rev_recursion(s + 1);
        _putchar(*s);
   }
}