#include "main.h"

/**
  * _puts_recursion - print a string , followed by a new line
  * @s: a character input
  * Return: void
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
