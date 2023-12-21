#include <stdio.h>
/**
* main - Prints alphabet from a - z and A - Z
* Return: returns zero
*/
int main(void)
{
	char alphabet = 97;
	char upper = 65;

	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
