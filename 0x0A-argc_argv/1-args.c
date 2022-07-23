#include <stdio.h>
/**
 * * main - function that prints its name, followed by a new line.
 * * @argc: The number of command line arguments, The size of the argv array
 * * @argv: array containing the program command line arguments,
 * * Return: 0 - success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
