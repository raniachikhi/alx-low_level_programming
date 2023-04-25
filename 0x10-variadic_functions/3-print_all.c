#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all- a function that prints anything.
 * c = char, i = int, f = float, s = char * (if null print (nil)intead)
 * @format: list of arguments types
 * Return: returns void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *separator = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), separator);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
