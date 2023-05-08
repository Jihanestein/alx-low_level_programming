#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - fucntion that print chessboard
 * @a: array
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int e;
	int f;

	for (e = 0; e < 8; e++)
	{
		for (f = 0; f < 8; f++)
			putchar(a[e][f]);
		putchar('\n');
	}
}
