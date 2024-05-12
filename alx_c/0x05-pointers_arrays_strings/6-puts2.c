#include "main.h"
#include <stdio.h>
#include "2-strlen.c"


void puts2(char *str)
{
    int i;
    
    for (i = 0; (i < _strlen(str) - 1); i = i+2)
    {
        _putchar(str[i]);
    }
}