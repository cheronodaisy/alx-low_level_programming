#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size <= 0)
	{
		return (NULL);
	}						}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	array[index] = c;
	return (array);
}
