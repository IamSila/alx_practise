/* Write a program that adds positive numbers.

Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line  --> DONE
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored in an int
*/

/**
 * main- adds positive numbers
 * @argc: keeps count of the arguments passed to the function
 * @argv: stores the arguments passed to the function
 * Return: is always 0 on success and otherwise on fail
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	/*variables to check the characters in the arguments*/
	int argument_number;
	int argument_character_index;
	
	/*variable to store the sum*/
	int sum = 0;

	/*If no number is passed to the program, print 0, followed by a new line*/
	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	/*If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1*/
	for (argument_number = 1; argument_number < argc; argument_number++)
	{
		/*check if the characters contained in the argument are digits*/
		for (argument_character_index = 0; argv[argument_number][argument_character_index] != '\0'; argument_character_index++ )
		{
			if (!isdigit(argv[argument_number][argument_character_index]))
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[argument_number]);
	}
	printf("%d", sum);
	return (0);
}