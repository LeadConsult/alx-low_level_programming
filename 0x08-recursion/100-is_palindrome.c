#include "main.h"
/**
 * * _strlen_recursion - return the lenght of a string.
 * * @s: string
 * * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * * compare_char - compares each character of the string.
 * * @s: string
 * * @x: smallest iterator.
 * * @y: biggest iterator
 * * Return: string/.
 */
int compare_char(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + compare_char(s, x + 1, y - 1));
	}
	return (0);
}

/**
 * * is_palindrome - checks if a string is a palindrome.
 * * @s: string.
 * * Return: 1 if s is a palindrome, 0 if otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_char(s, 0, _strlen_recursion(s) - 1));
}
