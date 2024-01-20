/**
 * _islower - checks for lowercase characters
 * @c: the character to check
 * Return: 1 if it is lower and 0 if it is not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
