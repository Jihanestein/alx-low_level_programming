#include "main.h"
#include <stdio.h>

/**
 * int _strlen - fucntion that return a lenght of a string
 * @s: string
 * @len: lenght
 * Return: lenght of a srting
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
