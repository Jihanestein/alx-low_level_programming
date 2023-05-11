#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * @i: int
 * Return: square root or -1 if not
 */

int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
