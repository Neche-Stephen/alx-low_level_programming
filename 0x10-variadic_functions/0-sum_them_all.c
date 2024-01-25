#include <stdarg.h>
/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The number of integers to sum.
 * @...: Variable number of integers to be summed.
 *
 * Return: The sum of the provided integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start (ap, n); 

	for(i = 0; i < n ; i++)
	{
		sum = sum + va_arg (ap, int);
	}
	va_end(ap);
	return sum;
}
