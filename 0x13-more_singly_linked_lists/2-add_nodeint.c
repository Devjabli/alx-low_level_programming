#include "lists.h"

/**
 * add_nodeint - adding list int
 * @head: header of the link list
 * @n: data list
 * Return: newNode
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
	{
		return (NULL);
	}
	else
	{
		newNode->next = NULL;
		newNode->n = n;
		newNode->next = *head;

		*head = newNode;
	}

	return (newNode);
}
