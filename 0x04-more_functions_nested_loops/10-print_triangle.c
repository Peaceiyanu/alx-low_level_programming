#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int b, j;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
		for ((j = size - b); j > 0; j--)
		{
			putchar(' ');
		}
		for (j = 0; j < b; j++)
		{
			putchar('#');
		}
		if (b == size)
		{
			continue;
		}
		putchar('\n');
		}
	}
	putchar('\n');
}
