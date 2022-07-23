#include <stdio.h>
#include <stdlib.h>
/**
 * * main - function that prints its name, followed by a new line.
 * * @argc: The number of command line arguments, The size of the argv array
 * * @argv: array containing program command line arguments,array of size argc
 * * Return: 0 - success.
 */

int main(int argc, char **argv)
{
	int a, b, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
