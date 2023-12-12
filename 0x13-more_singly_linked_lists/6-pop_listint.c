#include "lists.h"

/**
 * pop_listint - pop up fitrst node
 * @head: first node
 * Return: return (0);
*/


int pop_listint(listint_t **head)
{
	listint_t *new = *head;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(new);
	return (0);
}
