#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node- a function that adds a new node at the beginning
 *of a list_t list.
 * @head: double pointer
 * @str: the string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = 0;

	while (str[l])
		l++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->l = l;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
