#include "main.h"
/**
 * * _strncat - a function that concatenates two strings
 * * @dest: destination
 * * @src: source
 * * @n: amount of bytes used from src.
 * * Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0, s2 = 0;

	while (*(dest + s1) != '\0')
	{
		s1++;
	}

	while (s2 < n)
	{
		*(dest + s1) = *(src + s2);
		if (*(src + s2) == '\0')
			break;
		s1++;
		s2++;
	}
	return (dest);
}
