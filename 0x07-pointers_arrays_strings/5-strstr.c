#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locate substring
 *@needle: substring
 *@haystack: string
 * Return: pointer located string or null substring not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *f = needle;

		while (*t == *f && *f != '\0')
		{
			t++;
			f++;
		}

		if (*f == '\0')
			return (haystack);
	}
	return (0);

}
