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

	struct dog *nv_dog;

	l = 0, m = 0;
	nv_dog = malloc(sizeof(struct dog));
	if (nv_dog == NULL)
		return (NULL);
	while (*(name + l) != '\0')
		l++;
	while (*(owner + m) != '\0')
		m++;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
	{
		free(nv_dog);
		return (NULL);
	}
	qtr = malloc(sizeof(char) * m + 1);
	if (qtr == NULL)
	{
		free(nv_dog);
		free(ptr);
		return (NULL);
	}
	for (n = 0; n <= l; n++)
		ptr[n] = name[n];
	for (n = 0; n <= m; n++)
		qtr[n] = owner[n];
	nv_dog->name = ptr;
	nv_dog->age = age;
	nv_dog->owner = qtr;
	return (nv_dog);
}
