#include "main.h"
/**
  * _strchr-funcion that locates a character in a string
  * @s : string input
  * @c : character input
  * Return: Always 0(Succes)
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for ( ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
