#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string whose length we are returning
 *
 * Return: returns an integer, the length of a string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	++s;
	return (1 + _strlen_recursion(s));
}
