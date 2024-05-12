#include <stdio.h>
#include "main.h"


/**
 * _puts_recursion- Puts with recursion
 * char s - stores the string to be printed
*/

void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(++s);
    }
    else
        _putchar('\n');
}