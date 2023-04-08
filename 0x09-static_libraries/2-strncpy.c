#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * _strncpy- it is a function
  * @dest : character
  * @src : character
  * @n : int
  * Return: returns a char
  */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
