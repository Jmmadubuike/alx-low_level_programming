#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters followed by a new line
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
	_putchar('\n'); /* Print a new line if size is 0 or less */
	return;
	}

	for (row = 1; row <= size; row++)
	{
	for (col = 1; col <= size - row; col++)
	{
		_putchar(' ');
	}

	for (col = 1; col <= row; col++)
	{
	_putchar('#');
	}

	_putchar('\n');
	}
}
