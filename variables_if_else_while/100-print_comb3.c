#include <stdio.h>

/**
 * main - print combinations
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i == 8)
					putchar('\n');
				else
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	return (0);
}
