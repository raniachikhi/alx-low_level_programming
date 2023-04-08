#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * _strstr - it is a function
  * @haystack : character
  * @needle : character
  * Return: returns a char
  */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
