#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *_strdup- return a memory location  of a copied string
 Return: a character or a string depending on your understanding
*/

char *_strdup(char *str)
{
    /*integer for loop iteration*/
    unsigned int i;
    char *new_string;

    new_string = malloc(sizeof(str) * strlen(str));

    if (str == NULL)
    {
        printf("Memory access failed!!!");
        return (NULL);
    }

    for (i = 0; i < strlen(str); i++)
    {
        new_string[i] = str[i];
    }

    new_string[i] = '\n';
    return (new_string);
    free (new_string);

}
