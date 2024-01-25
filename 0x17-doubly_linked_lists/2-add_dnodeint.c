#include "lists.h"

/**
 * add_dnodeint - add doubly linked list at bigenning
 * @head: double pointer head of linked list
 * @n: integer for data
 *
 * Return: new_node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
		return (new_node ? free(new_node), NULL : NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
