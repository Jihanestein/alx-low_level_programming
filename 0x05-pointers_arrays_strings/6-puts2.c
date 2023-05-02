#include "main.h"
#include <stdio.h>

/**
 * puts2 - fct print char of string starting with 1 char
 * @str: string
 * Return: char of string
 */

void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		len++;
	}
	a = len - 1;
	for (c = 0 ; c <= a ; a++)
	{
		if (c % 2 == 0)
	{
		putchar(str[c]);
	}
	}
}
