/*Write a program that prints all arguments it receives.

All arguments should be printed, including the first one (argv[0])
Only print one argument per line, ending with a new line*/

#include <stdio.h>

/**
 * main- prints all arguments it receives.
 * @argc: counts the number of arguments passed to it.
 * @argv: stores the arguments passed to main.
 * Return: is always 0 if success, otherwise if a fail.
*/

int main(int argc, char *argv[])
{
	int counter;
	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}