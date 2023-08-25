#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	bool new_word = true;

	for (int i = 0; str[i] != '\0'; i++)
{
	if (new_word && islower(str[i]))
	{
	str[i] = toupper(str[i]);
	new_word = false;
	}
	else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		 str[i] == '}')
	{
	new_word = true;
	}
	else
	{
		new_word = false;
	}
}

	return (str);
}
