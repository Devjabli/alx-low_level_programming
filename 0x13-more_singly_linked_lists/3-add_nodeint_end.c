#include "lists.h"

/**
 * add_nodeint_end - add int at the end
 * @head: pointer of the start node link list
 * @n: data of link list
 * Return: newNode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
