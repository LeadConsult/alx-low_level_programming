#include <stdio.h>
#include <stdlib.h>
/**
 * * main - function that prints its name, followed by a new line.
 * * @argc: The number of command line arguments, The size of the argv array
 * * @argv: array containing program command line arguments,array of size argc
 * * Return: 0 - success.
 */

int main(int argc, char  *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
