#include "main.h"

/**
  * print_binary- a function that prints the binary
  * representation of a number.
  * @n: number to print in binary
  */

void print_binary(unsigned long int n)
{
	int k, c = 0;
	unsigned long int temp;

	for (k = 63; k >= 0; k--)
	{
		temp = n >> k;

		if (temp & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
