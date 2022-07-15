#include "main.h"
/**
 * * _strcat - a function that concatenates two strings
 * * @dest: destination
 * * @src: source
 * * Return: the pointer to dest.
*/
char *_strcat(char *dest, char *src)
{
	int str1 = 0;
	int str2 = 0;

	while (*(dest + str1) != '\0')
	{
		str1++;
	}

	while (str2 >= 0)
	{
		*(dest + str1) = *(src + str2);
		if (*(src + str2) == '\0')
			break;
		str1++;
		str2++;
	}
	return (dest);
}

