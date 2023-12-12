#include "lists.h"

/**
 * free_listint - frees lists
 * @head: pointer to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
    listint_t *new, *tmp;

    if (!head)
        return;

    new = *head;

    while (new)
    {
        tmp = new;
        new = new->next;
        free(tmp);
    }
    *head = NULL;
}
