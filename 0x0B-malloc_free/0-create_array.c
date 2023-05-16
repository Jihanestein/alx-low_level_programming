#include "main.h"
#include <stdlib.h>

/**
*create_array - function that creates array of char
*@size:size of array
*@c:char
*Return:NULL if size equal 0 or if it fails othwise pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
