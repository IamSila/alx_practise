#include "main.h"
#include <stdio.h>


/**
 * swap_int - function to swap two intergers
 *
 * Return : void
*/


void swap_int(int *a, int *b)
{
        int x, y;
        x = *a;
        y = *b;

        *a = y;
        *b = x;
}