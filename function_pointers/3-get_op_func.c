#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Chooses the right function for user requested operation
 * @s: operator argument
 *
 * Return: result of selected choice
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
