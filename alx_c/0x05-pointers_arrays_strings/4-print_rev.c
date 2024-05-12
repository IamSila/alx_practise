#include <stdio.h>
#include "main.h"
#include <string.h>



void print_rev(char *s)
{
    int count;
    int length = strlen(s);

    for (count=length; !(count < 0); count--)
    {
        _putchar(s[count]);
    }
}
