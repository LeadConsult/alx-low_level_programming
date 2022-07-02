#include <stdio.h>
/**
*main - Print alphabet
* program that prints the alphabet in lowercase, followed by a new line.
*Return: Always (success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
