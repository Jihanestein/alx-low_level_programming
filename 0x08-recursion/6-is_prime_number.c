#include "main.h"
#include <stdio.h>

/**
 * n_is_prime_number - fct that calculate n number
 * @n: number
 * @a: int
 * Return: 1 if prime number otherwise 0
 */

int n_is_prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (n_is_prime_number(n, a - 1));
}
/**
 * is_prime_number - fctuon that return 1 if n is prime number
 * @n: number
 *
 * Return: 1 if prime num otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (n_is_prime_number(n, n - 1));
}
