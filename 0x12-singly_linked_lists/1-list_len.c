#include "lists.h"

/**
 * list_len - returns num of lists
 * @h: pointer
 *
 * Return: (total)
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;
	int total = 0;

	while (h)
	{
		n++;
		h = h->next;

	}
	total += n;
	return (total);
}

