#include "main.h"
#include <stdio.h>

/**
 * *_strncat - fctn concatenates two strings
 *
 * @src: input
 * @dest: input
 * @n: input
 * Return: return string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[b] = '\0';
	return (dest);
}
