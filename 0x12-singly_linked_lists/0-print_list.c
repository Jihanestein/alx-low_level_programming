#include <stdio.h>
#include "lists.h"

/**
  * print_list - print every element of the linked list
  * @h: pointer
  *
  * Return: number of node printed
  */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}
