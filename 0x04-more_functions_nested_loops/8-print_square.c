#include "main.h"
#include <stdio.h>

/**
 * print_square - fct that print a square
 * @size: the size of the square
 *
 * Return: square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
