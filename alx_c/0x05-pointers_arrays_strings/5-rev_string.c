#include <stdio.h>
#include <string.h>
#include "main.h"
#include "2-strlen.c"



void rev_string(char *s)
{
    int i;
	char x;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		x = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = x;
	}
}
