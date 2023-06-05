#include "lists.h"

/**
  * free_listint - Write a function that frees a list
  * @head: list to be freed
  *
  */

void free_listint(listint_t *head)
{
	listint_t *trans;

	while (head)
	{
		trans = head->next;
		free(head);
		head = trans;
	}
}
