#include "lists.h"

/**
  * *reverse_listint - Write a function that reverses alinked  list
  * @head: first pointet
  *
  * Return: a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}

	*head = former;

	return (*head);
}
