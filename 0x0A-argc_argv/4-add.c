#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i; /* Move the variable declaration here */

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++) /* Use the variable 'i' here */
	{
	char *arg = argv[i];
	int j = 0;

	while (arg[j] != '\0')
	{
		if (!isdigit(arg[j]))
		{
		printf("Error\n");
		return (1);
		}
		j++;
	}

	sum += atoi(arg);
	}

	printf("%d\n", sum);

	return (0);
}
