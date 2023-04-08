#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _strspn - it is a function
  * @s : character
  * @accept : character
  * Return: returns an unsigned
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
