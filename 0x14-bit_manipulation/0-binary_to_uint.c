#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 *
 * @b: A pointer to a binary string.
 *
 * Return: The converted unsigned integer, or 0 if @b is NULL or contains
 *         characters other than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int power;
	int length = strlen(b);
	int i = 0;
	unsigned int sum = 0;
	int f;

	if (b == NULL)
	{
		return (0);
	}
	power = length - 1;
	while(i < length)
	{
		f = b[i] - '0';
		if ((f != 1) && (f != 0))
		{
			return (0);
		};
		sum = sum + (f << power);
		i++;
		power--;
	}
	return (sum);
}
