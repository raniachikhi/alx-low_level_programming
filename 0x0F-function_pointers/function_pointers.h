#ifndef _function_pointers
#define _function_pointers

/* _function_pointers */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* _function_pointers */
