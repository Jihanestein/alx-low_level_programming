#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that print a string a reverse it
 * @s: string
 *
 * Return: string reversed
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i > 0; i--)
	{
	putchar(*s);
	s--;
	}
	putchar('\n');
}
