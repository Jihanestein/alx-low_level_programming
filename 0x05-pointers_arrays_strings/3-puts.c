#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 *
 *@str: string
 * Return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
