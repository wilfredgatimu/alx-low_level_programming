#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line.
 * multiples of three print Fizz instead of the number
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzBuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s ", buzz);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fizzBuzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
