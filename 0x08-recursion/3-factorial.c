#include "main.h"

/**
 * factorial - function that return factorial of a number
 * @n: number
 * Return: factorial of the number if num is < 0 return error -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
