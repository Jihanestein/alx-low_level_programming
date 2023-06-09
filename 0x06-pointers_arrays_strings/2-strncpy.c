#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - fctn that copy a string
 * @n: input
 * @dest: input
 * @src: input
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
