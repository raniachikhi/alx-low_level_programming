#include "lists.h"

/**
  * sum_listint- a function that returns the sum of all the
  * data (n) of a listint_t linked list.
  * @head: a pointer
  * Return: if the list is empty, return 0
  */

int sum_listint(listint_t *head)
{
	int sum = O;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
