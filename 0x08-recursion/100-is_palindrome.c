#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}



/**
  * check_palindrome - checks if it is
  * @s : string
  * @l : left index
  * @r : right index
  * Return: 1 if true, 0 otherwise
  */

int check_palindrome(char *s, int l, int r)
{
	if (s[l] == s[r])
		if (l  > r / 2)
			return (1);
		else
			return (check_palindrome(s, l + 1, r - 1));
	return (0);
}

/**
  * is_palindrome - returns 1 if a string is a palindrome and 0 if not
  * @s : character input
  * Return: int
  */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
