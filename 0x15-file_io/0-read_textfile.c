#include "main.h"

/**
 * read_textfile - function to read inside file text
 * @filename: pointer file
 * @letters: characters
 *
 * Return: sizes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t sizes;
	char buffer[BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	sizes = read(fl, &buffer[0], letters);
	sizes = write(STDOUT_FILENO, &buffer[0], sizes);
	close(fl);
	return (sizes);
}
