#include "main.h"

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
	int lts;
	int rwr;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!filename)
		return (-1);
	else if (fd == -1)
		text_content = "";

	for (lts = 0; text_content[lts]; lts++)
		;

	rwr = write(fd, text_content, lts);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
