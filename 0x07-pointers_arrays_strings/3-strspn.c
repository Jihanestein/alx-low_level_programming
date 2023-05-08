#include "main.h"
#include <stdio.h>

/**
 *  _strspn - fucntion that gets lenght of a prefix string
 * @s: number of bytes
 * @accept: input
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
