#include "main.h"
#include<stdio.h>
#include<stdio.h>
#include <string.h>


/**
 * main - concatenates two strings
 * dest - the destination and final string
 * src - source string whose contents will be copied to destination
*/


char *_strcat(char *dest, char *src)
{
    int x, y;
    x = 0;
    y = 0;

    while (dest[x] != '\n')
        x++;
    while (src[y] != '\n')
    {
        dest[x] = src[y];
        x++;
        y++;
    }
    dest[x] = '\n';
    return (dest);

}