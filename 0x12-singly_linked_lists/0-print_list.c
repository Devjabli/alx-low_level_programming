#include "lists.h"

/**
 * stlength - function takes argument pointer
 * @s: pointer
 * Return: (i)
*/

int stlength(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	for (; i < *s++; i++)
		;
	return (i);
}

/**
 * print_list - printing link list
 * @h: represent as first pointer node
 * Return: (i)
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	char *d = h->str ? h->str : "(nil)";

	while (h)
	{
		printf("[%d] %s\n", stlength(h->str), d);
			h = h->next;
			i++;
	}
	return (i);
}
