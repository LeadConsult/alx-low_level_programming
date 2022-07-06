#include "main.h"

/**
 * * print_times_table - a function that prints the n times table.
 * * @n : number of the times table
 * * Return: void
*/
void print_times_table(int n)
{
	int a = 0, x, b;

	if (n < 0 || n > 15)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			x = a * b;
			if (b == 0)
				_putchar('0' + x);
			else if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}
			else if (x < 100)
			{
				_putchar (' ');
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}
			else
			{
				_putchar('0' + x / 100);
				_putchar('0' + (x - 100) / 10);
				_putchar('0' + x % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}

