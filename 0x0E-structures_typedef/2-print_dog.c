#include "dog.h"
#include <stdio.>
#include <stdlib.h>
/**
  * print_dog-a function that prints a struct dog
  * @d: struct dog to be printed
  * Return: returns void
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
}
