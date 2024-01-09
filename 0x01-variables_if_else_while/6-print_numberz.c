#include <stdio.h>

/**
 * main - Print characters 0 - 9
 * Return: returns zero

*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
