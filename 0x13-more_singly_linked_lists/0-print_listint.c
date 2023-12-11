#include "lists.h"


/**
 * print_listint - printing link list
 * @h: pointing to the first node
 * Return: total of itration (total)
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	int total = 0;

	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}
	total += i;
	return (total);
}
