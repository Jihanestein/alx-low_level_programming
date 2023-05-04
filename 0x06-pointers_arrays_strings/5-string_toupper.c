#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters to uppercases
 * @p: pointer
 * Return: uppercase letters
 */

char *string_toupper(char *p)
{
	int j;

	j = 0;
	while (p[j] != '\0')
	{
		if (p[j] >= 'a' && p[j] <= 'z')
			p[j] = p[j] - 32;
		j++;
	}
}
