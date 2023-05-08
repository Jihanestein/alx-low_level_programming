#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that locate the fisrt occurence in the string
 * @s: string
 * @accept: input
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
		if (*s == accept[e])
		return (s);
		}
	s++;
	}
	return ('\0');
}
