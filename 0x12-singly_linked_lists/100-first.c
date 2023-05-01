#include <stdio.h>

void void_function(void)__attribute__((constructor));

/**
  * void_function- prints the sentence before the main is executed
  */


void void_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
