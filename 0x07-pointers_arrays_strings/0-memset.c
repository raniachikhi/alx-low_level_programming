#include "main.h"
/**
  * _memset - fill memory with a constant byte
  * @s : memory area to be filled
  * @b : the constant byte
  * @n : number of bytes
  *
  * Return: the new value of the array
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for ( ; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
