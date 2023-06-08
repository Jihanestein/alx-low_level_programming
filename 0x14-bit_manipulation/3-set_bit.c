#include "main.h"

/**
  * set_bit - function that sets the value of a bit to 1
  * @n: number
  * @index: index strating from 0
  *
  * Return: success (1) , erro (-1)
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
		return (1);
}
