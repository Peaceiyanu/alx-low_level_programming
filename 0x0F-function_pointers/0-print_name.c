#include <stdlib.h>
#include "function_pointers_h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name  != NULL && f != NULL)
		f(name)
}
