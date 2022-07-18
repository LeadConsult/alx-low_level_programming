#include "main.h"

/**
 * * _memcpy - a function that copies memory area.
 * * @dest: destination memory area
 * * @src: source memory area
 * * @n: bytes from memory area src to memory area dest
 * * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
