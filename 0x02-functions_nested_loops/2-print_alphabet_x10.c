#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
*/
void print_alphabet_x10(void)
{
	int times = 1;
	int i;

	while (times < 11)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		times++;
	}
}
