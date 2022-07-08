#include <stdio.h>

/**
 * * main - Entry point
 * * Description: program that finds and prints the largest prime
 * * factor of a number
 * * Return: Always 0.
 */

int main(void)
{
	long int prime_factor, i;

	prime_factor = 612852475143;
	for (i = 2; i <= prime_factor; i++)
	{
		if (prime_factor % i == 0)
		{
			prime_factor /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}

