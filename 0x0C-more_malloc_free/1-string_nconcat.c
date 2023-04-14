#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat- function that concatenates two strings.
  * @s1: character input
  * @s2: character input
  * @n: integer input
  * Return: point to a newly allocated space in memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		c = malloc(sizeof(char) * (l1 + n + 1));
	else
		c = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s)
		return (NULL);
	while (i < l1)
	{
		c[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		c[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		c[i++] = s2[j++];

	c[i] = '\0';

	return (c);
}
