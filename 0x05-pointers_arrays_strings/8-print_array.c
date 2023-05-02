#include "main.h"
#include <stdio.h>

/**
 * print_array - fucntion that print n elements
 * @a: refer to array
 * @n: integer
 *
 * Return: a & n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; 1 < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
