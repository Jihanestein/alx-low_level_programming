#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
     printf("Size of a char: %ld bytes\n",sizeof(charType));
     printf("Size of a int: %4d bytes\n",sizeof(integerType));
     printf("Size of a long: %4d byte\n",sizeof(longType));
     printf("Size of a long long int: %8d byte\n",sizeof(longlongType));
     printf("Size of a float: %4d byte\n",sizeof(floatType));
return (0);
}
