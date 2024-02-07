#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
	int i = 1;
	const list_t *temp;

	temp = h;

	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}