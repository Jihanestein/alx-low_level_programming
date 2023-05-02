#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swap value of two int
 * @a: integer
 * @b: integer
 *
 * Return: value of a & b
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
