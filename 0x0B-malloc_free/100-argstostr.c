#include "main.h"
#include <stdlib.h>

/**
  * argstostr- function that concatenates all the arguments of your program.
  * @ac: integer input
  * @av: character input
  * Return: Returns a pointer to a new string, or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int i, n;
	int j = 0;
	int m = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] ; n++)
			m++;
	}
	m += ac;

	c = malloc(sizeof(chat) * m + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		c[j] = av[i][n];
		j++;
	}
	if (c[r] == '\0')
		c[j++] = '\n';
	return (c);
}
