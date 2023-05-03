#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: half of the string
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
	b = (a - 1) / 2;
	b += 1;
	}
	else
	{
	b = a / 2;
	}

	for (; b < a; b++)
	{
		putchar(str[b]);
	}
		putchar('\n');
}
