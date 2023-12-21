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
 * create_file - function that creating  a file
 * @filename: pointer filename
 * @text_content: content text
 *
 * Return: 1 OR -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t lg;
	ssize_t sizes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		sizes = write(fd, text_content, len);
	close(fd);
	lg = sizes == len ? 1 : -1;
	return (lg);
}
