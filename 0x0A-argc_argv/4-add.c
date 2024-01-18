#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function that adds positive numbers from the command line
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on successful execution, 1 on error
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int count = argc - 1;
	int i = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (count--)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
