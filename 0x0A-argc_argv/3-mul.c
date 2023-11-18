#include <stdio.h>
#include <stdlib.h>


/*
 * main - Entry point.
 * _atoi - converts a string to an integer
 * @argc: number of command line.
 * @argv: andicate to an array of command line arguments.
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int s;

	if (argc < 4)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
