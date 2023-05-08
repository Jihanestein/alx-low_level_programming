#include "main.h"
#include <stdio.h>

/**
 * *_strchr - fucntion that loctae a char in a string
 * @c: character
 * @s: string
 *
 *
 * Return: pointer fi char found, null if not
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
