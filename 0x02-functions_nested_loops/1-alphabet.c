#include "main.h"
/**
 * main - check the code
 * Description: function that prints the alphabet
 * @print_alphabet: parametre that print alphabet
 * Return: void.
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
