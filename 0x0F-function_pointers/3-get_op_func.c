#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * * get_op_func -  function that selects the correct function 
 * * to perform the operation asked by the user.
 * * @s: the operator passed as argument to the program
 * * Return: function pointer corresponding to operator given
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}

	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
