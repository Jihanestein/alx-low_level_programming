#include "main.h"

#include <stdio.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: num from 0 to 14 ten times
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			putchar(b + '0');
			putchar(' ');
		}
		putchar('\n');
	}
}
