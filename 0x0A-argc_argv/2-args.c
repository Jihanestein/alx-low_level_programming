#include "main.h"
#include <stdio.h>

/**
 * main - program that print all argu in receives
 * @argv: array of the arguments
 * @argc: number of arguments
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
