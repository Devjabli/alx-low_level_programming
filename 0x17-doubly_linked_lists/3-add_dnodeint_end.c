#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: start of the node pointer
 * @n: data pointer node
 *
 * Return: node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}


	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
