#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * _memset - it is a function
  * @s : character
  * @b : chatacter
  * @n : unsigned int
  * Return: returns a char
  */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
