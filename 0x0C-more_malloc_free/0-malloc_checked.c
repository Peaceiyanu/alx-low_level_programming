#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of money to be allocated
 * Return: pointer to the allocated memory (SUCCESS)
 * 98 if insufficient memory was available (FAILURE)
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
