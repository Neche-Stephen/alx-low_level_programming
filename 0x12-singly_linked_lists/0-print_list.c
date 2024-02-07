#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
	const list_t *police;
	int i = 1;
	police = h;

	while (police->next != NULL)
	{
		printf("[%d] %s\n", police->len, police->str);
		police = police->next;
		i++;
	}
	printf("[%d] %s\n", police->len, police->str);
	return (i);

}