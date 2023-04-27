#include "main.h"

#include <stdio.h>

/**
 * print_numbers - function that prints num from 0 to 9
 *
 * Return: num from 0 to 9
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
