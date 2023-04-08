#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * _strncat - it is a function
  * @dest : character
  * @src : character
  * @n : int
  * Return: returns a char
  */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
