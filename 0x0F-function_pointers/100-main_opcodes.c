#include "3-calc.h"

/**
 * * main - main function.
 * * @argc: argument count
 * * @argv: argument vector
 * *
 * * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int index, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < n; index++)
	{
		printf("%02hhx", *((char *)main + index));
		if (index < n - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
