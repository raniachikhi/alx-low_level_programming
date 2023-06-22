#include "main.h"
/**
  * _memcpy - functin that copy memory area
  * @dest : memory area to store
  * @src : initial memory area
  * @n : number of bytes
  *
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for ( ; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
