#include "function_pointers.h"

/**
 * * int_index - a function that searches for an integer.
 * * @array: input integer array.
 * * @size: the number of elements in the array array
 * * @cmp: pointer to a function
 * * Return: check for success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
			if (cmp(array[index]))
				return (index);
	}

	return (-1);
}

