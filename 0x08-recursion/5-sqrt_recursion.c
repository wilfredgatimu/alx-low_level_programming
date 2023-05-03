#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - it returns the natural square roots of the numbers
 * @n: the numbers to calculate the square roots of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - it recurses to find the natural
 * square root of the numbers
 * @n: the numbers to calculate the sqaure root of
 * @i: the iterators
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
