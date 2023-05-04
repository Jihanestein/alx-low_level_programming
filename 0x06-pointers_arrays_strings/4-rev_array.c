#include "main.h"
#include <stdio.h>

/**
 * reverse_array - fuction that reverse an array of int
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: reversed array of int
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
