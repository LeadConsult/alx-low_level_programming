#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * * _strdup - a function that returns a pointer to newly allocated space
 * * in memory given as a parameter
 * *
 * * @str: string of chars
 * *
 * * Return: address of the newly allocated memory
 */

char *_strdup(char *str)
{
	unsigned int len;
	unsigned int i, j;
	char *str_dup;
	char *temp = str;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*str++)
		i++;
	len = i;
	str = temp;

	str_dup = malloc(len * sizeof(char) + 1);
	if (str_dup == NULL)
		return (NULL);

	j = 0;
	while (j < len)
	{
		str_dup[j] = str[j];
		j++;
	}
	str_dup[j] = '\0';
	return (str_dup);
}
