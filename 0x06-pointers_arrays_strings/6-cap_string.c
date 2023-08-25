#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if c is a separator, otherwise false.
 */
bool is_separator(char c)
{
	const char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
	if (separators[i] == c)
	{
	return (true);
	}
	}
	return (false);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	bool new_word = true;
	int i = 0;

	while (str[i] != '\0')
	{
	if (is_separator(str[i]))
	{
	new_word = true;
	}
	else if (new_word && str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - ('a' - 'A');
		new_word = false;
	}
	else
	{
		new_word = false;
	}

	i++;
	}

	return (str);
}
