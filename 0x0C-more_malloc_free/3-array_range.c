#include "main.h"
#include <stdlib.h>

/**
  * array_range- creates an array of integers.
  * @min: inetegr input
  * @max: integer input
  * Return: the pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *p;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
