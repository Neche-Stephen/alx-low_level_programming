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