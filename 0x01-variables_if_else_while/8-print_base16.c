#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexaDecimalNum;

	for (hexaDecimalNum = '0'; hexaDecimalNum <= '9'; hexaDecimalNum++)
	{
		putchar(hexaDecimalNum);
	}
	for (hexaDecimalNum = 'a'; hexaDecimalNum <= 'f'; hexaDecimalNum++)
	{
		putchar(hexaDecimalNum);
	}
	putchar('\n');

	return (0);
}

