#include "main.h"

/**
 * print_alphabet - Print all lower case alphabets
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
