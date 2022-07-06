#include "main.h"
/**
 * * print_sign - a function that prints the sign of a number.
 * * @n : number to check
 * * Return:0 or 1
*/
int print_sign(int n)
{
	int num_sign;

	if (n > 0)
	{
		num_sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num_sign = 0;
		_putchar('0');
	}
	else
	{
		num_sign = -1;
		_putchar('-');
	}
	return (num_sign);
}

