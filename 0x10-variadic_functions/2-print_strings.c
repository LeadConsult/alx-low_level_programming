#include "variadic_functions.h"

/**
 * * print_strings - a function that prints strings, followed by a new line
 * * @separator: string to be printed between numbers
 * * @n: number of integers passed to the function
 * *
 * * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;
	char *str;

	va_start(valist, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (index < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
