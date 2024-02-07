#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if ((new->str) == NULL)
	{
		free(new->str);
		return (NULL);
	}
	new->len = strlen(new->str);

	new->next = *head;
	*head = new;
	return (new);
}
