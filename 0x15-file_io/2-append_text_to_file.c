#include "main.h"

/**
 * _strlen - returns the length
 * @c: string lead for length to check
 *
 * Return: int length
*/

int _strlen(char *c)
{
	int i = 0;

	if (!c)
		return (0);
	while (*c++)
		i++;
	return (i);
}


/**
 * append_text_to_file - appending text to file
 * @filename: pointer filename
 * @text_content: txt to write
 *
 * Return: if succes 1 otherwise if fails 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t sizes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);
	if (len)
		sizes = write(fl, text_content, len);
	close(fl);
	return (sizes == len ? 1 : -1);
}
