#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - fct that return 1 if n is prime number
 * @n: number
 * @a: int
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0 && a > 0)
	{
		return (0);
	}
	return (is_prime_number(n, a - 1));
}
