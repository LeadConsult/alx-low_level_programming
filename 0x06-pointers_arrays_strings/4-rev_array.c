#include "main.h"

/**
 * * reverse_array - a function that reverses the content of an array of int
 * * @a: array to be reversed
 * * @n: number of elements in array
*/

void reverse_array(int *a, int n)
{
	int i, j, l;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		l = a[i];
		a[i] = a[j];
		a[j--] = l;
	}
}
