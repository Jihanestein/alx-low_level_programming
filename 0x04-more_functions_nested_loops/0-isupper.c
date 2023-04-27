#include "main.h"

/**
 *_isupper -  function that checks for uppercase char
 * @c: charcter to check
 *
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
