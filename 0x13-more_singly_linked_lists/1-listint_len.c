#include "lists.h"


/**
 * listint_len - prints the length of the link list
 * @h: data pointer node
 * Return: iterate on loop and get total of length (i)
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	int total = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	total += i;
	return (total);
}
