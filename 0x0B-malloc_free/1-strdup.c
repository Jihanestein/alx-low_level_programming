#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strdup - fuction that return a pointer to new memory
  *@str: char
  *@b: memory
  * Return: NULL if str is NULL otherwise a pointer to duplicated string
  */

char *_strdup(char *str)
{
	char *s;
	int a;
	int b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	s = malloc(sizeof(char) * (a + 1));

	if (s == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		s[b] = str[b];
		return (s);
}
