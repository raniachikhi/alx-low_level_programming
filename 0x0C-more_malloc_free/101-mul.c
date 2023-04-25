#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - a function that checks if character is digit
 * @c: the character to check
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - the length of a string
 * @s: the stringinput
 *
 * Return: returns an integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * b_multiply - multiply two big number strings
 * @str1: the number string
 * @str2: the number string
 *
 * Return: the product number string
 */
char *b_multiply(char *str1, char *str2)
{
	char *p;
	int len1, len2, i, j, k, temp;

	len1 = _strlen(str1);
	len2 = _strlen(str2);
	p = malloc(i = temp = len1 + len2);
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
 * main - multiply two number strings
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *ptr;
	int i, j, k;

	if (argc != 3)
		printf("Error\n"), exit(98);

	k = _strlen(argv[1]) + _strlen(argv[2]);
	ptr = b_multiply(argv[1], argv[2]);
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
