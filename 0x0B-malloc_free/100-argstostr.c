#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * * argstostr - a function that concatenates all the arguments of your program
 * *
 * * @ac: argument count
 * * @av: argument vector
 * *
 * * Return: Always 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, c;
	int len_sum = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len_sum++;
		len_sum++;
	}
	len_sum++;

	arg_concat = malloc(len_sum * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}

	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
		{
			arg_concat[c] = av[a][b];
		}
		arg_concat[c] = '\n';
		c++;
	}
	return (arg_concat);
}
