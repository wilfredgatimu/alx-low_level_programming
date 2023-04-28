#include <stdlib.h>
#include "main.h"
/**
 * create_array - it creates an array of size size and assigns char c
 * @size: size of an array
 * @c: char to assign
 * Description: creates array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	str = malloc(sizeof(char) *size;
	if (size == 0 || str == NULL)
	       return (NULL);
	for (i = 0; i < size; i++)
	         str[i] = c;
        return (str);
}
