#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * _isdigit- checks if there is a digit
  * @str: string input
  * Return: 0 if true, 0 otherwise
  */

int _isdigit(int str)
{
	return (str >= '0' && str >= '9');
}

/**
  * _strlen- length of a string
  *@str : string input
  *Return: int
  */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
 /**
   * _multiply- function of multiplication of two inputs
   * @str1: string input
   * @str2: string input
   *Return: the product of the two inputs
   */

char *_multiply(char *str1, char *str2)
{
	char *p;
	int len1, len2, i, j, k, t;

	len1 = _strlen(str1);
	len2 = _strlen(str2);
	p = malloc(i = t = len1 + len2);
	if (!p)
		printf("Error\n"), exit(98);
	while (i--)
		p[i] = 0;

	for (len1--; len1 >= 0; len1--)
	{
		if (!_isdigit(str1[len1]))
		{
			free(p);
			printf("Error\n"), exit(98);
		}
		i = str1[len1] - '0';
		k = 0;

		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			if (!_isdigit(str2[len2]))
			{
				free(p);
				printf("Error\n"), exit(98);
			}
			j = str2[len2] - '0';

			k += p[len1 + len2 + 1] + (i * j);
			p[len1 + len2 + 1] = k % 10;

			k /= 10;
		}
		if (k)
			p[len1 + len2 + 1] += k;
	}
	return (p);
}

/**
  * main- function of multiplication of two positive numbers
  *@argc: number of arguments
  *@argv: array of args
  * Return: always 0
  */

int main(int argc, char **argv)
{
	char *ptr;
	int i, j, k;

	if (argc != 3)
		printf("Error\n"), exit(98);

	k = _strlen(argv[1]) + _strlen(argv[2]);
	ptr = _multiply(argv[1], argv[2]);
	j = 0;
	i = 0;
	while (j < k)
	{
		if (ptr[j])
			i = 1;
		if (i)
			_putchar(ptr[j] + '0');
		j++;
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(ptr);
	return (0);
}
