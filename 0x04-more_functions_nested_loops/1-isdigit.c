#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *
 * @c: charcater to check
 * Return: 1 if char is digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
