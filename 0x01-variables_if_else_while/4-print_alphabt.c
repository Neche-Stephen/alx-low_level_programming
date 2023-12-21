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
		if (alphabet == 113 || alphabet == 101)
		{
			alphabet++;
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
