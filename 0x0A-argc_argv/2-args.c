#include <stdio.h>
/**
 * * main - function that prints its name, followed by a new line.
 * * @argc: The number of command line arguments, The size of the argv array
 * * @argv: array containing program command line arguments,array of size argc
 * * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
