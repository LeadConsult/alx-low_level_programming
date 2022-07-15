#include "main.h"

/**
 * * string_toupper - a function that changes all 
 * lowercase letters of a string to uppercase.
 * * @x: The string that will be changed
 * *
 * * Return: string
*/

char *string_toupper(char *x)
{
	int a = 0;

	while (x[a])
	{
		if (x[a] < 98 && x[a] <= 122)
		{
			x[a] -= 32;
		}

		a++;
	}

	return (x);
}

