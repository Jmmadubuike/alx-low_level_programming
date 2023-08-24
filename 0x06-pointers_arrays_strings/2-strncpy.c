#include "main.h"

/**
 * _strncpy - Copies a string, up to n bytes from src.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}
