#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - finds the squareroot of a number
 * @n: the number to find a squareroot for
 *
 * Return: the squareroot of the number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_squareroot(n, 0));


}

/**
 * actual_squareroot - has the algorithm of finding the squareroot of a number
 * @n: is the number to find the squareroot for
 * @i: the number to validate the squareroot
 *
 * Return: the squareroot of a number
*/
int actual_squareroot(int n, int i)
{
	/*basecase1: if i*i is more than n then return -1 (error)*/
	if (i * i > n)
	{
		return (-1);
	}
	/*basecase2: if i*i is equals to n then return i*/
	if (i * i == n)
	{
		return (i);
	}
	/*solve the case recursively*/
	return (actual_squareroot(n, i + 1));
}
