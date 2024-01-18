#include <stdio.h>

/**
 * main - prints all arguments the program receives
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: returns zero
*/

int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
