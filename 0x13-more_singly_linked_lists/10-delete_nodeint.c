#include "lists.h"

/**
  * delete_nodeint_at_index - functions that delete a node at index of a list
  * @head: first pointer
  * @index: index of the node
  *
  * Return: 1 if success, -1 if fail
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trans = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(trans);
		return (1);
	}

	while (a < index - 1)
	{
		if (!trans || !(trans->next))
			return (-1);
		trans = trans->next;
		a++;
	}

	current = trans->next;
	trans->next = current->next;
	free(current);

	return (1);
}
