#include <stdio.h>
/**
 * main - Prints all possible combinations of two 2-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int m, k;

	for (m = 0; m < 100; m++)
	{
		for (k = 0; k < 100; k++)
		{
			if (k > m)
			{
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				if (m != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
