#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}
	while (src[src_len] != '\0')
	{
	src_len++;
	}

	while (i < src_len)
	{
	dest[dest_len + i] = src[i];
	i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
