#include "lists.h"

/**
  * sum_listint -  function that returns the sum of all the data (n) of a list
  * @head: fisrt node
  *
  * Return: sum otherwise 0
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trans = head;

	while (trans)
	{
		sum += trans->n;
		trans = trans->next;
	}

	return (sum);
}
