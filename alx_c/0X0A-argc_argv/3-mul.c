/* Write a program that multiplies two numbers.

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1*/

#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers.
 * @argc: number of arguments passed to the funciton.
 * @argv: an array that stores the arguments passed to  a functions.
 * Return: is always 0 on success and otherwise if fail.
*/
int main(int argc, char *argv[])
{
	int results;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	else
	{
		results = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", results);
	}
	
	return (0);
}

