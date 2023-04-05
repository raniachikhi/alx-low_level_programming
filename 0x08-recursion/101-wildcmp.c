#include "main.h"

/**
  * check_str -  if two strings are identical
  * @s1 : string 1
  * @s2 : string 2
  * @l : left index
  * @j : index
  * Return: 1 if true, O otherwise
  */

int check_str(char *s1, char *s2, int l, int j)
{
	if (s1[l] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[l] == s2[j])
		return (check_str(s1, s2, l + 1, j + 1));
	if (s1[l] == '\0' && s2[j] == '*')
		return (check_str(s1, s2, l, j + 1));
	if (s2[j] == '*')
		return (check_str(s1, s2, l + 1, j) || check_str(s1, s2, l, j + 1));
	return (0);
}

/**
  * wildcmp - compares two strings
  * @s1 : address of string 1
  * @s2 : address of string 2
  * Return:  returns 1 if identical, otherwise return 0.
  */

int wildcmp(char *s1, char *s2)
{
	return (check_str(s1, s2, 0, 0));
}
