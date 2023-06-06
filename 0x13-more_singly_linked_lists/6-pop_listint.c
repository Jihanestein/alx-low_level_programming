#include "lists.h"

/**
  * pop_listint - Write a function that deletes the head node of a list
  * @head: first pointer
  *
  * Return: data insinde the elem otherwise 0
  */

int pop_listint(listint_t **head)
{
	listint_t *trans;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	trans = (*head)->next;
	free(*head);
	*head = trans;

	return (num);
}
