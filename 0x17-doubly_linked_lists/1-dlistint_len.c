#include "lists.h"


/**
 * dlistint_len - return doubly linked list
 * @h: pointer of head node
 *
 * Return: return length of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
