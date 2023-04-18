#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
  * struct dog- contains dog's info
  * @name: first element
  * @age: second element
  * @owner : third element
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
