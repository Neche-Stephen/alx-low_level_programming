#include <stdio.h>

/**
 * main - Prints the number of arguments passed into a program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: returns zero
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", --argc);
	return (0);
}
