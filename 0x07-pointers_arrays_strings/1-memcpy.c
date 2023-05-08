#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - function that copy n bytes fro src to dest
 * @src: memory area
 * @dest: memory area
 * @n: bytes
 * Return: copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int c = 0;

	for (; a < c; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
