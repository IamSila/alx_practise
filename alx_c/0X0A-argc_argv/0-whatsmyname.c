/*TASK0:-- Write a program that prints the name of the program itself*/

#include <stdio.h>

/**
 * main- prints the name of the program itself
 * @argc: counts the number of arguments passed
 * @argv: an array storing all the arguments
 * Return: is always 0 for success and non-zero if otherwise
*/


int main(int argc, char *argv[])
{
	/*printing the name of the program*/
	printf("%s\n", argv[0]);
	return (0);
}
