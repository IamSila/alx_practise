#include "main.h"
#include <stdio.h>


char _puts(char *s)
{
    return(write(1,&s));
}