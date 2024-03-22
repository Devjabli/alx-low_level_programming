#include "lists.h"

/**
 * free_dlistint - free all nodes from memory
 * @head: the head of node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *crt;

	while (head != NULL)
	{
		crt = head;
		head = head->next;
		free(crt);
	}
}
