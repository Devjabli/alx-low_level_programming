#include <stdlib.h>
#include "lists.h"

/**
 * free_list - one argument that frees list from memory
 * @head: pointer
*/

void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}

