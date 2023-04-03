#include "main.h"
/**
  * _strpbrk - a function that searches a string for any of a set of bytes
  * @s :character input
  * @accept :character input
  * Return : Always 0(Succes)
  */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
