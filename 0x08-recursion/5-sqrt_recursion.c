#include "main.h"
#include <stdio.h>

/**
 * second_sqrt_recursion - fct that find natural square root
 * @n: number
 * @i: int
 * Return: square root or -1 if not
 */

int second_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (1);
	if (i * i == n)
		return (i);
	return (second_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: square root or -1 if not
 */



int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (second_sqrt_recursion(n, 0));
}
