#include <stdlib.h>
#include "lists.h"

/**
  * list_len- a function that returns the number of elements in
  * a linked list_t list.
  * @h: a pointer
  * Return: number of elements in a linked list_t list
  */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
