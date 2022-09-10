#include <stdio.h>
/**
 * main - Prints the alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char g;

	for (g = 'z'; g >= 'a'; g--)
	{
		putchar(g);
	}

	putchar('\n');

	return (0);
}
