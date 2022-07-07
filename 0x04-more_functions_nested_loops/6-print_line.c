#include "main.h"

/**
 * * print_line - a function that draws a straight line in the terminal.
 * * @n : number of times the character _ should be printed
 * * Return: 0
 */
void print_line(int n)
{
	int x = 0;

	while (x < n && n > 0)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
