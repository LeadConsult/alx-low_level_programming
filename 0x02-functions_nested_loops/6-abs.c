#include "main.h"
/**
 * * _abs - a function that computes the absolute value of an integer.
 * * @n: integer to check
 * *
 * * Return: 0 or 1
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
