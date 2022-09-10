#include <stdio.h>

/**
 *  main - Omit some alphabets
 *
 *  Return: 0
 */
int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		if (v != 'e' && v != 'q')
		{
			putchar(v);
		}
	}

	putchar('\n');

	return (0);

}
