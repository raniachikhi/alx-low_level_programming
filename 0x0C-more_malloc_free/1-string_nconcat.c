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
	unsigned int i = 0, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l])
		l++;

	c = malloc(sizeof(*c) * l + n + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (l + n); i++)
	{
		if (i < l)
			c[i] = s1[i];
		c[i] = s2[j++];
	}
	c[i] = '\0';
	return (c);
}

}
