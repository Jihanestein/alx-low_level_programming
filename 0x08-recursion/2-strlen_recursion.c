#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that return a lenght of a string
 * @s: input
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}

	return (lenght);
}
