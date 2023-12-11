#include "lists.h"

/**
 * print_listint - printing the elements of a linked list
 * @h: pointer link list to alll data
 *
 * Return: (n)
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

