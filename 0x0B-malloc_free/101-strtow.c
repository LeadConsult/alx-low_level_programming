#include "main.h"
#include <stdlib.h>

/**
 * * strtow - a function that splits a string into str_words.
 * * @str: string to be splited
 * * Return: nothing or null
 */

char **strtow(char *str)
{
	int x, y, k = 0, l, m, count = 0, len;
	char **str_words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
	str_words = malloc((count + 1) * sizeof(char *));
	if (str_words == NULL)
	{
		free(str_words);
		return (NULL);
	}
	for (x = 0; str[x] != '\0' &&  k < count; x++)
	{
		if (str[x] != ' ')
		{
			len = 0;
			for (y = x; str[y] != ' ' && str[y] != '\0'; y++)
				len++;
			str_words[k] = malloc((len + 1) * sizeof(char));
			if (str_words[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(str_words[k]);
				free(str_words);
				return (NULL);
			}
			for (l = 0; l < len; l++, x++)
				str_words[k][l] = str[x];
			str_words[k][l] = '\0', k++;
		}
	}
	str_words[k] = NULL;
	return (str_words);
}
