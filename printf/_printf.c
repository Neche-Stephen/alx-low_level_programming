#include <stdio.h>
#include <string.h>
#include "main.h"

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
	int i;
	size_t length = strlen(format);

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
	}
	return (0);
}