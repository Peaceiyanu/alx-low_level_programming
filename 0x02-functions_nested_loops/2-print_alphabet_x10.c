#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int g;
	int h;

	for (g = 0; g < 10; g++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar(g);
		}
		_putchar ('\n');
	}
}
