#include "lists.h"

/**
  * free_listint2 -  function that frees a list
  * @head: pointer to free the list
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *trans;

	if (head == NULL)
		return;

	while (*head)
	{
		trans = (*head)->next;
		free(*head);
		*head = trans;
	}

	*head = NULL;
}
