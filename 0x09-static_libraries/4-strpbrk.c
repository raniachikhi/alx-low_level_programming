#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * _strpbrk - it is a function
  * @s : character
  * @accept : character
  * Return: returns a char
  */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
