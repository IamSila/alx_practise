#include <stdio.h>
#include "main.h"
#include<string.h>



/**
 * _puts - prints the string str
 * Return - nothing
*/

void _puts(char *str)
{
    int length= strlen(str);
    int i;
    for (i=0; i<length; i++)
    {
        _putchar(str[i]);
    }
}
