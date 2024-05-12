/*TASK 1 :-- Write a program that prints the number of arguments passed into it.

Your program should print a number, followed by a new line
*/

#include "main.h"
#include <stdio.h>

/**
 * main- prints the number of arguments passed to it.
 * @argc: stores the number of arguments passed to the function.
 * @argv: stores the actual names/ the arguments passed to the function.
 * Return: is always 0 if success and otherwise if fail.
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d", argc - 1);
	}
	return (0);
}