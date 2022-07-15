#include "main.h"
#include <stdio.h>
/**
 * * infinite_add - a function that adds two numbers.
 * * @n1: number one
 * * @n2: number two
 * * @r: buffer that the function will use to store the result
 * * @size_r: buffer size:
 * * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, op, bg, c, d, add = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		bg = a;
	else
		bg = b;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	a--, b--, size_r--;
	c = *(n1 + a) - 48, d = *(n2 + b) - 48;
	while (bg >= 0)
	{
		op = c + d + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (a > 0)
			a--, c = *(n1 + a) - 48;
		else
			c = 0;
		if (b > 0)
			b--, d = *(n2 + b) - 48;
		else
			d = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
