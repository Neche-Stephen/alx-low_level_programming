#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - prints the name of file it is in
 * Return: returns zero
*/
int main(void)
{
	char *file = __FILE__;
	int i = 0;

	while (file[i] != '\0')
	{
		_putchar(file[i]);
		i++;
	}
	return (0);
}