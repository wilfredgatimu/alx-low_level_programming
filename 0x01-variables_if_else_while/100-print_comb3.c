#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int c = 0;

	while (c < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (c != i && c < i)
			{
				putchar('0' + c);
				putchar('0' + i);

				if (i + c != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
