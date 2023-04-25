#include "dog.h"

/**
 * new_dog - it's a function that creates a new dog.
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: this function returns a struct of a dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int l, m, n;
	char *ptr, *qtr;

	dog_t *new_dog;

	l = 0, m = 0;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	while (*(name + l) != '\0')
		l++;
	while (*(owner + m) != '\0')
		m++;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	qtr = malloc(sizeof(char) * m + 1);
	if (qtr == NULL)
	{
		free(new_dog);
		free(ptr);
		return (NULL);
	}
	for (n = 0; n <= l; n++)
		ptr[n] = name[n];
	for (n = 0; n <= m; n++)
		qtr[n] = owner[n];
	new_dog->name = ptr;
	new_dog->age = age;
	new_dog->owner = qtr;
	return (new_dog);
}
