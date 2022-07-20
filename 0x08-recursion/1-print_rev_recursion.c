#include "main.h"

/**
 * * _puts_recursion - a function that prints a string in reverse.
 * * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
