#include "main.h"
#include <stdio.h>

/**
 * print_triangle - fct that draw a triangle
 * @size: size of triangle
 *
 * Return: triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; b <= size; a++)
		{
			putchar(' ');
		}
		for (b = 1; b <= a; b++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
