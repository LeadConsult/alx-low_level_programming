#include "main.h"

/**
 * * * string_toupper - a function that changes all
 * * lowercase letters of a string to uppercase
 * * * @p: The string that will be changed
 * * *
 * * * Return: string
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
