#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c, g;

	for (g = 0; g <= 10; g++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar ('\n');
	}
}
