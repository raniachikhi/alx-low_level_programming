#include "main.h"
/**
  * _strpbrk - a function that searches a string for any of a set of bytes
  * @s :character input
  * @accept :character input
  * Return: Always 0(Succes)
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
