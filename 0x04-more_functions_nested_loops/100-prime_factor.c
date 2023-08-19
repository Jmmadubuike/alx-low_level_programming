#include <stdio.h>

/**
 * main - function finds and prints the largest prime
 * factor of the number 612852475143
 * Return: 0 all the time.
 */

int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int largest_prime = 2;

	while (number > 1)
	{
	if (number % largest_prime == 0)
	{
	number /= largest_prime;
	}
	else
	{
		largest_prime++;
	}
	}

	printf("%lu\n", largest_prime);
	return (0);
}
