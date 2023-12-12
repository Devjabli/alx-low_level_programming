#include "lists.h"

/**
 * sum_listint - calculates the total
 * @head: first node
 *
 * Return: (total)
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		total += tmp->n;
	}
	return (total);
}
