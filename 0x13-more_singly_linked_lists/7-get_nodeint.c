#include "lists.h"

/**
  * *get_nodeint_at_index - function that returns the nth node of a list
  * @head: first node
  * @index: index of the node
  * Return: the node otherwise NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *trans = head;

	while (trans && a < index)
	{
		trans = trans->next;
		a++;
	}

	return (trans ? trans : NULL);
}
