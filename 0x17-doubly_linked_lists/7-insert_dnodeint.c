#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at index
 * @h: head of node pointer
 * @idx: giving index number
 * @n: data node
 *
 * Return: return node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));

	if (idx == 0)
		return (add_dnodeint(h, n));

	i = 0;
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
