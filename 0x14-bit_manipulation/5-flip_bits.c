#include "main.h"

/**
  * flip_bits- a function that returns the number of bits
  * you would need to flip to get from one number to another
  * @n: the first number
  * @m: the second number
  * Return: number of bits to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, c = 0;
	unsigned long int temp;
	unsigned long int e = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		temp = e >> k;
		if (temp & 1)
			c++;
	}

	return (c);
}
