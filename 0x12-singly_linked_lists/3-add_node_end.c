#include "lists.h"

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at the end
 * @head: double pointer
 * @str: pointer
 *
 * Return: (new
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tp->next)
		tp = tp->next;
	tp->next = new;
	return (new);
}

