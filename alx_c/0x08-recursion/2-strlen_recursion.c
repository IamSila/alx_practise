#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s)
{
    int length = 0;

    if (*s)
    {
        length = _strlen_recursion(s +1);
        return (length + 1);
    }
    return (0);

}