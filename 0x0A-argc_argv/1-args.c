#include "main.h"
#include <stdio.h>

/**
 * main - it prints the number of arguments passed to the program 
 * @argc: number of arguments 
 * @argv: array of arguments 
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
       printf("%d\n", argc - 1);

       return (0);
}
