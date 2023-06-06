#include "lists.h"

/**
  * *insert_nodeint_at_index - function that inserts
  * a new node at a given position
  * @head: first pointer
  * @idx: index
  * @n: data to insert new node
  *
  * Return: adress of the new node otherwise NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *trans = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; trans && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = trans->next;
			trans->next = new;
			return (new);
		}
		else
			trans = trans->next;
	}

	return (NULL);
}
