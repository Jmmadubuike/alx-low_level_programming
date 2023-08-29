#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search within.
 * @accept: The set of accepted characters.
 *
 * Return: The number of bytes in the initial segment of `s`
 *         consisting only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAccepted = 1;

	while (*s && isAccepted)
	{
	isAccepted = 0;
		for (int i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		{
		isAccepted = 1;
		count++;
		break;
		}
	}
	if (isAccepted)
	s++;
	}

	return (count);
}
