#include <stdlib.h>
#include "main.h"

/**
  * count_words- function to count the number of words in a string
  * @str: string input
  * Return: number of words in a string
 */

int count_words(char *str)
{
	int i;
	int temp = 0;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			temp = 0;
		if (temp == 0)
		{
			temp = 1;
			l++;
		}
	}
	return (l);
}

/**
  * strtow-  function that splits a string into words.
  * @str : string input
  * Return: returns a pointer to an array of strings (words), NULL otherwise
  */

char **strtow(char *str)
{
	char **m, *temp;
	int i, j = 0, l = 0, w, c = 0, s, e;

	while (*(str + l))
		l++;
	w = count_words(str);
	if (w == 0)
		return (NULL);

	m = (char **)malloc(sizeof(char *) * (w + 1));
	if (w == 0)
		return (NULL);

	m = (char **)malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				temp = (char *)malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (s < e)
					*temp++ = str[s++];
				*temp = '\0';
				m[j] = temp - c;
				j++;
				c = 0;
			}
		}
		if (c++ == 0)
			s = i;
	}

	m[j] = NULL;
	return (m);
}
