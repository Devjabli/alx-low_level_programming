#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function for the multiplication program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line argument strings.
 *
 * Return: 0 if the program executed successfully, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
