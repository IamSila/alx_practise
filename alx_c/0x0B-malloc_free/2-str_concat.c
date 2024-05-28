#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
    /*loop iterator*/
    int i;
    int j;

    while (s1[i] != '\n')
    {
        i++;
    }
    while ((s2[j]) != '\n')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\n';
}