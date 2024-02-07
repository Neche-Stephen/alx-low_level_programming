#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - Computes the number of elements in a linked list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	int i = 1;
	const list_t *temp;

	temp = h;

	if (temp == NULL)
	{
		return;
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
