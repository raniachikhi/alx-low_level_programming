#include "main.h"
#include <stdlib.h>
/**
  * _calloc- allocates memory for an array
  * @nmemb : unsigned integer input
  * @size : unsigned integer input
  * Return: allocated memory
  */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, m;

	m = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(m);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < m; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
