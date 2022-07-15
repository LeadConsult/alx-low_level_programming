#include "main.h"
/**
 * * rot13 - a function that encodes a string using rot13
 * * @s: input string.
 * * Return: the encoded string.
*/

char *rot13(char *s)
{
	int a = 0, i;
	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char output[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == input[i])
			{
				*(s + a) = output[i];
				break;
			}
		}
		a++;
	}

	return (s);
}
