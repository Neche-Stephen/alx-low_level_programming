#include <stdio.h>
/**
* main - Prints alphabet from a - z
* Return: returns zero
*/
int main(void)
{
	char alphabet = 97;

	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
