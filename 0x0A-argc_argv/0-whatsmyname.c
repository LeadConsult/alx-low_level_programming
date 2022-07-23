#include <stdio.h>
/**
 * * main - function that prints its name, followed by a new line.
 * * @argc: The number of command line arguments, The size of the argv array
 * * @argv: array containing the program command line arguments,array of size argc
 * * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
