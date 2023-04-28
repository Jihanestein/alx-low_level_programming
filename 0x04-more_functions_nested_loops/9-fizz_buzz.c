#include "main.h"
#include <stdio.h>

/**
 * main - print num from 0 to 100
 * print Fizz for x of 3
 * print buzz for x of 5
 * print fizzbuzz for multiple of 3 and 5
 * Return: fizz or buzz or fizzbuzz
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d",i);
			putchar(' ');
		}
		putchar('\n');
	}
}
