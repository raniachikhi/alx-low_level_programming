#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- a function that executes a function given as a parameter.
 * @array: integer input
 * @size: array's size
 * @action: function's pointer
 * Return: returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(action) (array[i]);
		}
	}
}
