#include "lists.h"

/**
 * add_dnodeint - add node at the start
 * @head: the head of node pointer
 * @n: data node pointer
 *
 * Return: (0)
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;



	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
