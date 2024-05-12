#include "main.h"
#include <stdlib.h>
#include<stdio.h>



int tri_num(int);

int main()
{
    int n;
    int t;
    printf("Enter a numer");
    scanf("%d", &n);
    t = tri_num(n);
    printf("\n Triangular number of %d is %d",n, t);
}
// function definition
int tri_num(int m)
{
    int f = 0;
    if (m==0)
    {
        return (f);
    }
    else
    {
        f = f + m + tri_num(m-1);
    }
    return (f);
}