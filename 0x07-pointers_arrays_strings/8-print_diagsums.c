#include "main.h"
#include <stdio.h>

/**
 * * * print_diagsums - a function that prints the sum of the two diagonals of a
 * * * square matrix of integers
 * * * @a: square matrix to print the sum of diagonals
 * * * @size: the size of the matrix
 * * *
 */
void print_diagsums(int *a, int size)
{
	int b, add = 0, add2 = 0;

	for (b = 0; b < size; b++)
	{
		add += a[(size + 1) * b];
		add2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", add, add2);
}
