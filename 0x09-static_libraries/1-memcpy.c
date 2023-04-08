#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _memcpy - it is a function
  * @dest : character
  * @src : character
  * @n : unsigned int
  * Return: returns a char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
