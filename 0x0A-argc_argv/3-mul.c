#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - funtion that multiple two numbers
  *atoi - convert string to intger
  *@argc: number of arguments
  *@argv: array of arguments
  *
  *Return: 0 (always sucess)
  */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
