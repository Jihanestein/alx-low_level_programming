#include "main.h"
#include <stdio.h>

/**
 * _strcmp - fctn that compare two strings
 *
 * @s1: string one
 * @s2: string two
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
