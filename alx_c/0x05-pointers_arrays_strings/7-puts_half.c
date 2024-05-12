#include "2-strlen.c"
#include "main.h"
#include <string.h>

void puts_half(char *str)
{
    int i;
    int x = 0;

    
        if (_strlen(str) / 2 != 0)
        {
            x +=1;
        }

        for (i = _strlen(str)/ 2; i < _strlen(str); i++)
        {
            _putchar(str[i]);
        }
    
}