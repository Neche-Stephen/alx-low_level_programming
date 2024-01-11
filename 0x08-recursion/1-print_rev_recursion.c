#include "main.h"


int len ()
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}


/**
 * _puts_recursion - prints a string in reverse
 * @s: string to print in reverse
*/
void _print_rev_recursion(char *s)
{
	// Get length of string
	int length;
	length = len(s);
	length = length - 1;
	_putchar(*(s + length));
	--s;


	if (s[length] == '\0')
	{
		// s[length];
		length = length - 1;
		s+=length;
		func(s)
	}
	
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s));
	++s;
	_puts_recursion(s);
}
