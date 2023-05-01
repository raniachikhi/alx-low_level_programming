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
	list_t *nnew;
	unsigned int l = 0;

	while (str[l])
		l++;

	nnew = malloc(sizeof(list_t));
	if (!nnew)
		return (NULL);

	nnew->str = strdup(str);
	nnew->l = l;
	nnew->next = (*head);
	(*head) = nnew;

	return (*head);
}
