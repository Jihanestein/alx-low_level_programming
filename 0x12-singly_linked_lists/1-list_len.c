#include <stdlib.h>
#include "lists.h"

/**
  * list_len - return the num of elments in linked list
  * @h: pointer
  *
  * Return: number of element in h
  */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
