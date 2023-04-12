#include "main.h"
#include <stdlib.h>

/**
  * str_concat- function that concatenates two strings
  * @s1 : character 1
  * @s2 : character 2
  * Return: concatenate s1 and s2, NULL otherwise
  */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		j++;
	res = malloc(sizeof(char) * (i + j + 1));

	if (res == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
