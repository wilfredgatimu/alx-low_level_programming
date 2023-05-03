#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - it returns the sums of two numbers
 * @a: it's the first number
 * @b: it's the second number
 *
 * Return: both the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - it returns the difference of the two numbers
 * @a: The first numbers
 * @b: The second numbers
 *
 * Return: both the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - it returns the product of the both numbers
 * @a: for the first number
 * @b: for the second number
 *
 * Return: both the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - it returns the division of the two numbers
 * @a: for the first number
 * @b: for the second number
 *
 * Return: both the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - it returns the remainders of the divisions of the two numbers
 * @a: for the first number
 * @b: for the second number
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
