#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * is_digit- cheks if there is a non-digit character
  * @str: string input
  *Return: 0 if true, 1 otherwise
  */

int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}


/**
  * _strlen- length of a string
  *@str: string input
  *Return: int
  */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *err- errors
  */

void err(void)
{
	printf("Error\n")
		exit(98);
}

/**
  *main- multiplication of two positive numbers
  *@argc: number of arguments
  *@argv: array of args
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int l1, l2, l, i, c, d1, d2, *res, j = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		err();
	l1 = _strlen(str1);
	l2 = _strlen(str2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		res[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = str1[l1] - '0';
		c = 0;
		for (l2 = _strlen(str2) - 1, l2 >= 0; l2--)
		{
			d2 = str2[l2] - '0';
			c += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[l1 + l2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (res[i])
			j = 1;
		if (j)
			_putchar(res[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
