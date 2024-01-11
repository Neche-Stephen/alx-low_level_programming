#include "main.h"

/**
 * _pow_recursion - calculates the power of a number using recursion
 * @x: base number
 * @y: exponent
 *
 * Return: The calculated power of 'x' raised to the power of 'y'.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return x
	}
	--y;
	return x * _pow_recursion(x, y)
}
