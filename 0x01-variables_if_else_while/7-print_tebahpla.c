#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse order
 * Return: returns zero
*/
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
