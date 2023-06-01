#include <stdlib.h>
#include "lists.h"

/**
  * free_list - function that freea list
  * @head: list ot be freed
  */

void free_list(list_t *head)
{
	list_t *trans; /*trans means transient*/

	while (head)
	{
		trans = head->next;
		free(head->str);
		free(head);
		head = trans;
	}
}
