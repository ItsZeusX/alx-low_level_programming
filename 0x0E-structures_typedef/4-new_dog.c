#include <stdio.h>
#include <stdlib.h>
#include "dog.h"



char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = i = 0;

	while (src[len] != '\0')
		len++;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}



int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len))
		len++;

	return (len);
}



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	int len, len1;

	len = _strlen(name);
	len1 = _strlen(owner);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (len + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (len1 + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}

	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
