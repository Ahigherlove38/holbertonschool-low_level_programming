#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @f: variable to hold the string
 * @name: name of a person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
