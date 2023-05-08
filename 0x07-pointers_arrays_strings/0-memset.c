#include "main.h"
#include <stdio.h>

/**
 * *_memset - function that fills memory
 * @s: memory area
 * @b: constant byte
 * @n: byte
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
