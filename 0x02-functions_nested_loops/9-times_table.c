#include "main.h"
/**
 * times_table - function that prints table of a number
 *
 * Return: nothing
 */
void times_table(void)
{
	int a, b, d, e, f;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	d = a * b;
	if (d > 9)
	{
	e = d % 10;
	f = (d - e) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(e + '0');
	_putchar(f + '0');
	}
	else
	{
	if (b != 0)
	{
	 _putchar(44);
	 _putchar(32);
	 _putchar(32);
	}
	 _putchar(d + '0');
	}
	}
	_putchar('\n');
	}
}
