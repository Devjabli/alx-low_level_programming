#include "lists.h"

/**
 * dlistint_len - print length of node
 * @h: data pointer node
 *
 * Return: number of elements printed
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
