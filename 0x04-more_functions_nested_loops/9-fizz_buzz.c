#include <stdio.h>

/**
 * * main - check the code
 * * Return: void
*/
int main(void)
{
	int j = 1;

	while (j <= 100)
	{
		if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", j);
		}
		if (j != 100)
		{
			putchar(' ');
		}
		j++;
	}
	putchar('\n');

	return (0);
}

