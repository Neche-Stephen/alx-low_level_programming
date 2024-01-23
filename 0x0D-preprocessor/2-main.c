#include <stdio.h>
/**
 * main - prints the name of file it is in
 * Return: returns zero
*/
int main(void)
{
	char *file = __FILE__;
	int i = 0;
	printf("%s", file);
	while (i != '\0')
	{
		putchar(file[i]);
	}
	return (0);
}