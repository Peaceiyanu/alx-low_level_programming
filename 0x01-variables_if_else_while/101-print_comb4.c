#include <stdio.h>
/**
 * main - Prints three digits numbers starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int i, p, v;

	for (i = '0'; i <= '9'; i++)
	{
		for (p = '1'; p <= '9'; p++)
		{
			for (v = '2'; v <= '9'; v++)
			{
			if (v > p && p > i)
			{
				putchar(i + '0');
				putchar(p + '0');
				putchar(v + '0');
					if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
