#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;
printf("Size of a char: %1ld bytes\n", sizeof(char));
printf("Size of an int: %4ld bytes\n", sizeof(int));
printf("Size of a long: %4ld byte\n", sizeof(long int));
printf("Size of a long long int: %8ld byte\n", sizeof(long long int));
printf("Size of a float: %4ld byte\n", sizeof(float));
return (0);
}
