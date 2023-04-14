#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked-allocates memory using malloc
  * @b: unisgned integer b input
  * Return: Returns a pointer to the allocated memory, 98 otherwise
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
