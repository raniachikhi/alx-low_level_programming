#include "lists.h"

/**
  * add_nodeint-  a function that adds a new node at the
  * beginning of a listint_t list.
  * @head: double pointer
  * @n: to be inserted in the new node
  * Return:  the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listnt_t *new;

	new = malloc(sizeof(listnt_t));
	if (!new)
		return (NULL);

	new->new = n;
	new->next = *head;
	*head = new;

	return (new);
}
