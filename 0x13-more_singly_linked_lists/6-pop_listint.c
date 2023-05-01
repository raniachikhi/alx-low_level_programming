#include "lists.h"

/**
  * pop_listint- a function that deletes the head node of a
  * listint_t linked list, and returns the head node’s data (n).
  * @head: double pointer
  * Return: if the linked list is empty return 0
  */

int pop_listint(listint_t **head)
{
	listint *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
