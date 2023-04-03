#include "main.h"
/**
  * _strstr - a function that locates a substring
  * @haystack : char input
  * @needle : char input
  * Return:Always 0(Succes)
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
