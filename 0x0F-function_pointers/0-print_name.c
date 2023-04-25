#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name- a function that prints a name
  * @name: name to be printed
  * @f: function's pointer
  * Return: returns a void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(f) (name);
}
