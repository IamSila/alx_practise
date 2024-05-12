#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the minimum number of coins to give for change
 * @argc: keeps count of the arguments passed to the function
 * @argv: stores the actual arguments passed to the function
 * Return: is always 0 for success and otherwise for a fail.
*/

int main(int argc, char *argv[])
{
	int cents;
	int number_of_coins;

	cents = atoi(argv[1]);

	if (argc == 0 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		number_of_coins += 1;
	}
	printf("%d", number_of_coins);
	return (0);
}
