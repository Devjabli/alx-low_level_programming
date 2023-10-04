#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *test;
	int i; 
	int r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	test = malloc(sizeof(char) * (i + 1));

	if (test == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		test[r] = str[r];

	return (test);
}

