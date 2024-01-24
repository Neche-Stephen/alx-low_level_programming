/**
 * print_name - Prints a name using a specified function.
 *
 * @name: The string containing the name to be printed.
 * @f: A function pointer to the specific printing function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
