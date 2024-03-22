#include "lists.h"

/**
 * print_dlistint - print all elements n data
 * @h: data pointer node
 *
 * Return: number of elements printed
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
