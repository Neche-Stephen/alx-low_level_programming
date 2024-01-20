/**
 * _isalpha - Checks for alphabetic character
 * @c - alphabetic character to check
 * 
 * Return: 1 if alphabetic character and 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <=90) || (c >= 97 && c <=122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
