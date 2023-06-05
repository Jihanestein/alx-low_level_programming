#include "lists.h"

/**
  * *add_nodeint -  function that adds a new node at the beginning of a list
  * @n: data to insert in the node
  * @head: pointer to the fisrt node in the list
  *
  * Return: the adresse of the new element otherwise NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
