#include "lists.h"

/**
 * pop_listint - pop up fitrst node
 * @head: first node
 * Return: return (0);
*/


int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);

	new = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new;
	return (n);
}
