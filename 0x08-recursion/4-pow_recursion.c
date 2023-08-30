#include "main.h"
/**
 * pow_recursion - calculates the value of x raised to the power of y.
 * @x: base number.
 * @y: pow number.
 * Return: power number.
 */
int pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * pow_recursion(x, y - 1));
	else
		return (-1);
}
