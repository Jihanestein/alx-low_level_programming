#include "main.h"

#include <stdio.h>

/**
 * print_numbers - function that prints num from 0 to 9
 *
 * Return: num from 0 to 9
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
