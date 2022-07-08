#include "main.h"

/**
 * * print_triangle - a function that prints a triangle, followed by a new line
 * * @size_triangle: size of triangle.
 * * Return: void.
*/
void print_triangle(int size_triangle)
{
	int i, j;

	for (i = 0; i < size_triangle; i++)
	{
		for (j = 1; j < (size_triangle - i); j++)
			_putchar(' ');
		for (j--; j < size_triangle; j++)
			_putchar(35);
		if (i < (size_triangle - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

