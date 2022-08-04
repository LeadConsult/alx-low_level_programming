#include "variadic_functions.h"

/**
 * * sum_them_all - a function that returns the sum of all its parameters.
 * * @n: amount of arguments.
 * *
 * * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (index = 0; index < n; index++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
