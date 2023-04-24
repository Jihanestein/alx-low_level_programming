#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
	}
	while (b <= 98)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
