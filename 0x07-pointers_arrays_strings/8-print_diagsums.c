#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that print sum of a squarer
 * @a: array
 * @size: input
 * Return: sum of squares
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int b;

	sum1 = 0;
	sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 = sum1 + a[b * size + b];
	}
}
