#include "main.h"
#include <stdio.h>

/**
 *main - function that print name
 *@argv: array of the arguments
 *@argc: number of argument
 *Return: Always (0) sucess
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
