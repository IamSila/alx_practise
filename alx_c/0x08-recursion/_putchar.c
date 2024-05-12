#include <stdio.h>
#include "main.h"
#include <unistd.h>


/**
 * putchar- prints a character to the standard output
 * 
 * Return is void
*/

char _putchar(char c)
{
    return (write(1, &c, 1));
}