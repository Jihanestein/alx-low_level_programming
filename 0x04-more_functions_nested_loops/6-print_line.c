#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line
 * @n: numb of time char should be printed to create a line
 * Return: straight line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
