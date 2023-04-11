#include "main.h"
#include <stdlib.h>

/**
  * create_array- creates an array of chars, and initializes it.
  * @size : size of an array
  * @c : character input
  * Return: NULL if size=0, pointer to the array otherwise.
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
