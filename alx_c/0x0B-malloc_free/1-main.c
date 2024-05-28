#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - check the main code
 * Return: is always 0
*/

int main(void)
{
    char *s;
    char *results;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory");
        return (1);
    }    
    
    /*debugging my code*/
    results = _strdup("hello");
    printf("%s", s);
    printf("%s", results);
    return (0);
}
