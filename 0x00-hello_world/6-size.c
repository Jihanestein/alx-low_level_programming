#include <stdio.h>
/**
 * main -Size progtaming
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long: %lu byte\n", sizeof(long int));
	printf("Size of a long long int: %lu byte\n", sizeof(long long int));
	printf("Size of a float: %lu byte\n", sizeof(float));
return (0);
}
