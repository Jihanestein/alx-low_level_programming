#include "main.h"
#include <stdio.h>

/**
 * main - program that print number of arguments
 * @argv: array of argument
 * @argc: number of argu
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
