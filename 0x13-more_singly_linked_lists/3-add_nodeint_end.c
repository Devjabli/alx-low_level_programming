#include "lists.h"

/**
 * add_nodeint_end - add int at the end
 * @head: pointer of the start node link list
 * @n: data of link list
 * Return: newNode
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);
	else
	{
		newNode->n = n;
		newNode->next = NULL;
		*head = newNode;
		
	}
	return (newNode);
}
