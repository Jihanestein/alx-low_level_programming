#include "main.h"
/**
 * _isalpha  -  checks for alphabetic character lower & uppercase.
 * @c : ASCII code for the character
 * Return: 1 if lower or upper case else return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
