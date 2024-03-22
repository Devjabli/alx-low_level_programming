#include "lists.h"

/**
 * sum_dlistint - calculate all node data
 * @head: the head of the node
 *
 * Return: return the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
