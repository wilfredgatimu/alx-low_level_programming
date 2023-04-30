#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - it returns the length of a string
 * @s: the strings to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;


	while (s[i] != '\0')
	{
		i++;
	}


	return (i);
}

/**
 * *_strcpy - it copies the strings thar are pointed to by src
 * including the terminating null bytes (\0)
 * to the buffer pointed to by dests
 * @dest: a pointer to the buffer in which we copy the string
 * @src: The string to be copied
 *
 * Return: the pointer to dests
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;


	len = 0;


	while (src[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';


	return (dest);
}

/**
 * new_dog - it creates a new dog
 * @name:the name of the dogs
 * @age: The ages of the dogs
 * @owner: owner of the dogs
 *
 * Return: pointers to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)

	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
