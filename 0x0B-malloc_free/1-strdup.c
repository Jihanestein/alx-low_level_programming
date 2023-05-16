#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strdup - fuction that return a pointer to new memory
  *@str: char
  * Return: NULL if str is NULL otherwise a pointer to duplicated string
  */

char *_strdup(char *str)
{
	char *s;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	while (str[b])
	{
		a++;
	}

	s = malloc((sizeof(char) * a) + 1);

	if (s == NULL)
		return (NULL);

	while (a < b)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
