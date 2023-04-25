#include "main.h"
/**
 *_islower - checks for lowercase character
 * int _islower - character that are similar to a
 * @c : ASCII code character
 * Return: return 1 for lower case anyhting else return 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
