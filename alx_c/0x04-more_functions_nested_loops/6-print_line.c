#include <stdio.h>

/**
 * print_line - function name
 * 
 * @n: stores length of the line
*/

void print_line(int n)
{
    int length;
    for (length = 1; length <= n; length++)
    {
        printf("_");
        length++;
    }
    printf("\n");

}