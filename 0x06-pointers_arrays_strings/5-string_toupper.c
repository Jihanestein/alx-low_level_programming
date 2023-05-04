#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters to uppercases
 * @n: pointer
 * Return: uppercase letters
 */

char *string_toupper(char *n)
{
	int j;

	j = 0;
	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
		j++;
	}
	return (n);
}
