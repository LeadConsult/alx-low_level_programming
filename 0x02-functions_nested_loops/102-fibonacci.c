#include <stdio.h>

/**
 * * main - main entry
 * * Desciption: a program that prints the first 50 Fibonacci numbers
 * * Return: 0 (success)
*/
int main(void)
{
	int i = 0;
	long int x = 0, y = 1, next;

	while (i < 50)
	{
		next = x + y;
		x = y;
		y = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');

	return (0);
}

