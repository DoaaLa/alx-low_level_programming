#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: caracter to add to the array
 *
 * Return: pointer to the array on success
 * Null on fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	while (size != 0)
	{
		array = (char *)malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	return (NULL);
}
