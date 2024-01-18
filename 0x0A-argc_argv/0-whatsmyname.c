#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: returns zero 
*/

int main (int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
